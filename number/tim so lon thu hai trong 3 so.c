#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int a, b, c, secondLargestNumber;
    printf("Enter a b c: ");
    scanf("%d %d %d", &a, &b, &c);
    
    // Add your code in here:
    int LargestNumber = a;
	
    if (b>LargestNumber) {
    	LargestNumber = b;
	} if (c>LargestNumber) {
		LargestNumber = c;
	}
	
	int SmallestNumber = a;
	if (SmallestNumber>b) {
		SmallestNumber = b;
	} if (SmallestNumber>c) {
		SmallestNumber = c;
	}

	secondLargestNumber = ((a + b +c) - LargestNumber - SmallestNumber);
	
    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    printf("\n\n%d is the 2nd largest number.\n", secondLargestNumber);
    
    system("pause");
    return 0;
}
