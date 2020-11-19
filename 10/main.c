#include <stdio.h>
/*
// geriye değer döndürmeyen fonksiyonlar için.

void list(){
    printf("AD:Baris\nNo:155\n***\nAD:ABC \nNo:1234\n***");
}

int main() {

    list();
*/
// geriye değer döndüren fonksiyonlar için.
int toplayici(int sayi1,int sayi2){
    int islem;
    islem = sayi1 + sayi2;
    return islem;
}

int main() {

    int girilen1,
    girilen2,
    degerAtayici;

    printf("Toplama islemi icin 1. sayiyi giriniz ve enterlayiniz.\n");
    scanf("%d",&girilen1);

    printf("Toplama islemi icin 2. sayiyi giriniz ve enterlayiniz.\n");
    scanf("%d",&girilen2);

    degerAtayici = toplayici(girilen1,girilen2);

    printf("Islem sonucu: %d",degerAtayici);


    return 0;
}
