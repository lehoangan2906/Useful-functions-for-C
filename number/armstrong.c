#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int count = 0, sum = 0, temp = n, temp2 = n, last;
	do {
		n /= 10;
		count++;
	} while (n > 0);
	
	do {
		last = temp % 10;
		temp /= 10;
		sum += pow(last, count);
	} while (temp > 0);

	if (sum == temp2) {
		printf("\n%d la so Armstrong\n", temp2);
	} else {
		printf("\n%d khong phai la so Armstrong\n", temp2);
	}
	
	system("pause");
	return 0;
}

