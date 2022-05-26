# Rozwiązywanie układów równań liniowych metodami bezpośrednimi
## Ćwiczenie 6

Dany jest układ równań liniowych <!-- $Ax=b$ --> <img style="transform: translateY(0.1em);" src="..\svg\CWGGnbaO9o.svg">.

<br>

## Zadanie 1
Elementy macierzy <!-- $A$ --> <img style="transform: translateY(0.1em);" src="..\svg\Iljj5oBSFh.svg"> o wymiarze <!-- $n \times n$ --> <img style="transform: translateY(0.1em);" src="..\svg\0gbYgA8clr.svg"> są określone wzorem:

<!-- $
\begin{cases} 
    a_{1, j} = 1 \\ 
    a_{i, j} = \frac{1}{i + j - 1}, & dla \hspace{10px} i \neq 1 \\
\end{cases}
$ --> <img style="transform: translateY(0.1em);" src="..\svg\7k7KXlAlBM.svg">

gdzie <!-- $i, j \in \{1, 2, ..., n\}$ --> <img style="transform: translateY(0.1em);" src="..\svg\9sQDE4tzCJ.svg">

Przyjmij wektor <!-- $x$ --> <img style="transform: translateY(0.1em);" src="..\svg\4vt7bWN9i6.svg"> jako dowolną n−elementową permutację ze zbioru <!-- $\{ 1, -1 \}$ --> <img style="transform: translateY(0.1em);" src="..\svg\982xEBWSat.svg"> i oblicz wektor <!-- $b$ --> <img style="transform: translateY(0.1em);" src="..\svg\FTJKvDSloe.svg">. 
Następnie, metodą eliminacji Gaussa, rozwiąż układ równań liniowych <!-- $Ax=b$ --> <img style="transform: translateY(0.1em);" src="..\svg\CWGGnbaO9o.svg"> (przyjmując jako 
niewiadomą wektor <!-- $x$ --> <img style="transform: translateY(0.1em);" src="..\svg\4vt7bWN9i6.svg">). Przyjmij różną precyzję dla znanych wartości macierzy <!-- $A$ --> <img style="transform: translateY(0.1em);" src="..\svg\Iljj5oBSFh.svg">  i wektora <!-- $b$ --> <img style="transform: translateY(0.1em);" src="..\svg\FTJKvDSloe.svg">. 
Sprawdź, jak błędy zaokrągleń zaburzają rozwiązanie dla różnych rozmiarów układu (porównaj – 
zgodnie z wybraną normą – wektory <!-- $x$ --> <img style="transform: translateY(0.1em);" src="..\svg\4vt7bWN9i6.svg"> obliczony z <!-- $x$ --> <img style="transform: translateY(0.1em);" src="..\svg\4vt7bWN9i6.svg"> zadanym). Przeprowadź eksperymenty dla 
różnych rozmiarów układu.

<br>

## Zadanie 2

Powtórz eksperyment dla macierzy zadanej wzorem:

<!-- $
\begin{cases} 
    a_{1, j} = \frac{2i}{j} & dla j \ge i \\ 
    a_{i, j} = a_{j, i} & dla j < i \\
\end{cases}
$ --> <img style="transform: translateY(0.1em);" src="..\svg\n6z5wOcMPw.svg">

gdzie <!-- $i, j \in \{1, 2, ..., n\}$ --> <img style="transform: translateY(0.1em);" src="..\svg\9sQDE4tzCJ.svg">

Porównaj wyniki z tym, co otrzymano w przypadku układu z punktu 1). Spróbuj uzasadnić, skąd 
biorą się różnice w wynikach. Sprawdź uwarunkowanie obu układów.

<br>

## Zadanie 3

Powtórz eksperyment dla jednej z macierzy zadanej wzorem poniżej (macierz i parametry podane 
w zadaniu indywidualnym). Następnie rozwiąż układ metodą przeznaczoną do rozwiązywania 
układów z macierzą trójdiagonalną. Porównaj wyniki otrzymane dwoma metodami (czas, 
dokładność obliczeń i zajętość pamięci) dla różnych rozmiarów układu. Przy porównywaniu 
czasów należy pominąć czas tworzenia układu. Opisz, jak w metodzie dla układów z macierzą
trójdiagonalną przechowywano i wykorzystywano macierz <!-- $A$ --> <img style="transform: translateY(0.1em);" src="..\svg\Iljj5oBSFh.svg">.

*Ja w zadaniu indywidualnym miałem przydzieloną poniższą macierz:*

<!-- $
\begin{cases} 
    a_{i, i} = k \\ 
    a_{i, i + 1} = \frac{1}{i + m} \\
    a_{i, i - 1} = \frac{k}{1 + m + i} & dla & i > 1 \\
    a_{i, j} = 0 & dla & j < i - 1 & oraz & j > i + 1 \\
\end{cases}
$ --> <img style="transform: translateY(0.1em);" src="..\svg\4BmNvAFmyh.svg"> 

gdzie <!-- $i, j \in \{1, 2, ..., n\}$ --> <img style="transform: translateY(0.1em);" src="..\svg\9sQDE4tzCJ.svg">

<!-- $k=8$ --> <img style="transform: translateY(0.1em);" src="..\svg\ZJ2pULi42I.svg">

<!-- $m=3$ --> <img style="transform: translateY(0.1em);" src="..\svg\A9GBMQvq17.svg">
