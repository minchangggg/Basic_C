#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void reverse(char *s) {
    int sz = strlen(s) - 1;
    char* word[1000];
    int charCnt = 0, wordCnt = 0;
    word[0] = (char*) malloc(sizeof(char) * 100);
    word[0][0] = '\0';
    for (int i = 0; i < sz; ++i) {
        if (s[i] == ' ') {
            word[wordCnt][charCnt] = '\0';
            charCnt = 0;
            word[++wordCnt] = (char*) malloc(sizeof(char) * 100);
        }
        else word[wordCnt][charCnt++] = s[i];
    }
    word[wordCnt][charCnt] = '\0';
    s[0] = '\0'; charCnt = 0;
    for (int i = wordCnt; i >= 0; --i) {
        printf("%s \n", word[i]);
        for (int j = 0; j < strlen(word[i]); ++j) {
            s[charCnt++] = word[i][j];
        }
        if (i > 0) s[charCnt++] = ' ';
    }
    s[charCnt] = '\0';
}

int main (int argc, char *argv[]) {
    char s[1000];
    fgets(s, 1000, stdin);

    reverse(s);
    printf("%s", s);
}