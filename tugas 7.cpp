#include <stdio.h>

int main ()
{
    float P, L, Kel, Luas;
    printf("Isikan nilai panjang ?"); scanf("%f", &P);
    printf("Isikan nilai lebar ?"); scanf("%f", &L);
    Kel=2*(P+L);
    Luas=P*L;

    printf("Dengan panjang = %8.2f dan lebar = %8.3f Keliling persegi = %8.4f meter",P,L,Kel);
    printf("\nLuas persegi = %8.2f meter persegi", Luas);

    return 0;
}
