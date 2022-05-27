# Rozwiązywanie układów równań liniowych metodami iteracyjnymi
## Ćwiczenie 7

Dany jest układ równań liniowych <!-- $Ax=b$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\CWGGnbaO9o.svg">.

Elementy macierzy <!-- $A$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\Iljj5oBSFh.svg"> są zadane wzorem (<!-- $m, k$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\WPe57wA9av.svg"> - parametry zadania podane indywidualnie): 

*Ja w zadaniu indywidualnym miałem przydzieloną poniższą macierz oraz parametry:*

<!-- $
\begin{cases} 
    a_{i, i} = k \\ 
    a_{i, j} = (-1)^j \frac{m}{j} & dla & j > 1 \\
    a_{i, i-1} = \frac{m}{i} \\
    a_{i, j} = 0 & dla & j < i - 1 \\
\end{cases}
$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\LVNnLEGM1m.svg">

<!-- $k=11$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\pG64Ilne99.svg">

<!-- $m=2$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\xgWxbPFYV5.svg">

Przyjmij wektor <!-- $x$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\4vt7bWN9i6.svg"> jako dowolną n-elementową permutację ze zbioru <!-- $\{ 1, -1 \}$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\982xEBWSat.svg"> i oblicz wektor  <!-- $b$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\FTJKvDSloe.svg">. 

<br>

## Zadanie 1
Metodą Jacobiego rozwiąż układ równań liniowych <!-- $Ax=b$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\CWGGnbaO9o.svg"> (przyjmując jako niewiadomą wektor <!-- $x$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\4vt7bWN9i6.svg">), przyjmując kolejno kryterium stopu:

1. <!-- $||x^{(i+1)} - x^{(i)}|| < \rho$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\ulxmEU2BlF.svg">
2. <!-- $||Ax^{(i)} - b || < \rho$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\6KIKtnnPBR.svg">

Obliczenia wykonaj dla różnych rozmiarów układu <!-- $n$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\2fzZmam4lV.svg">, dla różnych wektorów początkowych, a także różnych wartości <!-- $\rho$ --> <img style="transform: translateY(0.1em)" src="..\svg\dark-mode\bIW0CJFPVP.svg"> w kryteriach stopu. (*Podaj, jak liczono normę*). Wyznacz liczbę iteracji oraz sprawdź różnicę w czasie obliczeń dla obu kryteriów stopu. 

Sprawdź dokładność obliczeń.

<br>

## Zadanie 2
Dowolną metodą znajdź promień spektralny **macierzy iteracji** (dla różnych rozmiarów układu – 
takich, dla których znajdowane były rozwiązania układu). Sprawdź, czy spełnione są założenia o 
zbieżności metody dla zadanego układu. 

Opisz metodę znajdowania promienia spektralnego.
