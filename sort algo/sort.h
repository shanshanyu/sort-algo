#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <stdlib.h>
extern void bubbersort(int s[], int n);
extern void insertsort(int s[], int n);
extern void selectsort(int s[], int n);
extern void shellsort(int s[], int n);
extern void quicksort(int s[], int left, int right);
#endif