#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void NhapMaTran(int a[][100], int n) {
	int i, j;
	for(i = 0; i<n; i++)
		for(j=0; j<n; j++) {
			a[i][j]=rand()%100;
		}
}

void XuatMaTran(int a[][100], int n) {
	int i, j;
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
}

void display3(int a[][100], int b[][100], int c[][100], int n) {
	int x,y;
	for(x=0; x<n; x++) {
		for(y=0; y<n; y++) {
			printf("%5d", a[x][y]);
		}
		printf("   ");
		for(y=0; y<n; y++) {
			printf("%5d", b[x][y]);
		}
		printf("   ");
		for(y=0; y<n; y++) {
			printf("%8d", c[x][y]);
		}
		printf("\n");
	}
}

void NhanMaTran(int a[][100], int b[][100], int c[][100], int n) {
	int i, j, k;
	for (i= 0; i<n; i++) {
		for (j=0; j<n; ++j) {
			for(k=0; k<n; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
}

int main() {
	int a[100][100];
	int b[100][100];
	int c[100][100];
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	NhapMaTran(a, n);
	NhapMaTran(b, n);
	NhanMaTran(a, b, c, n);
	display3(a,b,c,n);
	
	system("pause");
	return 0;
}

