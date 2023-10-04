#include <stdio.h>

int mstrlen(char v[]) {
    int tam = 0;
    while (v[tam] != '\0') {
        tam++;
    }
    return tam;
}

void mstrcpy(char d[], char o[]) {
    int i = 0;
    while (o[i] != '\0') {
        d[i] = o[i];
        i++;
    }
    d[i] = '\0'; // Null-terminate the destination string
}

void mstrcat(char d[], char o[]) {
    int len_d = mstrlen(d);
    int i = 0;
    while (o[i] != '\0') {
        d[len_d + i] = o[i];
        i++;
    }
    d[len_d + i] = '\0'; // Null-terminate the destination string
}

void imprime_string(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        putchar(s[i]);
        i++;
    }
}

int main() {
    char s[30] = "abacaxi\nlinha 2\n";
    char s2[10] = "é bom";
    char s3[10];

    printf("%s tem %d caracteres\n", s, mstrlen(s));
    printf("%s tem %d caracteres\n", s2, mstrlen(s2));
    
    mstrcpy(s2, s3);
    printf("%s tem %d caracteres\n", s3, mstrlen(s3));
    
    mstrcat(s, s2);
    printf("%s tem %d caracteres\n", s, mstrlen(s));
    
    imprime_string(s);
    
    return 0;
}
