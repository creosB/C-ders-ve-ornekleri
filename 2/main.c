#include <stdio.h>

int main() {
/*                  PART I
   // for sınıra ulaşana kadar döngü devam eder.
    for (int a=0; a<=5;a++){
        printf("girilen sayi %d\n",a);
    }
    */
/*
 *                  PART II
    int i = 0;
    // while şartları sağladığı sürece üst sınıra ulaşana kadar devam eder.
    while (i < 20){
        // i sayısını arttırmayı unutma yoksa sonsuz döngüye girer.
        i = i+2;
        if(i != 14){
            printf("%d\n",i);
        }else{
            printf("sayi yazdirilamadi\n");
        }
    }
*/
    int sayi1,
    sayi2,
    sonuc;
    char islem;

    printf("********* SWİTCH CASE ile Hesap Makinesi *********\n");

    printf("islem sembolunu giriniz ve enterlayiniz. \n");
    scanf("%s",&islem);

    printf("1. sayiyi giriniz ve enterlayiniz.\n");
    scanf("%d",&sayi1);

    printf("2. sayiyi giriniz ve enterlayiniz.\n");
    scanf("%d",&sayi2);

    switch (islem) {
        case '+':
            sonuc = sayi1+sayi2;
            printf("\n ******** Sonuc: %d ********",sonuc);
            break;
        case '-':
            sonuc = sayi1-sayi2;
            printf("\n ******** Sonuc: %d ********",sonuc);
            break;
        case '*':
            sonuc = sayi1*sayi2;
            printf("\n ******** Sonuc: %d ********",sonuc);
            break;
        case '/':
            sonuc = sayi1/sayi2;
            printf("\n ******** Sonuc: %d ********",sonuc);
            break;
        default: printf("\nhatali islem sembolu");
    }

    return 0;
}
