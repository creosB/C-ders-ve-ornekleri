#include <stdio.h>
/*              Part I ENUM KULLANIMI
    enum sehirler{
    ankara,izmir,istanbul,bursa
    };

int main() {

    enum sehirler il;

    il = ankara;
    printf("Sehirin bulundugu index %d",il+1);
*/
/*              Part II STRUCT KULLANIMI
    struct  kitapbilgi{

        char kitapad[20];
        char yazar[20];
        int fiyat;
        float puan;

    };

int main() {

    struct kitapbilgi kb ={
    "1984","George Orwell",15,4.3
    };

    printf("Kitap Adi: %s\nKitabin Yazari: %s\nKitap Fiyati %d\nKitap Puani: %.1f",
           kb.kitapad,
           kb.yazar,
           kb.fiyat,
           kb.puan
           );
*/

struct bilgiSistemi{
    char ad[20];
    int no;
    int sinif;
    float ort;
};
struct bilgiSistemi bs;

int main() {

    printf("Adiniz: ");
    scanf("%s",&bs.ad);

    printf("\nNO: ");
    scanf("%d",&bs.no);

    printf("\nSinifiniz: ");
    scanf("%d",&bs.sinif);

    printf("\nOrtamaniz: ");
    scanf("%f",&bs.ort);

    printf("%s\n %d\n %d\n %f",bs.ad,bs.no,bs.sinif,bs.ort);

    return 0;
}
