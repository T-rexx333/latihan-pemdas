#include <stdio.h>

int main() {
    int pertemuan, waktu_kedatangan;
    int tepat_waktu = 0;
    int terlambat = 0;
    int tidak_hadir = 0;

    scanf ("%d", &pertemuan);

    for (int i = 0; i < pertemuan; i++) {
        scanf ("%d", &waktu_kedatangan);

         if (waktu_kedatangan == 0) {
        tepat_waktu++;
    }
    else if (waktu_kedatangan <= 15) {
        terlambat++;
    }
    else {
        tidak_hadir++;
    }
}

    printf ("%d %d %d", tepat_waktu, terlambat, tidak_hadir);

    return 0;
}