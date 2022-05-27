# Rozwiązywanie układów równań liniowych metodami bezpośrednimi
## Ćwiczenie 6

Dany jest układ równań liniowych <!-- $Ax=b$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\CWGGnbaO9o.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\CWGGnbaO9o.svg#gh-light-mode-only">.

<br>

## Zadanie 1
Elementy macierzy <!-- $A$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\Iljj5oBSFh.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\Iljj5oBSFh.svg#gh-light-mode-only"> o wymiarze <!-- $n \times n$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\0gbYgA8clr.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\0gbYgA8clr.svg#gh-light-mode-only"> są określone wzorem:

<!-- $
\begin{cases} 
    a_{1, j} = 1 \\ 
    a_{i, j} = \frac{1}{i + j - 1}, & dla \hspace{10px} i \neq 1 \\
\end{cases}
$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\7k7KXlAlBM.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\7k7KXlAlBM.svg#gh-light-mode-only">

gdzie <!-- $i, j \in \{1, 2, ..., n\}$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\9sQDE4tzCJ.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\9sQDE4tzCJ.svg#gh-light-mode-only">

Przyjmij wektor <!-- $x$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\4vt7bWN9i6.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\4vt7bWN9i6.svg#gh-light-mode-only"> jako dowolną n−elementową permutację ze zbioru <!-- $\{ 1, -1 \}$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\982xEBWSat.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\982xEBWSat.svg#gh-light-mode-only"> i oblicz wektor <!-- $b$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\FTJKvDSloe.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\FTJKvDSloe.svg#gh-light-mode-only">. 
Następnie, metodą eliminacji Gaussa, rozwiąż układ równań liniowych <!-- $Ax=b$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\CWGGnbaO9o.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\CWGGnbaO9o.svg#gh-light-mode-only"> (przyjmując jako 
niewiadomą wektor <!-- $x$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\4vt7bWN9i6.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\4vt7bWN9i6.svg#gh-light-mode-only">). Przyjmij różną precyzję dla znanych wartości macierzy <!-- $A$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\Iljj5oBSFh.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\Iljj5oBSFh.svg#gh-light-mode-only">  i wektora <!-- $b$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\FTJKvDSloe.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\FTJKvDSloe.svg#gh-light-mode-only">. 
Sprawdź, jak błędy zaokrągleń zaburzają rozwiązanie dla różnych rozmiarów układu (porównaj – 
zgodnie z wybraną normą – wektory <!-- $x$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\4vt7bWN9i6.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\4vt7bWN9i6.svg#gh-light-mode-only"> obliczony z <!-- $x$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\4vt7bWN9i6.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\4vt7bWN9i6.svg#gh-light-mode-only"> zadanym). Przeprowadź eksperymenty dla różnych rozmiarów układu.

<br>

## Zadanie 2

Powtórz eksperyment dla macierzy zadanej wzorem:

<!-- $
\begin{cases} 
    a_{1, j} = \frac{2i}{j} & dla j \ge i \\ 
    a_{i, j} = a_{j, i} & dla j < i \\
\end{cases}
$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\n6z5wOcMPw.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\n6z5wOcMPw.svg#gh-light-mode-only">

gdzie <!-- $i, j \in \{1, 2, ..., n\}$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\9sQDE4tzCJ.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\9sQDE4tzCJ.svg#gh-light-mode-only">

Porównaj wyniki z tym, co otrzymano w przypadku układu z punktu 1). Spróbuj uzasadnić, skąd 
biorą się różnice w wynikach. Sprawdź uwarunkowanie obu układów.

<br>

## Zadanie 3

Powtórz eksperyment dla jednej z macierzy zadanej wzorem poniżej (macierz i parametry podane 
w zadaniu indywidualnym). Następnie rozwiąż układ metodą przeznaczoną do rozwiązywania 
układów z macierzą trójdiagonalną. Porównaj wyniki otrzymane dwoma metodami (czas, 
dokładność obliczeń i zajętość pamięci) dla różnych rozmiarów układu. Przy porównywaniu 
czasów należy pominąć czas tworzenia układu. Opisz, jak w metodzie dla układów z macierzą
trójdiagonalną przechowywano i wykorzystywano macierz <!-- $A$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\Iljj5oBSFh.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\Iljj5oBSFh.svg#gh-light-mode-only">.

*Ja w zadaniu indywidualnym miałem przydzieloną poniższą macierz:*

<!-- $
\begin{cases} 
    a_{i, i} = k \\ 
    a_{i, i + 1} = \frac{1}{i + m} \\
    a_{i, i - 1} = \frac{k}{1 + m + i} & dla & i > 1 \\
    a_{i, j} = 0 & dla & j < i - 1 & oraz & j > i + 1 \\
\end{cases}
$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\4BmNvAFmyh.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\4BmNvAFmyh.svg#gh-light-mode-only">  

gdzie <!-- $i, j \in \{1, 2, ..., n\}$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\9sQDE4tzCJ.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\9sQDE4tzCJ.svg#gh-light-mode-only">

<!-- $k=8$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\ZJ2pULi42I.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\ZJ2pULi42I.svg#gh-light-mode-only">

<!-- $m=3$ --> <img style="transform: translateY(0.1em);" src="..\svg\dark-mode\A9GBMQvq17.svg#gh-dark-mode-only"><img style="transform: translateY(0.1em);" src="..\svg\light-mode\A9GBMQvq17.svg#gh-light-mode-only">
