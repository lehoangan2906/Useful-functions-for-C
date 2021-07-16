#include <stdio.h>
#include <math.h>

int factorial(int n) {
	int i;
	int factorial=1;
	for (i=1; i<=n; i++) {
		factorial*=i;
	}
	return factorial;
}

int main() {
	int n, k, sum;
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("Nhap k: ");
	scanf("%d", &k);
	sum=factorial(n)/(factorial(k)*factorial(n-k));
	printf("To hop chap k cua n la: %d", sum);
	return 0;
}

