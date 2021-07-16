#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, r = 0;
	
	printf("Enter a number to reverse\n");
	scanf("%d", &n);
	
	while (n != 0){
		r *= 10;
		r += n % 10;
		n /= 10;
	}
	
	printf("Reverse number = %d\n", r);
	
	system("pause");
	return 0;
}

