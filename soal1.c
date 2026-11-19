#include<stdio.h>

int main() {
    int ticket = 50000;
    int days, collage, discount;
    int potongan = 0;
    int total = 0;
   
    scanf ("%d %d", &collage, &days);


    if (days >= 7) {
        potongan = 5000;
    }
    else {
        potongan = 0;
    }

    if (collage == 1) {
        discount = (int) ticket * 0.4;
        total = (ticket - discount) - potongan;
    }
    else {
        total = ticket - potongan;
    }
    
    printf ("%d", total);

    return 0;
}
