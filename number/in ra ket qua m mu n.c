#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    // Add your code in here:
    float m, n;
    printf("Enter m: ");
    scanf("%f", &m);
    printf("Enter n: ");
    scanf("%f", &n);
    float pro = pow(m, n);
    

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    // Write your output here:
    printf("m^n = %0.2f\n", pro);
    
    system("pause");
    return 0;
}
