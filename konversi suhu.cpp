#include <stdio.h>

int main() {
    float celcius, farenheit, reamur;

    printf("Masukan suhu celsius : ");
    scanf("%f", &celcius);

    farenheit   = (celcius * 9 / 5) + 32;
    reamur      = celcius * 4 /5;

    printf("\nData Suhu\n");
    printf("Celcius     : %.1f C\n", celcius);
    printf("Farenheit   : %.1f F\n", farenheit);
    printf("Reamur      : %.1f R\n", reamur);

    return 0;
}
