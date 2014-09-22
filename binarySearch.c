#include<stdio.h>
#include<stdlib.h>

int search(int *a, int len, int n);

int main (int argc, char *argv[])
{
	int n;
	int i;
	
	if (argc < 2) {
		printf("Usage:%s <numbers>\n", argv[0]);
		return -1;
	}

	int arr[argc-1]; // declare only when argc is valid

	printf("Enter the number you want to search\n");
	scanf("%d", &n);
	for (i=0; i<argc-1; i++) {
		arr[i] = strtol(argv[i+1], NULL, 10);
	}		
	int k = search(arr, argc-1, n);

	if ( k != -1 )
		printf("Number %d found in the list at position %d\n", n, k+1);
	else
		printf("Sorry, number %d not found in the list\n", n);
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
