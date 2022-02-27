#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int conversie(const char* c) {
    int nr = 0;
    int i;
    for (i = 0; c[i] && c[i] !='\n'; i++) {
        nr = nr * 10 + (c[i] - '0');
    }
    return nr;
}

int solutie() {
    FILE* fisier = fopen("Text.txt", "r");
    if (fisier == NULL) {
        printf("Nu exista fisierul!");
        return 0;
    }
    char s[100];
    int suma=0;
    while (fgets(s, sizeof(s), fisier) != NULL) {
        suma += conversie(s);
    }
    fclose(fisier);
    return suma;
}

int main() {
    int sol=solutie();
    printf("Rezultatul este: %d", sol);
    return 0;
}