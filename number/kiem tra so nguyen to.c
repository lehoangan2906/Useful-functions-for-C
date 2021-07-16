#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

bool isPrime(int n)
{ 	
	int i;
    if (n <= 1)
        return false;

 	
    for (i = 2; i <= sqrt(n); i++){
        if (n % i == 0)
            return false;
	}
	
    return true;
}

int main() {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	isPrime(n);
	if(isPrime(n)) {
		printf("\n%d la so nguyen to\n",n);
	} else {
		printf("\n%d khong phai la so nguyen to\n",n);
	}
	
	system("pause");
	return 0;
}

