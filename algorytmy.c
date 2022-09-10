#include "algorytmy.h"


void insert_sort(int *tab, int n)
{
    int i,x,j;
    for(i=1; i<n;i++)
    {
        x=tab[i];
        j=i-1;
        while( tab[j]>x && j>=0)
        {
            tab[j+1]=tab[j]; j--;
        }
        tab[j+1]=x;
    }
}

void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}



void selection_sort(int *tab, int n)
{
    int i, j, min_idx;


    for (i = 0; i < n-1; i++)
    {

        min_idx = i;
        for (j = i+1; j < n; j++)
            if (tab[j] < tab[min_idx])
                min_idx = j;


        swap(&tab[min_idx], &tab[i]);
    }
}

void bubble_sort(int *tab, int n)
{
    int i, j, pom;
    for(j=0;j<n-1;j++)
    {
        for(i=n-2;i>=j;i--)
            if(tab[i]>tab[i+1])
            {
                pom=tab[i];
                tab[i]=tab[i+1];
                tab[i+1]=pom;
            }
    }
}

int partition(int arr[], int startingIndex, int endingIndex) {
    int pivot = arr[endingIndex];
    int i = (startingIndex - 1);
    for (int j = startingIndex; j <= endingIndex - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[endingIndex]);
    return (i+1);
}

void quick_sort(int arr[], int startingIndex, int endingIndex) {
    if (startingIndex < endingIndex) {
        int partitioningIndex = partition(arr, startingIndex, endingIndex);
        quick_sort(arr, startingIndex, partitioningIndex - 1);
        quick_sort(arr, partitioningIndex + 1, endingIndex);
    }
}



void shell_sort(int *tab, int n) {
    for (int inter=n/2; inter>0; inter/=2) {
        for (int i=inter; i<n; i+=1) {
            int temp=tab[i];
            int j;
            for (j=i; j>=inter && tab[j-inter]>temp; j-=inter) {
                tab[j]=tab[j-inter];
            }
            tab[j]=temp;
        }
    }
}



void heap(int *tab, int n, int i) {

    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && tab[left] > tab[largest])
        largest = left;

    if (right < n && tab[right] > tab[largest])
        largest = right;

    if (largest != i) {
        swap(&tab[i], &tab[largest]);
        heap(tab, n, largest);
    }
}



void heap_sort(int *tab, int n) {

    for (int i = n / 2 - 1; i >= 0; i--)
        heap(tab, n, i);

    for (int i = n - 1; i >= 0; i--) {
        swap(&tab[0], &tab[i]);

        heap(tab, i, 0);
    }
}


