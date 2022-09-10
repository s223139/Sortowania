# Sortowania

Projekt służy do porównywania 6 różnych algorytmów sortowania, są to:<br>

• Sortowanie przez wstawianie (Insertion Sort)<br>
• Sortowanie przez selekcję (Selection Sort)<br>
• Sortowanie bąbelkowe (Bubble Sort)<br>
• Sortowanie szybkie (Quick Sort)<br>
• Sortowanie Shella (Shell sort)<br>
• Sortowanie przez kopcowanie (Heap Sort)<br>

Oraz przetestowania ich i porównania wyników na tablicach o wartościach typu int z zakresu <-100; 100> w następujących testach:<br>

• Test 1 - Dla danych wygenerowanych losowo<br>
• Test 2 - Dla danych posortowanych malejąco<br>
• Test 3 - Dla danych posortowanych rosnąco<br>

Poniżej można zobaczyć przykładowe resultaty dla 5000, 25000, 50000, 100000, 150000, 200000, 250000 danych w tablicy. <br>

![dane](https://i.imgur.com/YyK4Sjt.png)

Można zauważyć, że algorytmy z grupy pierwszej radzą sobie dobrze tylko przy małej ilości danych, przy większej, czas wykonywania znacząco wzrasta. Jest to niezależne od tego czy dane są posortowane losowo czy odwrotnie. Wyjątkiem jest tutaj Insertion Sort, w przypadku danych posortowanych właściwie –  dzięki swojej specyfice działania radzi on sobie bardzo dobrze, ponieważ właściwie tylko pomija przez cały rozmiar tablicy.<br> 
Algorytmy z grupy drugiej radzą sobie na tyle dobrze, że w przypadku gdy algorytmy grupy pierwszej osiągają już wartości które dałyby wynik łącznie ponad 15 minut dla wszystkich testów, te nadal wykonują je w ciągu mniej niż sekundy.<br>
Algorytmy osiągały wyniki pokrywające się z tabelą złożoności czasowych, lecz możemy zauważyć, że nie było testu w którym wszystkie algorytmy jednocześnie osiągnęłyby swoją pesymistyczną albo optymistyczną złożoność. Dowodzi to temu, że w zależności od ilości danych oraz tego jak są one ułożone należy wykorzystywać odpowiednie algorytmy. <br>
Jednakże możemy zauważyć, że  na ogół algorytmy najlepiej radziły sobie z posortowaną właściwie tablicą. Najgorzej natomiast z tablicą posortowaną odwrotnie <br>
