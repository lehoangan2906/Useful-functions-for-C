#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void xoaDau(char str[], int i) {
	int j;
	for(j=i; j<strlen(str); j++)
		str[j]=str[j+1];
}

int main() {
	char str[100];
	printf("input ho va ten: ");
	gets(str);
	int i;
	for(i=0; i<strlen(str); i++) {
		if(str[i]==' ') {
			xoaDau(str, i);
			i--;
		}
	}
	for(i=1;i<strlen(str);i++){
		if(str[i]>=65 && str[i]<=90){
			str[i]+=32;
		}
	}
	str[i]='\0';
	puts(str);
	system("pause");
	return 0;
}


// hoac
// Xoa cac dau cach thua
void q7()
{
	char a[100]; gets(a);
	int i, j = 0;
	char temp[100], res[100];
	for (i = 0; i < strlen(a); i++)
	{
		if (a[i] != ' ')
		{
			temp[j] = a[i];
			j++;
		}
		else
		{
			if (j != 0)
			{
				temp[j] = '\0';
				strcat(res, temp);
				strcat(res, " ");
				j = 0;
			}
		}
		if (i == strlen(a)-1 && a[i] != ' ')
			{
				temp[j] = '\0';
				strcat(res, temp);
			}
	}
	printf("%s", res);
}
