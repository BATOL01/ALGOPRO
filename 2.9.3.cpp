#include <stdio.h>

int main()
{
    float p_dptan, jasa, komisi, total;

    printf("Masukan Jumlah Pendapatan : Rp");
    scanf("%f", &p_dptan);

    if(p_dptan == 200000)
    {
        jasa    = 10000;
        komisi  = (p_dptan * 10) / 100;
        total   = p_dptan + komisi + jasa;

        printf("JUMLAH PENDAPATAN   : Rp%.f\n", p_dptan);
        printf("JUMLAH UANG JASA    : Rp%.f\n", jasa);
        printf("JUMLAH UANG KOMISI  : Rp%.f\n", komisi);
        printf("JUMLAH UANG TOTAL   : Rp%.f\n", total);
    }
    else if((p_dptan > 200000) && (p_dptan <= 500000))
    {
        jasa    = 20000;
        komisi  = (p_dptan * 15) / 100;
        total   = p_dptan + komisi + jasa;

        printf("JUMLAH PENDAPATAN   : Rp%.f\n", p_dptan);
        printf("JUMLAH UANG JASA    : Rp%.f\n", jasa);
        printf("JUMLAH UANG KOMISI  : Rp%.f\n", komisi);
        printf("JUMLAH UANG TOTAL   : Rp%.f\n", total);
    }
    else if(p_dptan > 500000)
    {
        jasa    = 30000;
        komisi  = (p_dptan * 20) / 100;
        total   = p_dptan + komisi + jasa;

        printf("JUMLAH PENDAPATAN   : Rp%.f\n", p_dptan);
        printf("JUMLAH UANG JASA    : Rp%.f\n", jasa);
        printf("JUMLAH UANG KOMISI  : Rp%.f\n", komisi);
        printf("JUMLAH UANG TOTAL   : Rp%.f\n", total);
    }
    else {
        jasa    = 0;
        komisi  = (p_dptan * 0) / 100;
        total   = p_dptan + komisi + jasa;

        printf("JUMLAH PENDAPATAN   : Rp%.f\n", p_dptan);
        printf("JUMLAH UANG JASA    : Rp%.f\n", jasa);
        printf("JUMLAH UANG KOMISI  : Rp%.f\n", komisi);
        printf("JUMLAH UANG TOTAL   : Rp%.f\n", total);
    }
}
