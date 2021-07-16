#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n, i;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	i=sqrt(n);
	if (i*i==n) {
		printf("\n%d la so chinh phuong\n", n);
	} else {
		printf("\n%d khong phai la so chinh phuong\n", n);
	}
	
	system("pause");
	return 0;
}
