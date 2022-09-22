#include <stdio.h>

int main ()
{
    float nilai;
    printf("Berapakah Nilai Anda ?"); scanf("%f", &nilai);
    if (nilai >= 80)
        printf("ANDA MENDAPATKAN NILAI A");
        else if (nilai >= 70)
            printf ("ANDA MENDAPATKAN NILAI B");
             else if (nilai >= 60)
                 printf ("ANDA MENDAPATKAN NILAI C");
                    else if (nilai >= 40)
                         printf ("ANDA MENDAPATKAN NILAI D");
                            else
                               printf ("ANDA MENDAPATKAN NILAI E");
 printf("\n\n");
}
