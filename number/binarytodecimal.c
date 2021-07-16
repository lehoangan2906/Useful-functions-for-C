#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n;
	int dec=0, somu=0;
	printf("Nhap so binary: ");
	scanf("%d", &n);
	
	while(n>0) {
		dec+=(n%10)*pow(2,somu);
		somu++;
		n/=10;
	}
	 printf("\nn chuyen tu Binary qua Decimal la: %d\n", dec);
	 
	system("pause");
	return 0;
}

