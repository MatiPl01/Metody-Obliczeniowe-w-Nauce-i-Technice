# Interpolacja - Zagadnienie Hermite'a
## Ćwiczenie 2b

Dla jednej z poniższych funkcji (*podanej w zadaniu indywidualnym*) wyznacz dla zagadnienia Hermite'a wielomian interpolujący w postaci Hermite'a. (*wystarczy zaimplementować algorytm, pozwalający na wyznaczenie wielomianu interpolacyjnego z wykorzystaniem pierwszych pochodnych*). 

Interpolację przeprowadź dla różnej liczby węzłów (np. <!-- $n = 3, 4, 5, 7, 10, 15, 20$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\ZTnL16OEqr.svg">). Dla każdego przypadku interpolacji porównaj wyniki otrzymane dla różnego rozmieszczenia węzłów: równo odległe oraz Czebyszewa (zera wielomianu Czebyszewa).

Oceń <u>dokładność</u>, z jaką wielomian przybliża zadaną funkcję. 

Poszukaj wielomianu, który najlepiej przybliża zadaną funkcję.

Wyszukaj stopień wielomianu, dla którego można zauważyć efekt Runge'go (dla równomiernego rozmieszczenia węzłów). Porównaj z wyznaczonym wielomianem dla węzłów Czebyszewa.

##### *Uwaga*: Zalecane jest rysowanie wykresów funkcji, wielomianów interpolujących, ... , czyli graficzne ilustrowanie przeprowadzonych eksperymentów numerycznych. W sprawozdaniu należy umieścić wykresy jedynie dla wybranych przypadków!

<br>

## Funkcja z zadania indywidualnego

<!-- $f(x)=e^{-k\cdot sin(mx)}+k\cdot sin(mx) - 1$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\y0AtuGGiA9.svg">

gdzie <!-- $k=2$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\RyofpdR5HO.svg">, <!-- $m=2$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\u3GNINVA2a.svg">, <!-- $x\in[-\pi,2\pi]$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\hZqUPDs1Oz.svg">
