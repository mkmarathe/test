#include<stdio.h>

int search(int *a, int len, int n);

void main ()
{
	int arr[9] = {1,2,3,4,5,6,7,8,9};
	int num;

	printf("Enter number to be searched\n");
	scanf("%d", &num);

	int k = search(arr,9, num);

	if ( k != -1 )
		printf("Element %d found in %d location", num, k);
	else
		printf("Element %d not found\n", num);
}

int search(int *a, int len, int n)
{
	int low=0, mid, high;
	high = len;
	
	while(low <= high) {
		mid = (low + high) / 2;
		if (n>a[mid])
			low = mid+1;
		else if(n < a[mid])
			high = mid - 1; 
		else if (n == a[mid])
			return mid;
	}

	return -1;

}
