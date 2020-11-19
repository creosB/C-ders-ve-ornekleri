#include <stdio.h>

int main() {
    /*                          Örnek I
    //Bir bakteri türü her saat başı kendini ikiye bölerek çoğalmaktadır. Bu laboratuvarda 24 saat  sonra kaç bakteri bulunur.
    int bakteri,
    i,
    islem;
    printf("bakteri sayisini giriniz\n");
    scanf("%d",&bakteri);

    for (int i = 1; i <=24; ++i) {
       bakteri = bakteri*2;
    }
    printf("%d adet bakteri bulunuyor.",bakteri);
     */
    // klavyeden 4 tam sayı alıp bunların toplamını bulan programı yazınız.
    int sayi1,
    sayi2,
    sayi3,
    sayi4,
    islem;

    printf("1. sayiyi giriniz ve enterlayiniz.\n");
    scanf("%d",&sayi1);
    printf("2. sayiyi giriniz ve enterlayiniz.\n");
    scanf("%d",&sayi2);
    printf("3. sayiyi giriniz ve enterlayiniz.\n");
    scanf("%d",&sayi3);
    printf("4. sayiyi giriniz ve enterlayiniz.\n");
    scanf("%d",&sayi4);


    islem = sayi1 + sayi2 + sayi3 + sayi4;

    printf("islem sonucu: %d",islem);

    return 0;
}
