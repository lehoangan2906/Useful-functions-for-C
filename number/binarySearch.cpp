#include <bits/stdc++.h>
using namespace std;


// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1

int binarySearch(int arr[], int l, int r, int x){           
    // l: starting point, r: ending point of the array

    if(r >= 1){
        int mid = 1 + (r - 1) / 2;

        // if the element is present at the middle itself
        if(arr[mid] == x)
            return mid;

        // if element is smaller than mid, then it can only be present in left array
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        // else the element can only be present in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }

    // We reach here when element is not present in array
    return -1;
}

int main(){
    int arr[] = {2, 3, 4, 10, 40};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);         // number of elements in the array
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? cout << "element is not oresent in array" : cout << "Element is present at index " << result;
    return 0;
}