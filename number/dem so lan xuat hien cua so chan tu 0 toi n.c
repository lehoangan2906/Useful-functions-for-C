#include <stdio.h>
#include <stdlib.h>

int main() {
    // Add your code in here:
	int n, i, count;
	printf("Nhap n: ");
	scanf("%d", &n);
	count = 0;
	for (i = 1; i <= n; i++) {
		if(i%2 == 0) {
			count++;
		}
	}

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    // Write your output here:
	printf("The number of occurrences of even number is %d\n", count);
	
	system("pause");
    return 0;
}
