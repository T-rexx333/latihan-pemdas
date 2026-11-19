#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
    char kata[200], kata_kecil[200];
    int panjang, p;
    int j = 0;

    fgets (kata, sizeof(kata), stdin);
    kata[strcspn(kata, "\n")] = '\0';

    strcpy (kata_kecil, kata);
     panjang = strlen(kata_kecil);

    for (int i = 0; i < panjang; i++) {
     kata_kecil[i] = tolower(kata_kecil[i]);
    }

    for (int i = 0; i < panjang; i++) {
    if (kata[i] != ' ') {
        j++; }
    }
    printf ("%d\n", j);

    for (int i = 0; i < panjang; i++) {
        if (kata_kecil[i] != kata_kecil[panjang - 1 -i]);
        p = 0;
        break;
    }

    if (p == 0) {
        printf ("PALINDROM");
    }
    else {
        printf ("BUKAN PALINDROM");
    }

    return 0;
}