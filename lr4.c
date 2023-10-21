#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main7() {
    srand(time(NULL));

   char **words = malloc(10 * sizeof(char*));
   for (int i = 0; i<10; i++) {
       words[i] = malloc(30);
       char tempstr[30] = "";
       fgets(tempstr, 100, stdin);

       if (tempstr[strlen(tempstr) - 1] == '\n') {
           tempstr[strlen(tempstr) - 1] = '\0';
       }
       strcpy(words[i], tempstr);
   }

    char str[1000] = "";
    printf("Enter your text:");
    printf("\n");
    fgets(str, 1000, stdin);


    for ( int k=0 ; k < (strlen(str)); k++) {
           if (str[k] == '_' ) {
              printf("%c", str[k]);
               int randnum;
               randnum = rand()%9;
               printf("%s_", words[randnum]);
               randnum = rand()%9;
               printf("%s_", words[randnum]);
           } else {
               printf("%c", str[k]);
           }
    }
};