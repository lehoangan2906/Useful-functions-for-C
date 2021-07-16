#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int count(char str[]) {
	int dem=1, i, j,temp;
	
	for(i = 1; i < strlen(str); i++) {
		if(str[i] != ' ') { // neu ky tu khac ky tu trong thi thuc hien lenh
			temp = 1;// moi lan lap i gan temp = 1
			for(j = i - 1; j >= 0; j--) { // xet tu ky tu truoc tro di den str[0]
				if(str[j] == str[i]) {
					temp = 0;
					break;
				}
			}
			if(temp == 1)
				dem++;
			else if(temp == 0)
				dem--;
		}
	}
	return dem;
}

int main() {
	char str[100];
	printf("Enter str: ");
	gets(str);
	printf("So ky tu khac nhau la: %d\n", count(str));
	system("pause");
	return 0;
}

