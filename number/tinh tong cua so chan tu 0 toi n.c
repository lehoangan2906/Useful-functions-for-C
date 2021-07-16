#include <stdio.h>
#include <stdlib.h>

int main() {
    // Add your code in here:
    int n, i, sum;
	printf("Nhap n: ");
	scanf("%d", &n);
	sum = 0;
	for(i=0;i<=n;i++) {
		if (i%2==0) {
			sum += i;
		}
	}

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    // Write your output here:
	printf("result is %d\n", sum);
	
	system("pause");
    return 0;
}
