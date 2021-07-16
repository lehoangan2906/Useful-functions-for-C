#include <stdio.h>
#include <stdlib.h>

int main() {
    // Add your code in here:
	int n;	
	printf("Nhap n: ");
	scanf("%d", &n);
	int i;
	int tong = 0;
	for (i=1; i <= n; i++) {
		tong = tong + i; 
	}

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    // Write your output here:
	printf("%d\n", tong);
	
	system("pause");
    return 0;
}


//#include <stdio.h>
//
//int main() {
//    // Add your code in here:
//	int n;
//	printf("Nhap n: ");
//	scanf("%d", &n);
//	int tong = n*(n+1)/2;
//
//    // Fixed Do not edit anything here.
//    printf("\nOUTPUT:\n");
//    // Write your output here:
//    printf("%d", tong);
//
//	
//    return 0;
//}
