#include <iostream>
#include <iomanip>
#include <chrono>
#include <vector>
#include <cfloat>

using namespace std;

typedef double type;
typedef unsigned int ui;

struct Timer {
    std::chrono::time_point<std::chrono::high_resolution_clock> start_t, curr_t;
    chrono::duration<double> duration{};
    double total = 0;
    int count = 0;

    void start() {
        start_t = chrono::high_resolution_clock::now();
        count++;
    }

    void stop() {
        curr_t = chrono::high_resolution_clock::now();
        duration = curr_t - start_t;
        total += duration.count();
    }

    [[nodiscard]] double get_total() const {
        return total;
    }

    [[nodiscard]] int get_count() const {
        return count;
    }
};

type calc_next_x(type x_prev, type x_curr);
type calc_x_k(ui k, type x_0, type x_1);
vector<type> calc_all_to_k(ui k, type x_0, type x_1);
void measure_time(ui k, type x_0, type x_1, int reps);

int main() {
    type x_0 = (type)11 / 2;
    type x_1 = (type)61 / 11;
    ui k = 34;

    // Types mantissa digits
    printf("FLT_MANT_DIG      %d\n", FLT_MANT_DIG);
    printf("DBL_MANT_DIG      %d\n", DBL_MANT_DIG);
    printf("LDBL_MANT_DIG     %d\n", LDBL_MANT_DIG);

    // Perform calculations
    type x_k = calc_x_k(k, x_0, x_1);
    vector<type> all_to_x_k = calc_all_to_k(k, x_0, x_1);

    // Display up to 25 digits
    cout << setprecision(25);

    // Display only the x_k value
    cout << "\nUsing type of size: " << sizeof x_k << " bytes" << endl;
    cout << "Min number: " << numeric_limits<type>::min() << endl;
    cout << "Max number: " << numeric_limits<type>::max() << endl;
    cout << "x_0 = " << x_0 << endl;
    cout << "x_1 = " << x_1 << endl;
    cout << "x_" << k << " = " << x_k << endl;

    // Display all subsequent values of x_i, where i in [0, 1, 2, ..., k]
    cout << "\nSubsequent values: " << endl;
    ui i = 0;
    for (type x_i: all_to_x_k) {
        cout << "x_" << i++ << " = " << x_i << endl;
    }

    // Show all values formatted as a Python list (to copy the results)
    cout << "\nSubsequent values as a Python list (to copy): " << endl;
    cout << "[";
    for (type x_i: all_to_x_k) {
        cout << x_i << ",";
    }
    cout << "\b]";

    // Measure computations time
    measure_time(k, x_0, x_1, 10000);

    return 0;
}

type calc_next_x(type x_prev, type x_curr) {
    return 111 - (1130 - 3000 / x_prev) / x_curr;
}

type calc_x_k(ui k, type x_0, type x_1) {
    if (k == 0) return x_0;
    if (k == 1) return x_1;

    type x_prev, x_curr, x_next;
    x_prev = x_0;
    x_curr = x_1;

    for (ui i = 2; i <= k; i++) {
        x_next = calc_next_x(x_prev, x_curr);
        x_prev = x_curr;
        x_curr = x_next;
    }

    return x_curr;
}

vector<type> calc_all_to_k(ui k, type x_0, type x_1) {
    if (k == 0) return vector<type>{x_0};
    if (k == 1) return vector<type>{x_0, x_1};

    vector<type> values{x_0, x_1};

    for (ui i = 2; i <= k; i++) {
        values.push_back(calc_next_x(values.at(i - 2), values.at(i - 1)));
    }

    return values;
}

void measure_time(ui k, type x_0, type x_1, int reps) {
    Timer timer;

    for (int i = 0; i < reps; i++) {
        timer.start();
        calc_x_k(k, x_0, x_1);
        timer.stop();
    }

    double total = timer.get_total();
    double total_ms = total * 1000;
    double total_us = total_ms * 1000;

    cout << "Time measurement results:" << endl;
    cout << "Total time: " << total_ms << " ms [10^-3s]" << endl;
    cout << "Average time: " << total_us / timer.get_count() << " μs [10^-6s]" << endl;
}
