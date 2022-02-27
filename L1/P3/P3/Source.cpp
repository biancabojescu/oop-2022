#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<array>
#include<iostream>

int main() {
    int i, j, nr=0, total=0;
    char vectorCuv[20][20];
    char text[255], c;
    char aux[21];
    printf("Se tasteaza propozitia: ");
    do {
        scanf("%c", &c);
        if (c == '\n') {
            break;
        }
        text[nr++] = c;
    } while (1);
    text[nr] = '\0'; 
    char* cuv = strtok(text, " ");
    while (cuv != NULL) {
        strcpy(vectorCuv[total], cuv);
        total++;
        cuv = strtok(NULL, " ");
    }
    for (i = 0; i < total; i++) {
        for (j = i + 1; j < total; j++) {
            if (strlen(vectorCuv[i]) < strlen(vectorCuv[j])) {
                std::swap(vectorCuv[i], vectorCuv[j]);
            }
            else 
                if (strlen(vectorCuv[i]) == strlen(vectorCuv[j])) {
                strcpy(aux, vectorCuv[i]);
                strcpy(vectorCuv[i], vectorCuv[j]);
                strcpy(vectorCuv[j], aux);
                }
        }
    }
    for (int i = 0; i < total; i++) {
        printf("%s\n", vectorCuv[i]);
    }
    return 0;
}