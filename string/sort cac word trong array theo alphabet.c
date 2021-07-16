#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int i,j,count = 5;
	   char str[25][25],temp[25];
	   for(i=0;i<count;i++)
	      gets(str[i]);
	      
	   for(i=0;i<count;i++)
	      for(j=i+1;j<=count;j++){
	         if(strcmp(str[i],str[j])>0){
	            strcpy(temp,str[i]);
	            strcpy(str[i],str[j]);
	            strcpy(str[j],temp);
	         }
	      }
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

   for(i=0; i<=count;i++)
		printf("%s ", str[i]);






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}


