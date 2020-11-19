#include <stdio.h>


int main() {
    // char her bir harf(karakter) için ne kadar alan ayrılacağını belirliyor.
    /*char ad[6] = "Baris";
    char soy[7] = "Eroglu";
    char meslek[10];
    printf("%s \n", ad);
    printf("%s \n",soy);
    printf("Meslek belirleyip yaziniz.\n");
    scanf("%s",meslek);
    printf("\nBarisin meslegi %s %s",meslek,"oldu.");
     */
    int sayi1,sayi2,girilen;
    printf("Hesap Makinesine Hosgeldiniz\n");
    printf("*****************************\n");
    printf("Lutfen 1. tam sayiyi giriniz ve enterlayiniz.\n");
    scanf("%d",&sayi1);
    printf("Lutfen 2. tam sayiyi giriniz ve enterlayınız.\n");
    scanf("%d", &sayi2);
    printf("Bolme islemi icin: 1\nCarpma islemi icin: 2\nToplama islemi icin: 3\nCikarma islemi icin: 4\n");
    printf("Yapmak istediginiz islemi tuslayip enterlayiniz.\n");
    scanf("%d",&girilen);
    if(girilen == 1){
        printf("*****************************\n");
        printf("sonuc: %d ",sayi1/sayi2);
        printf("\n*****************************\n");
    } else if (girilen == 2){
        printf("*****************************\n");
        printf("sonuc: %d ",sayi1*sayi2);
        printf("\n*****************************\n");
    } else if(girilen == 3){
        printf("*****************************\n");
        printf("sonuc: %d ",sayi1+sayi2);
        printf("\n*****************************\n");
    }else if (girilen == 4){
        printf("*****************************\n");
        printf("sonuc: %d ",sayi1-sayi2);
        printf("\n*****************************\n");
    } else{
        printf("*****************************\n");
        printf("Uygun sayi degerleri girmediniz.\n");
        printf("*****************************\n");
    }
    return 0;
}
