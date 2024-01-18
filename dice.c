#include <stdio.h>

void dice(int number){
    switch (number){
        case 1:
        printf(" -------");
        printf("\n|       |");
        printf("\n|   *   |");
        printf("\n|       |");
        printf("\n -------\n");
          break;

        case 2:
        printf(" -------");
        printf("\n|   *   |");
        printf("\n|       |");
        printf("\n|   *   |");
        printf("\n -------\n");
        break;

        case 3:
        printf(" -------");
        printf("\n|*      |");
        printf("\n|   *   |");
        printf("\n|      *|");
        printf("\n -------\n");
        break;

        case 4:
        printf(" -------");
        printf("\n|*     *|");
        printf("\n|       |");
        printf("\n|*     *|");
        printf("\n -------\n");
        break;

        case 5:
        printf(" -------");
        printf("\n|*     *|");
        printf("\n|   *   |");
        printf("\n|*     *|");
        printf("\n -------\n");
        break;

        default:
        printf(" -------");
        printf("\n|*     *|");
        printf("\n|*     *|");
        printf("\n|*     *|");
        printf("\n -------\n");
    }
}