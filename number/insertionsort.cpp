#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    int i, key, j;
    for(i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = *(&arr + 1) - arr;
    insertionSort(arr, n);
    cout << "Sorted array:" << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }
    return 0;
}