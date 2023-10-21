#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    typedef struct Books {
        char authors[12];
        char names[30];
        int years;
    } Library;

    Library MyLibrary[] = {
            {"Pushkin\n",     "Kapitanskaya dochka", 1836},
            {"London\n",      "Martin Eden        ", 1908},
            {"London\n",      "White Fang         ", 1906},
            {"Pushkin\n",     "Evgeniy Onegin     ", 1823},
            {"Dostoevskiy\n", "Idiot              ", 1868}};

    char needAuthor[12] = "";
    fgets(needAuthor, 30, stdin);
    printf("\n");
    for (int i = 0; i<= 4; i++) {
        for (int k = 4; k>= i; k--) {
            if (strcmp(MyLibrary[k+1].names, MyLibrary[k].names) > 0) {
                //printf("%d", 12);
                Library temp = MyLibrary[k];
                MyLibrary[k] = MyLibrary[k+1];
                MyLibrary[k+1] = temp;
            }
        }
    }

    for (int f = 4; f >= 0; f--) {
        //printf("%d\n", strcmp(MyLibrary[f].authors, needAuthor));
        if (strcmp(MyLibrary[f].authors, needAuthor) == 0) {
            printf("%s - %d\n", MyLibrary[f].names, MyLibrary[f].years);
        }
    }
}

