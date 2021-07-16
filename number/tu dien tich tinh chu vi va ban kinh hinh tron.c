#include <stdio.h>
#include <math.h>

int main() {
	int n;
	printf("Nhap dien tich hinh tron: ");
	scanf("%d",&n);
	int r=sqrt((n/3.14));
	int C=2*r*3.14;
	printf("\nBan kinh hinh tron la: %d",r);
	printf("\nChu vi hinh tron la: %d",C);
	
   return 0;
}

