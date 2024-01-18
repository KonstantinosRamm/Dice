#include <stdio.h>
#include <stdlib.h>//for rand() function
#include <time.h>//for time randomizer
#include "dice.h"

int main(void){
    srand(time(NULL));//randomize the seed according to time
    int dice1,dice2;
    char choise;
    

    do{
    printf("press anything to roll the dice or q to quit");
    choise = getchar();
    dice1 = 1 + rand() % dice_size;//dice range between 1 and 6
    dice2 = 1 + rand() % dice_size;//dice range between 1 and 6

    switch(choise){
            
    case 'q':
        exit(0);
    
    
    default:

        dice(dice1);
        dice(dice2);
    }

    while((choise = getchar()) != '\n'){
        continue;
    }

    }while(true);
    return 0;
}
