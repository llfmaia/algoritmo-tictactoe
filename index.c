#include <stdio.h>


void printMyArray(int arr[3][3]) {
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
}   

int checkForEmptySpot(int arr[3][3]) {
    int isThere5 = 0;
      for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == 5) {
                isThere5 = 1;
            }
        }
    }
    return isThere5;
}

int main()
{
     int tic[3][3] = {
        {0, 1, 0},
        {0, 5, 0},
        {1, 1 ,1}, 
    };
    
    int didWin = 0; // if = 0, lost

   printf("%i\n", checkForEmptySpot(tic));
   while(&checkForEmptySpot && didWin == 0) {

   }

    return 0;
}
