#include <stdio.h>

int main() {
    int hari,suhu[100];
    int suhu_naik = 1, hari_awal = 1;
    int max_suhu = 1, max_hari = 1;

    scanf ("%d", &hari);

    for (int i = 0; i < hari; i++) {
        scanf("%d", &suhu[i]);
    }

    for (int i = 1; i < hari; i++) {
        if (suhu[i] > suhu[i - 1]) {
            suhu_naik++;
        }

        else {
            suhu_naik = 1;
            hari_awal = i + 1; 
        }

        if (suhu_naik > max_suhu) {
            max_suhu = suhu_naik;
            max_hari = hari_awal;
        }
    }

    printf("%d ", max_suhu);
    printf("%d", max_hari);

    return 0;
}