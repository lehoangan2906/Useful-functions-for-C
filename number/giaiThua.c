#include <stdio.h>
int giaiThua(int n)
{
    if (n == 1)
        return 1;
    return n * giaiThua(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("Giai thua %d la: %d", n, giaiThua(n));
    return 0;
}
 
