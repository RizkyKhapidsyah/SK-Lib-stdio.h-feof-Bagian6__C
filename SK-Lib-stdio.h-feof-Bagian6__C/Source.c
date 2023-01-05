#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by AlphaCodingSkills (https://www.alphacodingskills.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    FILE* pFile = fopen("test.txt", "r");

    int c = getc(pFile);

    if (c != EOF) {
        while (!feof(pFile)) {
            putchar(c);
            c = getc(pFile);
        }
    }

    fclose(pFile);

    _getch();
    return 0;
}