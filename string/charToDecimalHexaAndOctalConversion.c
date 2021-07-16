#include <stdio.h>
#include <stdlib.h>

 

int main(void){

	int num;
	
	printf("Conversion...\n");
	printf("Start with any character and ");
	printf("press Enter/Carriage return, EOF to stop\n");
	
	num = getchar();
	printf("Character Integer Hexadecimal Octal\n");
	
	 
	
	while(getchar() != EOF){
		printf(" %c %d %x %o\n", num, num, num, num);
		++num;
	
	}
	
	system("pause");
	return 0;

}
