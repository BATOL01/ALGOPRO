#include <stdio.h>

int main ()
{
    int menu;

    printf("PILIHAN MENU HARI INI\n\n[1] SOTO\n[2] BAKSO");
    printf("\n\nPILIHAN ANDA ? "); scanf("%d", &menu);

    switch (menu)
    {
        case 1: printf("ANDA TELAH MEMILIH SOTO"); break;
        case 2: printf("ANDA TELAH MEMILIH BAKSO"); break;
        default : printf("ANDA SALAH PILIH !!! ");
    }

printf("\n\n");

}
