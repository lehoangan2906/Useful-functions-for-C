#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define OUT    0
#define IN    1
 
unsigned countWords(char *str)
{
    int state = OUT;
    unsigned wc = 0;  // word count
 
    // Scan all characters one by one
    while (*str)
    {
        // If next character is a separator, set the
        // state as OUT
        if (*str == ' ' || *str == '\n' || *str == '\t')
            state = OUT;
 
        // If next character is not a word separator and
        // state is OUT, then set the state as IN and
        // increment word count
        else if (state == OUT)
        {
            state = IN;
            ++wc;
        }
        // Move to next character
        ++str;
    }
    return wc;
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
    char str[100];
    inputstring("String to be counted :   ",str, 99, true);
    int count , i;
    count = countWords(str);
    printf("Number of words in the string : %d \n", count);
    
    system("pause");
    return 0;
}
