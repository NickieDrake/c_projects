#include <stdio.h>
#include <ctype.h>



void deleteletter (char s[]) {
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++) {
        if (!(isupper(s[i]))) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

int main777() {
    char s[100] = "";
    fgets(s, 100, stdin);
   //printf("%s", s);
    size_t n = 0;
    while (s[n] && s[n] != "\n") {
        n++;

    }
    n -= 1;
    int flag = 0;
    //printf("%s", s);
    for (size_t i = 0; i<(n/2); i++) {
        if (s[i] != s[n-i-1]) {
            flag = 1;
        }
    }
    //printf("%d", n);

    if (flag == 0) {
        printf("\n");
        printf("%s", s);
        //printf("sh");
    }
    else  {
        deleteletter(s);
        printf("\n");
        printf("%s", s);
    }

 }