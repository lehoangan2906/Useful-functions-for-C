#include <stdio.h>
#include <stdlib.h>
#define SIZE 6

void display(int arr[]);
void swap(int *p1, int *p2);
void selectionSort(int arr[]);
void bubbleSort(int arr[]);

int main()
{
	int arr[] = {9, 7, 4, 10, 2, 5};
	int i, j, jmax, max;
	display(arr);
	
	bubbleSort(arr);
	
	display(arr);
	
	system("pause");
}

void swap(int *p1, int *p2){
	int tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void selectionSort(int arr[]){
	int i, j, jmax, max;
	for(i = SIZE - 1; i > 0; i--)
	{
		max = arr[0];
		jmax = 0;
		for(j = 0; j <= i; j++)
		{
			if(max < arr[j])
			{
				max = arr[j];
				jmax = j;
			}
		}
		// swap arr[i] & arr[jmax]
		swap(arr + i, arr + jmax);
		// Step 2:
		// swap (&(arr[i]), &(arr[jmax]));
	}
}

void bubbleSort(int arr[]){
	int i, j;
	for(i = SIZE - 1; i > 0; i--){
		for(j = 0; j < i; j++)
		{
			if(arr[j] > arr[j+1])
			swap(arr + j, arr + j +1);	
		}
	}
	
}

void display(int arr[]){
	int i;
	printf("\n[");
	for (i = 0; i < SIZE; i++)
	{
		printf("%d", arr[i]);
		if (i != SIZE - 1) printf(",");
		else printf("]\n");
	}
}
