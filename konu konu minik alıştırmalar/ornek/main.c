#include <stdio.h>

int main() {
    int pizzaTip,
    hamurTip,
    kenarTip,
    ekstraMalzeme;
    float hesap = 0.0;

    printf("***** Pizza Siparis Uygulamasi *****\n");
    //Pizza Tipi
    printf("Pizza tipini seciniz.\n1) Sosyal Pizza  27 TL\n2) Vegi Pizza 27.99 TL\n3) Karisik Pizza 30.99 TL\n4) Mangal Sucuklu 33.98 TL\n");
    printf("Sectiginiz pizzayi tuslayiniz ve enterlayiniz.\n");
    scanf("%d",&pizzaTip);

    //Hamur Tipi
    printf("Hamur tipini seciniz.\n1) Klasik Hamur +1 TL\n2) Ince Hamur\n");
    printf("Sectiginiz hamur tipini tuslayiniz ve enterlayiniz.\n");
    scanf("%d",&hamurTip);

    //Kenar Tipi
    printf("Kenar Tipini seciniz.\n1)Klasik kenar\n2)Sarimsak kenar +1.5 TL\n3)Parmesan kenar +1.5 TL\n");
    printf("Sectiginiz kenar tipini tuslayiniz ve enterlayiniz.\n");
    scanf("%d",&kenarTip);

    //Ekstra Malzeme
    for (int i = 1; i <=5; ++i) {
        printf("Ekstra malzeme istiyoraniz seciniz.\n1)Pizza Sos 3 Tl\n2)Beyaz Peynir 3 TL\n3)Pepperoni 3 TL\n4)Kup Sucuk 3 TL\n5)Istemiyorum.\n");
        printf("Sectiginiz ekstra malzemeyi tuslayiniz ve enterlayiniz.\n");
        scanf("%d",&ekstraMalzeme);
        switch (ekstraMalzeme) {
            case 1:
                hesap = hesap+3;
                break;
            case 2:
                hesap = hesap+3;
                break;
            case 3:
                hesap = hesap+3;
                break;
            case 4:
                hesap = hesap+3;
                break;
            case 5:
                hesap = hesap;
                i = i+4;
                break;
        }
    }

    //Fiyat hesaplama
    switch (pizzaTip) {
        case 1:
            hesap = hesap+27;
            break;
        case 2:
            hesap = hesap+ 27.99;
            break;
        case 3:
            hesap = hesap+30.99;
            break;
        case 4:
            hesap = hesap+33.98;
            break;
    }
    switch (hamurTip) {
        case 1:
            hesap = hesap+1;
            break;
        case 2:
            hesap = hesap+0;
            break;
    }
    switch (kenarTip) {
        case 1:
            hesap = hesap+0;
            break;
        case 2:
            hesap = hesap+1.5;
            break;
        case 3:
            hesap = hesap+1.5;
            break;
    }


    printf("***** Toplam Tutar *****\n%5.2f",hesap);

    return 0;
}
