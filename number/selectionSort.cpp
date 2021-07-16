#include <bits/stdc++.h>
using namespace std;

// hoang an - selection sort

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
 

int main(){
    int arr[] = {9, 7, 4, 10, 2, 5};
    int n = *(&arr + 1) - arr;
    selectionSort(arr, n);
    cout << "Sorted array:" << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }

return 0;
}