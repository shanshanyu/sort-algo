#include "sort.h"
void bubbersort(int s[], int n) {  
	int i, j, temp;
	for(i=0;i<n-1;i++)
		for (j = 0;j < n - 1 - i;j++) {
			if (s[j] > s[j + 1]) {
				temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}
		}
}

void insertsort(int s[], int n) {
	int i, j, temp;
	for (i = 1;i < n;i++) {
		temp = s[i];
		for (j = i - 1;j > -1 && s[j] > temp;j--) s[j + 1] = s[j];
		s[j + 1] = temp;
	}
}

void selectsort(int s[], int n) {
	int i, j, temp;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if (s[i] > s[j]) {
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
}

void shellsort(int s[], int n) {
	int gap, i, j, temp;
	for (gap = n / 2;gap >= 1;gap /= 2) {
		for (i = gap; i < n;i++) {
			temp = s[i];
			for (j = i - gap;j > -1 && s[j] > temp;j -= gap) s[j + gap] = s[j];
			s[j + gap] = temp;
		}
	}
}

void quicksort(int s[], int left, int right) {
	if (left >= right) return;
	int i, j, temp;
	i = left;
	j = right;
	temp = s[left];
	while (i < j) {
		
		while (i<j&&s[j]>temp) j--;
		s[i] = s[j];
		while (i < j&&s[i] < temp) i++;
		s[j] = s[i];
	}
	s[i] = temp;
	quicksort(s, left, i - 1);
	quicksort(s, i + 1, right);
}