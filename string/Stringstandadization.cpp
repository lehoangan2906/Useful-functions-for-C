#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void stringStandadization(char s[]){
	int i;
	while (s[0]==' ')
		strcpy(&s[0],&s[1]);// xoa ki tu chua dau cach
		
	// xoa ki tu trang o cuoi xau
	while (s[strlen(s)-1]==' ')
		strcpy(&s[strlen(s)-1],&s[strlen(s)]);//xoa ki tu chua dau cach

	//xoa ki tu trang thua o giua xau
	for(i=0; i<strlen(s) ;i++){
	
		if ((s[i]==' ')&&(s[i+1]==' '))
		{
			strcpy(&s[i],&s[i+1]);
			i--;
		}
}
	printf("Cleaned string       : %s \n",s);
}

void inputstring(char msg[], char s[], int max, bool isEmpty){
    do{
        printf("%s", msg);
        int i, c;
        i = 0;
        while((c = getchar()) != '\n' && c != EOF){
            if ( i < max)
                s[i++] = (char) c;
            s[i] = '\0';
        }
        if(isEmpty) break;
        else if (strlen(s) != 0) break;
    }while(1);
}

int main(){
    char string[100];
    inputstring("String to be cleaned :", string, 99, true);
    stringStandadization(string);
    system("pause");
    return 0;
}
