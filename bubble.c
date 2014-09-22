#include <stdio.h>

void swap(int *a, int *b);

void main()
{
	int a[10] = {2,99,87,34,1,6,77,10,5,4};
	int i,j, len=10;

	printf("\nThe given array is : \n");
	for(i=0;i<len;i++)
		printf("%d\t", a[i]);

	for(i=0;i<len;i++) {
		for(j=0;j<(len-i);j++) {
			if (a[j] > a[j+1])
				swap(&a[j],&a[j+1]);
		}
	}

	printf("\nThe sorted array is : \n");
	for(i=0;i<len;i++)
		printf("%d\t", a[i]);
	
}

void swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;

}
