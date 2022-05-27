# Rozwiązywanie równań i układów równań nieliniowych
## Ćwiczenie 5

<br>

## Zadanie 1
Stosując metodę Newtona oraz metodę siecznych wyznacz pierwiastki równania <!-- $f(x) = 0$ --> <img style="transform: translateY(0.1em)" src="..\svg\dark-mode\XsGKpMeGue.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em)" src="..\svg\light-mode\XsGKpMeGue.svg#gh-light-mode-only"> w zadanym przedziale <!-- $[a, b]$ --> <img style="transform: translateY(0.1em)" src="..\svg\dark-mode\gPcw7Cn5IL.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em)" src="..\svg\light-mode\gPcw7Cn5IL.svg#gh-light-mode-only">. Dla metody Newtona wybierz punkty startowe rozpoczynając 
od wartości końców przedziału, zmniejszając je o 0.1 w kolejnych eksperymentach 
numerycznych. Odpowiednio dla metody siecznej jeden z końców przedziału stanowić powinna 
wartość punktu startowego dla metody Newtona, a drugi – początek, a następnie koniec przedziału <!-- $[a, b]$ --> <img style="transform: translateY(0.1em)" src="..\svg\dark-mode\gPcw7Cn5IL.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em)" src="..\svg\light-mode\gPcw7Cn5IL.svg#gh-light-mode-only">. 
Porównaj liczbę iteracji dla obu tych metod (dla różnych dokładności <!-- $\rho$ --> <img style="transform: translateY(0.1em)" src="..\svg\dark-mode\bIW0CJFPVP.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em)" src="..\svg\light-mode\bIW0CJFPVP.svg#gh-light-mode-only">), stosując jako kryterium 
stopu: 

- <!-- $||X_{(i+i)} - X_{(i)}|| \lt \rho$ --> <img style="transform: translateY(0.1em)" src="..\svg\dark-mode\VhKWbIncVR.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em)" src="..\svg\light-mode\VhKWbIncVR.svg#gh-light-mode-only">
- <!-- $||F(X_i)|| \lt \rho$ --> <img style="transform: translateY(0.1em)" src="..\svg\dark-mode\BeXoaDYJY8.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em)" src="..\svg\light-mode\BeXoaDYJY8.svg#gh-light-mode-only">

### Funkcja z zadania indywidualnego
<!-- $f(x) = x^n - (1-x)^m$ --> <img style="transform: translateY(0.1em)" src="..\svg\dark-mode\0Sk9Tw2JeL.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em)" src="..\svg\light-mode\0Sk9Tw2JeL.svg#gh-light-mode-only">

<!-- $n=10, m=15, x \in [-0.5, 1]$ --> <img style="transform: translateY(0.1em)" src="..\svg\dark-mode\t0Qws8zv0G.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em)" src="..\svg\light-mode\t0Qws8zv0G.svg#gh-light-mode-only">

<br>

## Zadanie 2
Rozwiąż wskazany układ równań metodą Newtona. Przeprowadź eksperymenty dla różnych wektorów początkowych. Sprawdź, ile rozwiązań ma układ. Przy jakich wektorach początkowych metoda nie zbiega do rozwiązania? Jakie wektory początkowe doprowadzają do jakiego rozwiązania? Należy także zastosować dwa różne kryteria stopu.

### Układ równań z zadania indywidualnego
<!-- $
\begin{cases} 
    x_1^2-4x_2^2+x_3^3=1 \\ 
    \\
    2x_1^2+4x_2^2-3x_3=0 \\
    \\
    x_1^2-2x_2+x_3^2=1
\end{cases}
$ --> <img style="transform: translateY(0.1em)" src="..\svg\dark-mode\raETtZGvAq.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em)" src="..\svg\light-mode\raETtZGvAq.svg#gh-light-mode-only">
