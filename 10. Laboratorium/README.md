# Rozwiązywanie układów równań liniowych metodami iteracyjnymi
## Ćwiczenie 7

Dany jest układ równań liniowych <!-- $Ax=b$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\CWGGnbaO9o.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\CWGGnbaO9o.svg#gh-light-mode-only">.

Elementy macierzy <!-- $A$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\Iljj5oBSFh.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\Iljj5oBSFh.svg#gh-light-mode-only"> są zadane wzorem (<!-- $m, k$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\WPe57wA9av.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\WPe57wA9av.svg#gh-light-mode-only"> - parametry zadania podane indywidualnie): 

*Ja w zadaniu indywidualnym miałem przydzieloną poniższą macierz oraz parametry:*

<!-- $
\begin{cases} 
    a_{i, i} = k \\ 
    a_{i, j} = (-1)^j \frac{m}{j} & dla & j > 1 \\
    a_{i, i-1} = \frac{m}{i} \\
    a_{i, j} = 0 & dla & j < i - 1 \\
\end{cases}
$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\LVNnLEGM1m.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\LVNnLEGM1m.svg#gh-light-mode-only">

<!-- $k=11$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\pG64Ilne99.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\pG64Ilne99.svg#gh-light-mode-only">

<!-- $m=2$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\xgWxbPFYV5.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\xgWxbPFYV5.svg#gh-light-mode-only">

Przyjmij wektor <!-- $x$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\4vt7bWN9i6.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\4vt7bWN9i6.svg#gh-light-mode-only"> jako dowolną n-elementową permutację ze zbioru <!-- $\{ 1, -1 \}$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\982xEBWSat.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\982xEBWSat.svg#gh-light-mode-only"> i oblicz wektor  <!-- $b$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\FTJKvDSloe.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\FTJKvDSloe.svg#gh-light-mode-only">. 

<br>

## Zadanie 1
Metodą Jacobiego rozwiąż układ równań liniowych <!-- $Ax=b$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\CWGGnbaO9o.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\CWGGnbaO9o.svg#gh-light-mode-only"> (przyjmując jako niewiadomą wektor <!-- $x$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\4vt7bWN9i6.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\4vt7bWN9i6.svg#gh-light-mode-only">), przyjmując kolejno kryterium stopu:

1. <!-- $||x^{(i+1)} - x^{(i)}|| < \rho$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\ulxmEU2BlF.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\ulxmEU2BlF.svg#gh-light-mode-only">
2. <!-- $||Ax^{(i)} - b || < \rho$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\6KIKtnnPBR.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\6KIKtnnPBR.svg#gh-light-mode-only">

Obliczenia wykonaj dla różnych rozmiarów układu <!-- $n$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\2fzZmam4lV.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\2fzZmam4lV.svg#gh-light-mode-only">, dla różnych wektorów początkowych, a także różnych wartości <!-- $\rho$ --> <img style="transform: translateY(0.1em)" src="..\svg\dark-mode\bIW0CJFPVP.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em)" src="..\svg\light-mode\bIW0CJFPVP.svg#gh-light-mode-only"> w kryteriach stopu. (*Podaj, jak liczono normę*). Wyznacz liczbę iteracji oraz sprawdź różnicę w czasie obliczeń dla obu kryteriów stopu. 

Sprawdź dokładność obliczeń.

<br>

## Zadanie 2
Dowolną metodą znajdź promień spektralny **macierzy iteracji** (dla różnych rozmiarów układu – 
takich, dla których znajdowane były rozwiązania układu). Sprawdź, czy spełnione są założenia o 
zbieżności metody dla zadanego układu. 

Opisz metodę znajdowania promienia spektralnego.
