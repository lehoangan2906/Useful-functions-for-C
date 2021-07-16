#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int m, n;
    printf("Enter m: ");
    scanf("%d", &m);
    printf("Enter n: ");
    scanf("%d", &n);
    
    // Add your code in here:
    int temp=m;
    m=n;
    n=temp;
    

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    printf("m = %d, n = %d\n", m, n); 
	
	system("pause");	
    return 0;
}
