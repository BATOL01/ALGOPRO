#include <stdio.h>

int main()
{
    int menu, jumlah_barang;
    float pembelian, diskon, bayar, harga;

    printf("PILIHAN MENU\n");
    printf("[1] JUS JAMBU\n");
    printf("[2] JUS ALPUKAT\n");
    printf("[3] JUS MANGGA\n");
    printf("[4] JUS NANAS\n");
    printf("PILIH MENU : ");
    scanf("%d", &menu);

    switch(menu)
    {
        case 1:
            printf("Anda Memilih JUS JAMBU\n\n");
            printf("Masukan Jumlah Yang Ingin Dibeli : ");
            scanf("%d", &jumlah_barang);

            harga       = 10000;
            pembelian   = harga * jumlah_barang;

            if(pembelian >= 100000)
            {
                diskon  = (pembelian * 5) /100;
                pembelian   = pembelian - diskon;
            }

            printf("TOTAL PEMBELIAN     : Rp%.f\n", pembelian);
            printf("JUMLAH DISKON       : Rp%.f\n", diskon);
            printf("TOTAL BAYAR         : Rp%.f\n", pembelian);
            break;
        case 2:
            printf("Anda Memilih JUS ALPUKAT\n\n");
            printf("Masukan Jumlah Yang Ingin Dibeli : ");
            scanf("%d", &jumlah_barang);

            harga       = 15000;
            pembelian   = harga * jumlah_barang;

            if(pembelian >= 100000)
            {
                diskon  = 0.05 * pembelian;
                pembelian   = pembelian - diskon;
            }

            printf("TOTAL PEMBELIAN     : Rp%.f\n", pembelian);
            printf("JUMLAH DISKON       : Rp%.f\n", diskon);
            printf("TOTAL BAYAR         : Rp%.f\n", pembelian);
            break;
        case 3:
            printf("Anda Memilih JUS MANGGA\n\n");
            printf("Masukan Jumlah Yang Ingin Dibeli : ");
            scanf("%d", &jumlah_barang);

            harga       = 20000;
            pembelian   = harga * jumlah_barang;

            if(pembelian >= 100000)
            {
                diskon  = 0.05 * pembelian;
                pembelian   = pembelian - diskon;
            }

            printf("TOTAL PEMBELIAN     : Rp%.f\n", pembelian);
            printf("JUMLAH DISKON       : Rp%.f\n", diskon);
            printf("TOTAL BAYAR         : Rp%.f\n", pembelian);
            break;
        case 4:
            printf("Anda Memilih JUS NANAS\n\n");
            printf("Masukan Jumlah Yang Ingin Dibeli : ");
            scanf("%d", &jumlah_barang);

            harga       = 10000;
            pembelian   = harga * jumlah_barang;

            if(pembelian >= 100000)
            {
                diskon  = 0.05 * pembelian;
                pembelian   = pembelian - diskon;
            }

            printf("TOTAL PEMBELIAN     : Rp%.f\n", pembelian);
            printf("JUMLAH DISKON       : Rp%.f\n", diskon);
            printf("TOTAL BAYAR         : Rp%.f\n", pembelian);
            break;
        default:
            printf("Pilihan Tidak Valid");
            break;
    }

}
