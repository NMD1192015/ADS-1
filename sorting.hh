#ifndef SORTING_HH_INCLUDE_GUARD
#define SORTING_HH_INCLUDE_GUARD

// Sugli array
#include "Sorting/insert_sort.cc"
#include "Sorting/bubble_sort.cc"
// Su liste
#include "Sorting/insertsort.cpp"
#include "Sorting/mergesort.cpp"
#include "Sorting/quicksort.cpp"
// Stampa
#include "Sorting/Printing/stampa.cc" 


// Liste
void insertSort(std::list<int> &list);
void quickSort (std::list<int> &list);
void mergeSort (std::list<int> &list);

// Vettori interi	
void insert_sort(int V[], int n);
void bubble_sort(int V[], int n);


#endif //SORTING_HH_INCLUDE_GUARD
