#include <stdio.h>

int main() {
    /*                  PART I
    int girilen;

    printf(" Bir sayi giriniz: ");
    scanf("%d",&girilen);

    if(girilen % 3 == 0 && girilen % 5 == 0){
        printf("Girdiginiz sayi 15 ile tam bolunur.");
    }else{
        printf("Girdiginiz sayi 15 ile tam bolunmez.");
    }
*/
    // kitap satış merkezi müşeri geliyor kaç tane alacağını söylüyor
    //programda kitap adedine göre indirim yapılacak
    // birim fiyatı 50 tl
    // 10 tane alırsan 20 ye kadar isterse %10
    // 21-50 alırsa %15
    // 50 fazlası ise %25
    /*
    int kitapAdet,
    fiyat = 10,
    tutar;

    float indirim;

    printf("***** Kitap fiyati 10 TL oldugunu unutmayiniz. *****\n");
    printf("Kitap adedini giriniz: ");
    scanf("%d",&kitapAdet);

    tutar = kitapAdet * fiyat;

    if(kitapAdet >= 10){
        indirim = tutar - (tutar*0.10);
    } else if(kitapAdet >= 21){
        indirim = tutar - (tutar*0.15);
    } else if(kitapAdet >= 50){
        indirim = tutar - (tutar*0.25);
    } else{
        indirim = tutar;
    }

    printf("Aldiginiz kitap sayisi: %d\n Toplam Tutar: %d\n Odenecek olan miktar: %f",kitapAdet,tutar,indirim);
     */

    int sayi=5;

    switch (sayi) {
        case 1:
            printf("pazartesi");
            break;
        case 2:
            printf("salı");
        case 3:
            printf("carsamba");
        case 4:
            printf("persembe");
        case 5:
            printf("cuma");
    }
    return 0;
}
