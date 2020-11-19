#include <stdio.h>
#include<math.h> //matematik işlemleri için gerekli olan kütüphane.
int main() {
/*              Part I
    int sayi;
    float sonuc;

    printf("sayiyi giriniz ve enterlayiniz.\n");
    scanf("%d",&sayi);
    sonuc= sqrt(sayi); //karekök alma işlemi
    printf("sonuc: %f",sonuc);

*/
/*              Part II
    int sayi1,
    sayi2,
    sonuc;

    printf("Sayi tabanini giriniz.\n");
    scanf("%d",&sayi1);

    printf("Us giriniz.\n");
    scanf("%d",&sayi2);

    sonuc =pow(sayi1,sayi2); // girilen sayının üssünü almak için

    printf("sonuc: %d",sonuc);
*/
/*              Part III
    double sayi,
    sonuc1,
    sonuc2;

    printf("Sayi degerini giriniz. \n");
    scanf("%lf",&sayi);

    sonuc1 = floor(sayi); // sayıyı alta yuvarlamak için
    sonuc2 = ceil(sayi); // sayıyı üste yuvarlamak için

    printf("Alta yuvarlanan sayi: %lf\n",sonuc1);
    printf("Uste yuvarlanan sayi: %lf",sonuc2);
*/
/*              Part IV
        double sayi,sonuc;

        printf("Sayiyi giriniz: ");
        scanf("%lf",&sayi);

        sonuc = log10(sayi); //logaritma işlemi icin.
        printf("Logaritmik sonuc: %lf",sonuc);
*/
        double sayi,
        sonuc;

        printf("Sayiyi giriniz: ");
        scanf("%lf",&sayi);

        sonuc = fabs(sayi); // mutlak degerini alıyor.

        printf("Sonuc: %lf",sonuc);
        return 0;
}
