#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int n, j, i;
	printf("Nhap vao so n :");
	scanf("%d",&n);
	n=(n/2)*2+1;//cho n luon la so le
	for (i=1; i<=n; i++) {
		for (j=1; j<=n; j++)
			if (j-1>=n/2-i+1&&i+n/2>=j&&i<=j+n/2&&j-n/2<=n-i+1) printf("*");
			else printf(" ");
		printf("\n");
	}
	return 0;
}

