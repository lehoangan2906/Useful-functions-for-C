/* 
Your program should allow users to find the two-digit number(s) that appear(s) the most in the array of 7 integers. 
Then your program should print out the found two-digit numbers.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min;
    for (i = 0; i < n-1; i++)
    {
        min = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min])
            min = j;

        swap(&arr[min], &arr[i]);
    }
}

int  mostfrequent(int arr[], int n){
    //sort the array
    selectionSort(arr, 7);
	int i;
	
    //find the max frequency using linear traversal
    int max_count = 1, res = arr[0], curr_count = 1;
    for(i = 1; i < n; i++){
        if(arr[i] == arr[i - 1])
            curr_count++;
        else{
            if(curr_count > max_count){
                max_count = curr_count;
                res = arr[i - 1];
            }
            curr_count = 1;
        }
    }

    //if last element is most frequent
    if(curr_count > max_count){
        max_count = curr_count;
        res = arr[n - 1];
    }
    return res;
}

// Tim so co 2 chu so xuat hien nhieu nhat trong day
void q7()
{
	int i, a[100], b[100], c[100], d[100];
	for (i = 0; i < 7; i++)
	{
		scanf("%d", &a[i]);
		b[i] = 0;
		c[i] = 0;
		d[i] = 1;
	}
	
	int max = 0, k = 0, j;
	for (i = 0; i < 7; i++)
	{
		if (a[i] >= 10 && a[i] <= 99 && b[i] == 0)
		{
			c[k] = a[i];
			for (j = i+1; j < 7; j++)
			{
				if (a[j] == a[i])
				{
					d[k]++;
					b[j] = 1;
				}
			}
			if (max < d[k]) max = d[k];
			k++;
		}
	}
	
	if (k == 0) printf("no two-digit number");
	else
	{
		for (i = 0; i < k; i++)
		{
			if (d[i] == max)
			{
				i == k - 1 ? printf("%d", c[i]) : printf("%d ", c[i]);
				
			}
		}
	}
}


int main(){
    int arr[7];
    int i;
    for(i = 0; i < 7; i++){
        scanf("%d", &arr[i]);
    }
    printf("OUTPUT: \n");
    int m = mostfrequent(arr, 7);
    if(m >= 10 || m <= 99){
        printf("%d", m);
    }
    
    system("pause");
    return 0;
}
