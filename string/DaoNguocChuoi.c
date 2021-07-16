#include <stdio.h>
 
int Length(char s[])
{
    int i = 0;
    while (s[i] != NULL)
        ++i;
    return i - 1;
}
 
char *DaoNguoc(char str[])
{
    int length = Length(str);
    char *temp = new char[length + 1];
    for (int i = 0; i < length; i++)
    {
        temp[i] = str[length - 1 - i];
    }
    temp[length] = NULL; //K?t thúc chu?i
    return temp;
}
 
void InDaoNguoc(char str[]){
    int length = Length(str);
    printf("\nChuoi sau khi dao nguoc la: ");
    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}
 
int main()
{
    char s[100];
    printf("\nNhap chuoi: ");
    fgets(s, 100, stdin); // nên dùng hàm fgets
    /*gets(s);*/
    char *kq = DaoNguoc(s);
    InDaoNguoc(s);
    printf("\nChuoi sau khi dao nguoc la: %s", kq);
    return 0;
}







///// Cach 2: dung strrev
	
#include <stdio.h>
#include <string.h>
 
int main()
{
    char name[30] = "Le Hoang An";
 
    printf("Truoc khi dao nguoc : %s\n", name);
 
    printf("Sau khi dao nguoc   : %s", strrev(name));
 
    return 0;
}


//// Hoac
// Dao nguoc cau
void q5()
{
	char a[100]; gets(a);
	int i = strlen(a) - 1, j = 0;
	char temp[100], res[100];
	
	while (i >= 0)
	{
		if (a[i] != ' ')
		{
			temp[j] = a[i];
			j++;
			i--;
			if (i == -1)
			{
				temp[j] = '\0';
				strcat(res, strrev(temp));
			}
		}
		else
		{
			temp[j] = '\0';
			strcat(res, strrev(temp));
			strcat(res, " ");
			i--;
			j = 0;
		}
	}
	
	printf("%s", res);
}
