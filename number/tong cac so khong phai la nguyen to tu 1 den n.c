#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n, i, sum=0, check=0, j;
	printf("Nhap n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		check = 0;
		for (j = 1; j <= i/2; j++)
			if (i%j == 0)
				check++;	
		if(check != 1)
			sum += i;
}
	printf("Tong cac phan tu khong phai so nguyen to tu 1 den %d la %d\n", n, sum);
	
	system("pause");
	return 0;
}

