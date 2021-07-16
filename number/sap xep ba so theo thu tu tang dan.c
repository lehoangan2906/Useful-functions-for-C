#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int a, b, c;
    printf("Enter a b c: ");
    scanf("%d %d %d", &a, &b, &c);
    
    // Add your code in here:
//    if (a>b && b>c) {
//    printf("%d %d %d", c, b, a);
//	} else if (b>a && a>c) {
//	printf("%d %d %d", c, a, b);
//	} else if (c>a && b>a) {
//	printf("%d %d %d", a, b, c);
//	} else if (b>c && c>a) {
//	printf("%d %d %d", a, c, b);
//	} else if (c>a && a>b) {
//	printf("%d %d %d", b, a, c);
//	} else {
//	printf("%d %d %d", b, c, a);
//	}

	if(a>c){
		int temp=a;
		a=c;
		c=temp;
	}
	if(a>b){
		int temp1=a;
		a=b;
		b=temp1;
	}
	if(b>c){
		int temp2=b;
		b=c;
		c=temp2;
	}
    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    printf("%d %d %d", a, b, c);
    
    system("pause");
    return 0;
}
