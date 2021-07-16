#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int uoc(int number){
	int i;
	for(i=1;i<=number;i++){
		if(number%i==0){
			printf("\n%d",i);
		}
	}
	return i;
}

int main() {
	int n;
	printf("Nhap so nguyen: ");
	scanf("%d", &n);
	int result=uoc(n);
	
	system("pause");
	return 0;
}

