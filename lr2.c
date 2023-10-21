#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void count(){
    int matrix[5][5];
    int CheckNumber;
    for (int i=0; i<=4; i++) {
        for (int k=0; k<=4; k++) {
            matrix[i][k] = 2 + rand()%100;
        }
    }
    for (int i=0; i<=4; i++) {
        printf("\n");
        for (int k=0; k<=4; k++) {
            printf("%d ", matrix[i][k]);
        }
    }
    printf("\n");

    int sumarr[5];
    int help[5];
    for (int i=0; i<=4; i++) {
        help[i] = i+1;
        //printf("%d ", help[i]);
    }

    for (int i=0; i<=4; i++) {
        int colsum = 0;
        for (int k=0; k<=4; k++) {
            colsum += matrix[k][i];
        }
        printf("%d ", colsum);
        sumarr[i] = colsum;
        //printf("\n");
    }
    printf("\n");
    for (int i=0; i<4; i++) {
        for (int k=4; k>i; k--) {
            if (sumarr[k-1] < sumarr[k]) {
                int temp = sumarr[k-1];
                sumarr[k-1] = sumarr[k];
                sumarr[k] = temp;

                int temparr = help[k-1];
                help[k-1] = help[k];
                help[k] = temparr;
            }
        }
    }

    for (int i=0; i<=4; i++) {
        printf("\n");
        for (int k=0; k<=4; k++) {
            printf("%d ", matrix[i][help[k]-1]);
        }
    }
    printf("\n");
    for (int i=0; i<=4; i++) {
        printf("%d ", sumarr[i]);
        //printf("\n");
    }

}

void risunok() {
    int matrix[5][5];
    //int CheckNumber;
    for (int i=0; i<=4; i++) {
        for (int k=0; k<=4; k++) {
            matrix[i][k] = 2 + rand()%100;
        }
    }
    for (int i=0; i<=4; i++) {
        printf("\n");
        for (int k=0; k<=4; k++) {
            printf("%d ", matrix[i][k]);
        }
    }
    printf("\n");

    int min = 1000;
    int min2 = 1000;
    //int k;
    //int l;
    for (int i=0; i<=4; i++) {
        for (int k=0; k<=4; k++) {
            if ((((i < k) && (i< (5 - k - 1))) || ((i > k) && (i>(5 - k - 1))))&&(matrix[i][k] < min)) {
                min = matrix[i][k];
            }
            if ((i > k) && (i < (5 - k - 1)) && (matrix[i][k] < min2)){
                min2 = matrix[i][k];
            }

        }

    }

    printf("%d ", min);
    printf("\n");
    printf("%d ", min2);
    printf("\n");



};



int main3 (){
    srand(time(NULL));
    count();
    printf("\n");
    risunok();
}