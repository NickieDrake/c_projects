#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char * reverse (char *s, size_t n) {
    for (size_t i = 0; i<(n/2); i++) {
       char temp = s[i];
       s[i] = s[n-i-1];
       s[n-i-1] = temp;
    }
    return s;
}

int main444() {
   char s[100] = "";
   fgets(s, 100, stdin);
   size_t n = 0;
   while (s[n] && s[n] != "\n") {
       n++;
      // printf("\n");
   }
   n -= 1;
   printf("%s",s);
   printf("\n");
   printf("%Iu", n);
   printf("\n");
   reverse (s, n);
   printf("%s",s);
    printf("\n");
   for (size_t i = 0; i != n;) {
     while (s[i] == ' ' || s[i] == '\t') {
         i++;
     }
     if (i != n){
         size_t j = i;
         while (++i != n && s[i] != ' '  && s[i] != '\t');
         reverse (s+j, i-j);
     }
   }


    printf("%s",s);
};