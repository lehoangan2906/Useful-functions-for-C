#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	//Nhap du lieu
	int n, i, j, k;
	printf("Nhap n: ");
	scanf("%d",&n);

	//In ra dong
	for(i=1; i<=n; i++) {
		for(j=1; j<=n-i; j++) {
			printf(" ");
		}

	//In so ben trong
		for(j=-i; j<=i; j++) {
			if(j==0 || j==1) {
				continue;
			}
			printf("%d", abs(j));
		}
		
	//Xuong dong
		printf("\n");
	}
	system("pause");
	return 0;
}
