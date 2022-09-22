#include <stdio.h>

int main()
{
    int menu;
    float phi = 3.14, l, k, s, r, le, p;

    printf("PILIHAN RUMUS BANGUN DATAR\n");
    printf("[1] Luas dan Keliling Bujur Sangkar\n");
    printf("[2] Luas dan Keliling Persegi Panjang\n");
    printf("[3] Luas dan Keliling Lingkaran\n");
    printf("SILAHKAN PILIH  : ");
    scanf("%d", &menu);

    switch(menu)
    {
        case 1:
            printf("Anda Memilih Bujur Sangkar\n\n");
            printf("Masukan Nilai Sisi      : ");
            scanf("%f", &s);

            l   = s * s;
            k   = 4 * s;

            printf("NILAI LUAS              : %.2f\n", l);
            printf("NILAI KELILING          : %.2f\n", k);
            break;
        case 2:
            printf("Anda Memilih Persegi Panjang\n\n");
            printf("Masukan Nilai Panjang   : ");
            scanf("%f", &p);
            printf("Masukan Nilai Lebar     : ");
            scanf("%f", &le);

            l   = p * le;
            k   = 2 * (p + le);

            printf("NILAI LUAS              : %.2f\n", l);
            printf("NILAI KELILING          : %.2f\n", k);
            break;
        case 3:
            printf("Anda Memilih Lingkaran\n\n");
            printf("Masukan Nilai Radius    : ");
            scanf("%f", &r);

            l   = 2 * phi * r;
            k   = phi * r * r;

            printf("NILAI LUAS              : %.2f\n", l);
            printf("NILAI KELILING          : %.2f\n", k);
            break;
    }
}
