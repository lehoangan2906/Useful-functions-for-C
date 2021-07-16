#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void NhapMaTran(int a[][100], int n) {
	int i, j;
	for(i = 0; i<n; i++) {
		for(j=0; j<n; j++) {
			a[i][j]=rand()%100;
		}
	}
}

void XuatMaTran(int a[][100], int n) {
	int i, j;
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}

void DuongCheoChinh(int a[][100], int n) {
	int i, j;
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			if(i==j) {
				printf("%d ",a[i][j]);
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
}

void DuongCheoPhu(int a[][100], int n) {
	int i, j;
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			if(i+j==n-1) {
				printf("%d ",a[i][j]);
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
}

int max(int a[], int n) {
	int i, max;
	max=a[0];
	for(i=0; i<n; i++) {
		if(a[i]>max)
			max=a[i];
	}
	return max;
}

int min(int a[], int n) {
	int i, min;
	min=a[0];
	for(i=0; i<n; i++) {
		if(a[i]<min)
			min=a[i];
	}
	return min;
}

void InDongK(int a[][100], int n) {
	int i, j;
	int temp[100];
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			temp[j]=a[i][j];
		}
		printf("\nPhan tu lon nhat cua dong %d la: %d", i+1, max(temp,n));
	}
}

int main() {
	int a[100][100];
	int b[100][100];
	int n;
	do {
		printf("\nNhap n<10: ");
		scanf("%d", &n);
	} while(n>=10);
	printf("Ma Tran A la:\n");
	NhapMaTran(a, n);
	XuatMaTran(a, n);
	printf("Ma Tran B la:\n");
	NhapMaTran(b, n);
	XuatMaTran(b, n);
	printf("\nCac duong cheo chinh la:\n");
	DuongCheoChinh(a, n);
	printf("\nCac duong cheo phu la:\n");
	DuongCheoPhu(a, n);
	printf("\nCac phan tu lon nhat theo dong cua Ma Tran A la:");
	InDongK(a, n);
	printf("\nCac phan tu lon nhat theo dong cua Ma Tran B la:");
	InDongK(b, n);
	return 0;
}

