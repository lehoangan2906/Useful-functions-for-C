#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define CARDS 52
#define suits 4
#define MAXLENGTH 3


void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}


void display(int cards[]){

    char suitname[] = {'S', 'H', 'D', 'C'};
    char rankName[][MAXLENGTH] = {"2", "3", "4", "5", "6", "4", "8", "9", "10", "J", "Q", "K", "A"};
    int i, suitindex, rankindex;
    int nCards = 0;

    for(i = 0; i < CARDS; i++){
        
        suitindex = cards[i]/ (CARDS/suits);
        rankindex = cards[i] % (CARDS/ suits);

        printf("%s%c ", rankName[rankindex], suitname[suitindex]);
        nCards++;

        if(nCards == CARDS/suits){
            nCards = 0;
            printf("\n");
        }
    }
}


void linearShuffle(int cards[]){

    int i, j, cardsleft = CARDS;
    for (i = 0; i < CARDS; i++){    
        j = i + rand() % cardsleft;
        swap(cards + i, cards + j);
        cardsleft--;
    }
}


int main(){

    int i, j, cardleft, cards[CARDS];
    srand(time(NULL));

    for(i = 0; i < CARDS; i++) cards[i] = i;

    display(cards);

    linearShuffle(cards);

    printf("\nAfter shuffle: \n");
    display(cards);

    system("pause");

}