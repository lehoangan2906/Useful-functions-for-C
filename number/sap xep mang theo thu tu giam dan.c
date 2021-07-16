#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	//Nhap vao n so thuc tu ban phim
	int n;
	printf("Nhap so luong phan tu n: ");
	scanf("%d",&n);
	double array[n];
	//Nhap mang
	int i;
	for(i=0; i<n; i++) {
		printf("\narray[%d]= ", i);
		scanf("%lf", &array[i]);
	}

	//Hien day len man hinh
	printf("\nMang so thuc vua nhap la: ");
	for(i=0; i<n; i++) {
		printf("%.2lf ", array[i]);
	}

	//Sap xep theo thu tu giam dan
	int temp, j;
	for(i=0; i<n; i++) {
		for(j=i+1; j<n; j++) {
			if(array[i] < array[j]) {
				// Hoan vi 2 so a[i] va a[j]
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	printf("\nMang da sap xep theo thu tu giam dan la: ");
	for(i=0; i<n; i++) {
		printf("%.2lf ", array[i]);
	}
	
	system("pause");
	return 0;
}

