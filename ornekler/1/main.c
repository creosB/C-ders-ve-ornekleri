#include <stdio.h>

int main() {
    /*
     *                  Örnek I
   // Üç basamaklı rakamları birbirinden farklı kaç tane sayı olduğunu bulan programı c dili ile kodlayınız.
   int sayac =0,
   i,
   a,
   b,
   c;

   for(i =100; i<=999;i++){
       a = i/100; // yüzler basamağı için
       b = (i/10)%10; // onlar basamağı
       c = i%10; // birler basamağı
       if(a != b && a != c && b != c){ // rakamları birbirinden farklı olduğunda sayacı arttır.
           sayac++;
       }
   }
   printf("%d",sayac);
*/
    /*                 Örnek II
     * //klavyeden girilen sayının tam bölenlerini bulan programı kodlayınız.
    int girilen,
    i;

    printf("Sayiyi giriniz ve enterlayiniz.\n");
    scanf("%d",&girilen);

    for (int i = 1; i <=girilen; ++i) {
        if(girilen%i == 0){
            printf("tam bolen sayisi: %d \n",i);
        }
    }
*/
    // klavyeden girilen sayının küpünü alan programı kodlayınız.
    int girilen;
    printf("Sayiyi giriniz ve enterlayiniz\n");
    scanf("%d",&girilen);

    int islem = girilen*girilen*girilen;

    printf("islem sonucu: %d",islem);

    return 0;
}
