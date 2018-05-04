#include "sort.h"
int main() {
	int a[] = { 10,5,2,1,4 };
	//bubbersort(a, 5);
	//insertsort(a, 5);
	//selectsort(a, 5);
	//shellsort(a, 5);
	quicksort(a, 0, 4);
	int i;
	for (i = 0;i < 5;i++)printf("%d\n", a[i]);
	system("pause");
	return 0;
}