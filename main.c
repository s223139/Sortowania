#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "algorytmy.h"


void gen_file(int *tab, int n, int from, int to, int test)
{
   // printf("%d",test,"\n");
    int i;
    FILE *dane;
    dane=fopen("dane","w");
    for(i=0; i<n; i++)
    {
        tab[i]=(rand()%(to-from+1)+from);
    }
    if(test == 2)
    {
        quick_sort(tab, 0, n);
        for(int i=0; i<n/2; i++)
        {
            swap(&tab[i], &tab[n-i-1]);
        }
    }
    else if (test == 3)
    {
        quick_sort(tab, 0, n);

    }
    for(i=0; i<n; i++)
    {
        fprintf(dane,"%d\n", tab[i]);
    }
    fclose(dane);
}

void read_tab(int *tab, int n)
{
    FILE *f;
    f=fopen("dane","r");
    for(int i=0; i<n; i++)
    {
        fscanf(f, "%d", &tab[i]);
    }
    fclose(f);
}

int main()
{
    int n, *tab, min, max;
    clock_t start_t;
    double t;
    min = -100;
    max = 100;

    printf("Podaj dlugosc tablicy:\n");
    scanf("%d", &n);
    tab = (int*) malloc(n*sizeof(int));
    for(int i = 0; i<3; i++)
    {
        printf("\nTest %d\n", i+1);
        gen_file(tab, n, min, max, i+1);

        printf("1. Insert sort ");
        read_tab(tab, n);
        start_t = clock();
        insert_sort(tab, n);
        t = ((double)(clock() - start_t))/CLOCKS_PER_SEC;
        printf("Czas: %fs\n", t);

        printf("2. Select sort ");
        read_tab(tab, n);
        start_t = clock();
        selection_sort(tab, n);
        t = ((double)(clock() - start_t))/CLOCKS_PER_SEC;
        printf("Czas: %fs\n", t);

        printf("3. Bubble sort ");
        read_tab(tab, n);
        start_t = clock();
        bubble_sort(tab, n);
        t = ((double)(clock() - start_t))/CLOCKS_PER_SEC;
        printf("Czas: %fs\n", t);

        printf("4. Quick sort ");
        read_tab(tab, n);
        start_t = clock();
        quick_sort(tab, 0, n);
        t = ((double)(clock() - start_t))/CLOCKS_PER_SEC;
        printf("Czas: %fs\n", t);

        printf("5. Shell sort ");
        read_tab(tab, n);
        start_t = clock();
        shell_sort(tab, n);
        t = ((double)(clock() - start_t))/CLOCKS_PER_SEC;
        printf("Czas: %fs\n", t);

        printf("6. Heap sort ");
        read_tab(tab, n);
        start_t = clock();
        heap_sort(tab, n);
        t = ((double)(clock() - start_t))/CLOCKS_PER_SEC;
        printf("Czas: %fs\n", t);
    }
}
