#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void first() {

    int matrix[6][6];
    //int temp;
    int CheckNumber;
    for (int i=0; i<=5; i++) {
        for (int k=0; k<=5; k++) {
            //scanf("%d", &temp);
            matrix[i][k] = 2 + rand()%15;
        }
    }
    for (int i=0; i<=5; i++) {
        printf("\n");
        for (int k=0; k<=5; k++) {
            printf("%d ", matrix[i][k]);
            //matrix[i][k] = temp;
        }
    }
    printf("\n");
    int *point1;
    int *point2;
    point1 = matrix[0];
    for (int i=1; i<=36; i++) {
        point2 = point1 + 1;
        CheckNumber = *point1;
        for (int m=i+1; m<=36; m++) {
           if (CheckNumber==*point2) {
               *point2 = 1;
               *point1 = 1;
           }
           point2++;
        }
        point1++;
    }
    for (int i=0; i<=5; i++) {
        printf("\n");
        for (int k=0; k<=5; k++) {
            printf("%d ", matrix[i][k]);
            //matrix[i][k] = temp;
        }
    }
    printf("\n");
    //printf("Hello, World!\n");
    //return 0;
}

void second() {
    int matrix[6][6];
    //int lowst[5];
    int lownum = 0;
    //int highst[5];
    int highnum=0;
    //int temp;
    int CheckNumber;
    for (int i=0; i<=5; i++) {
        for (int k=0; k<=5; k++) {
            //scanf("%d", &temp);
            matrix[i][k] = 2 + rand()%5;
        }
    }
    for (int i=0; i<=5; i++) {
        printf("\n");
        for (int k=0; k<=5; k++) {
            printf("%d ", matrix[i][k]);
            //matrix[i][k] = temp;
        }
    }
    printf("\n");
    int tempmin;
    int tempmax;
    for (int i=0; i<=5; i++) {
        //printf("\n");
        tempmin = matrix[i][0];
        tempmax = matrix[i][0];
        for (int k=0; k<=5; k++) {
            if ((tempmin  > matrix[i][k])&&((i%2)==1)) {
                tempmin = matrix[i][k];
            }
            if ((tempmax  < matrix[i][k])&&((i%2)==0)) {
                tempmax = matrix[i][k];
            }
        }
       // printf("\n");
       // printf("%d", tempmin);
       // printf("\n");
       // printf("%d", tempmax);
        if ((i%2)==1) {
            lownum = lownum + tempmin;
        }
        if ((i%2)==0) {
            highnum = highnum + tempmax;

        }


    }
    printf("\n");
    printf("%d", lownum);
    printf("\n");
    printf("%d", highnum);
}

int mainn() {
    srand(time(NULL));
    printf("First task:");
    printf("\n");
    first();
    getchar();
    printf("Second task:");
    printf("\n");
    second();
    getchar();

}