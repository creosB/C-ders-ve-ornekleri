#include <stdio.h>

int main() {
/*                             PART I
    int dizi[]={1,3,5,7,9,11},
    i;

    for(i =0; i<=5;i++){
        printf("%d\n",dizi[i]);
    }

*/
/*                            EXAMPLE
    char sehir[3][15];
    int i;

    for(i=0;i<3;i++)
    {
        printf("Sehir:");
        scanf("%s",sehir[i]);
    }

    for(i=0;i<3;i++)
    {
        printf("Girdiginiz il: %s\n",sehir[i]);
    }
*/
    int gulen[2] = {1},
    kalp[2] = {3},
    secim,
    Ysayi =1,
    Bsayi =9;

    printf("****** Sekil Aracina Hosgeldiniz ****** \n");
    printf("Yapmak istediginiz sekili tuslayin.\n dikdortgen icin 1 \n ucgen icin 2 \n kare icin 3\n");
    scanf("%d",&secim);

    if(secim == 1){ // dikdörtgen
        for (int i = 1; i <=5; ++i) {
            if(i == 1){
                for (int j = 0; j <i; ++j) {
                    printf(" *****"); //ust kısım
                }
            }else if(i == 5){
                printf(" *****"); //alt kısım
            } else{
                printf(" * %s *",gulen); //gulen surat ve yanlar
            }
            printf("\n");
        }
    }
    else if (secim == 2) { // üçgen
        for(int i=0; i<10; i++)
        {
            for(int k=0; k<Bsayi ;k++) //bosluk sayısı
                printf(" ");

            for(int j=0;j<Ysayi;j++) //yıldız sayısı
                printf("*");
            printf("\n");
            Ysayi += 2;
            Bsayi--;
        }
    }
    else{ // kare
        for (int i = 1; i <=4; ++i) {
            printf(" *%s*%s**%s*",kalp,kalp,kalp);
            printf("\n");
        }
    }
    return 0;
}
