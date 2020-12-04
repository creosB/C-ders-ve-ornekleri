#include <stdio.h>

int main() {
/*       DERS PART 1
    int sayi1,sayi2,sayi3;
    printf("Lutfen 3 tamsayi giriniz ve enterlayiniz.\n");
    scanf("%d%d%d",&sayi1,&sayi2,&sayi3);
    printf("\n bugun %d m kostum\n %d km araba surdum \n %d yuzdum cektim",sayi1,sayi2,sayi3);
    */
/*
 *       DERS PART 2
    int sayi1 = 345;
    float sayi2 = 2154;
    printf("***** SAYI1 *******\n");

    // %d sayıyı yazar.
    printf("%d \n",sayi1);
    // %7 7 basamaklı sayı yazar
    printf("%7d \n",sayi1);
    // %07 7 basamaklı yazarken boşluklara sıfır koyar.
    printf("%07d \n",sayi1);
    printf("%2d \n",sayi1);

    printf("***** SAYI2 *******\n");

    printf("%10.3f \n",sayi2);
    printf("%010.3f \n",sayi2);
    printf("%10.1f \n",sayi2);
    printf("%-07d \n",sayi2);
    printf("%-07d! \n",sayi2);
*/
    /*       DERS PART 2
    int tams = 7; // tamsayi
    unsigned int uTams = 55000; // isaretsiz tamsayi

    short kisaTams= 30000; //kisa tamsayi
    unsigned short  uKisaTams =60000; //isaretsiz kisa tamsayi

    long uzunTmas = 398162092; // uzun tamsayi
    unsigned long uUzunTams = 4047483649; // isaretsiz tamsayi

    char karakter = 125; // karakter
    unsigned char uKarakter = 252; // isaretsiz karakter

    double realDouble = 97223.787844;//ond. gercek sayi
    float  realFloat = 223.52; // ond. gercek sayi

    //degiskeleri yazdiralim
    printf("tamsayi: %d \n",tams);
    printf("isaretszi tamsayi: %u \n",uTams);

    printf("kisa tamsayi: %d \n",kisaTams);
    printf("isar. kisa tamsayi: %u \n",uKisaTams);

    printf("uzun tamsayi: %ld \n",uzunTmas);
    printf("isar. uzun tamsayi: %u \n",uUzunTams);

    printf("karakter: %d \n",karakter);
    printf("isar. karakter: %d \n",uKarakter);

    printf("double: %f \n",realDouble);
    printf("float: %f \n",realFloat);
 */
    /*          ORNEK
    float r,
    pi = 3.14,
    alan,
    cevre;

    printf("Dairenin yaricapini cm cinsinden giriniz.\n");
    scanf("%f",&r);

    alan = pi * r *r;
    cevre = 2 * pi * r;

    printf("\n Daire alani: %f \n Daire cevresi: %f",alan,cevre);
     */
    float pi = 3,
    kureR,
    kureHacim,
    kubKenar,
    kubHacim,
    sonuc;



    printf("Kubun kenar uzunlugunu cm cinsinden giriniz.\n");
    scanf("%f",&kubKenar);


    kureR = kubKenar;
    kureHacim = (pi* kureR*kureR*kureR)*(4/3);
    kubHacim = kubKenar * kubKenar * kubKenar;
    sonuc = kureHacim / kubHacim;

    printf("**********Sonuc**********\n");
    printf("sonuc: %f ",sonuc);

    return 0;
}
