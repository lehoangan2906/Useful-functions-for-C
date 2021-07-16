#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n, i, k;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
    for(k=1;k<=2*n;k++){
      	if (abs(n-k)<=(i-1)) printf("%d",i - abs(n-k));
	    else printf(" ");}
      	printf("\n");
   	}
   	
   	system("pause");
	return 0;
}

