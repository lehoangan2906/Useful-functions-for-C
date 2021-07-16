#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int isPalindrome(char str[]) {
	int i= 0;
	int j= strlen(str)-1;
	while (j>i) {
		if (str[i++] != str[j--]) {
			return 0;
		}
	}
	return 1;
}

// or
// Kiem tra tinh doi xung cua day
void bai5() {
	int n; scanf("%d", &n);
	int a[100], i;
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int temp = 1;
	for (i = 0; i < n; i++) {
		if (a[i] != a[n-1-i])
		{
			temp = 0;
			break;
		}
	}
	printf("%d", temp);
}

int main() {
	char str[100];
	printf("\nEnter str: ");
	gets(str);
	if(isPalindrome(str)==1){
	printf("\nIs Palindrome\n");
	} else {
		printf("\nNot Palindrome\n");
	}
	system("pause");
	return 0;
}

