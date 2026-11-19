#include <stdio.h>

int main() {
    long long NIM;
    int jumlah = 0, total;

    scanf ("%lld", &NIM);

    while (NIM > 0) {
        jumlah += NIM % 10;
        NIM /= 10;
    }

    total = jumlah % 3;
        printf ("%d\n", jumlah);

    if (total == 0) {
        printf ("YA\n");
    }
    else {
        printf ("TIDAK\n");
    }

    return 0;
}