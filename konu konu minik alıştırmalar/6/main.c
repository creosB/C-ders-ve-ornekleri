#include <stdio.h>
#include <stdlib.h>

int main() {
    system("COLOR C");
    /*
    int urunSayisi =0;
    int gun =0;
    char *gunIsmi;
    printf("haftanin gununu giriniz (1-7): ");
    scanf("%d",&gun);

    switch (gun) {
        case 7:
            urunSayisi +=20;
            gunIsmi = "Pazar";
        case 6:
            urunSayisi +=15;
            gunIsmi = "Cumartesi";
        case 5:
            urunSayisi +=10;
            gunIsmi = "Cuma";
        case 4:
            urunSayisi +=7;
            gunIsmi = "Persembe";
        case 3:
            urunSayisi +=7;
            gunIsmi = "Carsamba";
        case 2:
            urunSayisi +=5;
            gunIsmi = "Sali";
        case 1:
            urunSayisi +=5;
            gunIsmi = "Pazartesi";
    }

    printf("\n %s gunu %d urun satildi.",gunIsmi,urunSayisi);
    */
/*
    float kenar1,
    kenar2,
    kenar3;
    int gecerliUcgen,
    dikUcgen,
    eskenarUcgen,
    ikizkenarUcgen,
    cesitkenarUcgen;

    printf("Ucgenin 3 kenar olcusunu giriniz:");
    scanf("%f%f%f",&kenar1,&kenar2,&kenar3);

    //üçgenler burada tanımlanıyor.
    //sonuc olarak 1 veya 0 degerlerinden biri kullanılıyor.

    //gecerli üçgeni tanımla:

    gecerliUcgen = kenar1 < kenar2 + kenar3 &&
            kenar2 < kenar1 + kenar3 &&
            kenar3 < kenar1 + kenar2;

    // dik üçgeni tanımla:
    dikUcgen = kenar1 * kenar1 == kenar2 * kenar3 + kenar3 * kenar2 ||
            kenar2 * kenar2 == kenar1 * kenar1 + kenar3 * kenar3 ||
            kenar3 * kenar3 == kenar1 * kenar1 + kenar2 * kenar2;

    //eşkenar üçgeni tanımla:
    eskenarUcgen: kenar1 == kenar2 && kenar1 == kenar3;

    //ikizkenar üçgeni tnaımla:
    ikizkenarUcgen = kenar1==kenar2||
            kenar2 == kenar3 ||
            kenar1 == kenar3;

    //önce geçerli bir üçgen olup olmadığını bul:
    if (gecerliUcgen)
        printf("Bu gecerli bir ucgendir.\n");
    else{
        printf("Bu gecerli bir ucgen degildir.\n");
        scanf("%f",&kenar1);
        return 0;
    }
    //şimdi üçgenin türüne karar ver:
    if (dikUcgen){
        printf("Bu bir dik ucgendir.");
    } else{
        if (eskenarUcgen){
            printf("Bu bir eskenar ucgendir.");
        }else{
            if (ikizkenarUcgen){
                printf("Bu bir ikizkenar ucgendir.");
            } else{
                printf("Bu bir cesitkenar ucgendir.");
            }
        }
    }
*/
    int notSayisi = 0,
    aktifNot = 0;
    float toplam = 0,
    ortalama = 0;

    yeniNotGir:

    printf("%d. notu giriniz: ",notSayisi + 1);
    scanf("%d",&aktifNot);

    if (aktifNot == -1){
        ortalama = toplam / notSayisi;
        printf("\n%d Notun ortalamasi: %f",notSayisi,ortalama);
        scanf("%d",&aktifNot);
        return 0;
    }
    notSayisi ++; //not sayisini bir arttir
    toplam += aktifNot;
    goto yeniNotGir; //fonksiyona döndürür.

    return 0;
}
