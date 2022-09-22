#include<stdio.h>

int main ()
{
    double luas,volume,radius,tinggi;

    printf("masukan jari-jari :");
    scanf("%lf",& radius);
    printf("masukan tinggi :");
    scanf("%lf",& tinggi);

    luas= 3.14*radius*radius;
    volume= 3.14*radius*radius*tinggi;

    printf("\nmasukan nilai\n");
    printf("jari-jari : %8.2lf\n",radius);
    printf("tinggi : %8.2lf\n",tinggi);
    printf("luas : %8.2lf\n",luas);
    printf("volume : %8.2lf\n",volume);

    return 0;
}
