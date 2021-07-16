#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n){
    int i, j;
    for (i = 0; i < n-1; i++)    
        for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            swap(&arr[j], &arr[j+1]);
}

// key idea: for each iteration, we move the greatest member to the last index and start sorting the rest by the descending number of members

int main(){
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = *(&arr + 1) - arr;

    bubbleSort(arr, n);
    cout<<"Sorted array: \n";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
