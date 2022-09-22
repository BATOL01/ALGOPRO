#include <stdio.h>

int main()
{
    char tipe;
    float luas_tanah, luas_bang, harga_sat_tnh, harga_sat_bang, harga_tnh, harga_bang, harga_total;

    printf("TIPE A\n");
    printf("TIPE B\n");
    printf("PILIH TIPE : ");
    scanf("%c", &tipe);

    switch(tipe)
    {
    case 'A':
        //        float luas_tanah, luas_bang, harga_sat_tnh, harga_sat_bang, harga_tnh, harga_bang, harga_total;
            printf("LUAS TANAH      : ");
            scanf("%f", &luas_tanah);
            printf("LUAS BANGUNAN   : ");
            scanf("%f", &luas_bang);

            harga_sat_tnh   = 40000;
            harga_sat_bang  = 150000;
            harga_tnh       = luas_tanah * harga_sat_tnh;
            harga_bang      = luas_bang * harga_sat_bang;
            harga_total     = harga_tnh + harga_bang;

            printf("HARGA TANAH[A]     : Rp%.f\n", harga_tnh);
            printf("HARGA BANGUNAN[A]  : Rp%.f\n", harga_bang);
            printf("TOTAL HARGA[A]     : Rp%.f\n", harga_total);
        break;
    case 'B':
        //        float luas_tanah, luas_bang, harga_sat_tnh, harga_sat_bang, harga_tnh, harga_bang, harga_total;
            printf("LUAS TANAH     : ");
            scanf("%f", &luas_tanah);
            printf("LUAS BANGUNAN  : ");
            scanf("%f", &luas_bang);

            harga_sat_tnh   = 50000;
            harga_sat_bang  = 200000    ;
            harga_tnh       = luas_tanah * harga_sat_tnh;
            harga_bang      = luas_bang * harga_sat_bang;
            harga_total     = harga_tnh + harga_bang;

            printf("HARGA TANAH[B]     : Rp%.f\n", harga_tnh);
            printf("HARGA BANGUNAN[B]  : Rp%.f\n", harga_bang);
            printf("TOTAL HARGA[B]     : Rp%.f\n", harga_total);
        break;
    }

}
