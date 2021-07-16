#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int checkFloat(double n) {
	if(n-(int)n!=0) {
		return 0;
	}
	return 1;
}

int checkPrime(int n) {
	int i;
	for (i = 2; i <= sqrt(n); i++) {
		if (n%i==0) {
			return 0;
		}
	}
	return 1;
}

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

	//Tinh tong cac phan tu la so nguyen to
	double sum=0;
	int x;
	for (i=0; i<n; i++) {
		if(checkFloat(array[i])==1 && array[i]>0) {
			x=array[i];
			if(checkPrime(x)==1 && array[i]>0) {
				sum+=x;
			}
		}
	}
	printf("\nTong cac phan tu la so nguyen to la: %.2lf\n", sum);
	
	system("pause");
	return 0;
}

