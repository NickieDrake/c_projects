#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

void change(char *s, int n) {
    int half;
    half = n/2;

    for (int i = 0; i<(n/2); i++) {
        char temp = s[i];
        s[i] = s[half];
        s[half] = temp;
        half += 1;
    }
}

int main567() {
    char s[100] = "";
    fgets(s, 100, stdin);
    //printf("%s", s);
    int n = 0;
    while (s[n] && s[n] != "\n") {
        n++;

    }
    n -= 1;
    if ((n%4)==0) {
       change(s,n);
        printf("\n");
        printf("%s", s);
    } else {
        printf("\n");
        printf("%s", s);
    }
}