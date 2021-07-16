#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int a, b, c, biggestValue;
    printf("Enter a b c: ");
    scanf("%d %d %d", &a, &b, &c);
    
    // Add your code in here:
    biggestValue = a;
    if (b>biggestValue) {
    	biggestValue = b;
	}
	if (c>biggestValue) {
		biggestValue = c;
	}

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    printf("biggest value is is %d\n", biggestValue);
    
    system("pause");
    return 0;
}


