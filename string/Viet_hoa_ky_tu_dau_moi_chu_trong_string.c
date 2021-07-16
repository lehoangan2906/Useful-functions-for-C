#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#define max 100

char InHoaKyTuDau(char s[]){
	int i;

    if(s[0]!=' '){
        s[0]=s[0]-32;
        for(i=1;i<strlen(s);i++){
            if(s[i]==' ' && s[i+1]!=' ' && s[i+1]>='a' && s[i+1]<='z' ){
				s[i+1]=s[i+1]-32;
            }          
        }
    }
	else{
		for(i=0;i<strlen(s);i++){
			if(s[i]==' ' && s[i+1]!=' ' && s[i+1]>='a' && s[i+1]<='z' ){
				s[i+1]=s[i+1]-32;
			}          
		}
	}
	printf("%s",s);
}

// Hoac
// Viet hoa chu cai dau tung chu
void q6()
{
	char a[100]; gets(a);
	int i;
	for (i = 0; i < strlen(a); i++)
	if (a[i-1] == ' ' || i == 0)
	{
		if (a[i] >= 'a' && a[i] <= 'z') a[i] -= 32;
	}
	
	printf("%s", a);
}

int main(){
	char s[max];
	printf("Nhap chuoi: ");
	gets(s);
	InHoaKyTuDau(s);
	
	system("pause");
	return 0;
}
