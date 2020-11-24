#include <stdio.h>
#define  puan 2.5 //Program derlenmeden önce çalışır.Ön işlemci komutu olarak geçer.
int main() {
    float ders;
    char dersIsmi[10];
    float toplamPuan;
    printf("*****  Net Hesaplayiciya Hoşgeldiniz *****\n");

    printf("Ders ismini giriniz ve enterlayiniz.\n");
    scanf("%s",&dersIsmi);

    printf("Dogru sayinizi giriniz.\n");
    scanf("%f",&ders);


    toplamPuan = ders*puan;
    printf("%s dersinden aldiginiz toplam puan: %5.2f",dersIsmi,toplamPuan);

    return 0;
}
