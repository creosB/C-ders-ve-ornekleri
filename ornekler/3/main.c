#include <stdio.h>

int main() {
/*                     Örnek I
    int i,
    j,
    satir;

    printf("Ucgenin satir sayisini giriniz.\n");
    scanf("%d",&satir);

    for (int i = 1; i <=satir; ++i) {
        for (int j = 1; j <=i; ++j) {
            printf("*");
        }
        printf("\n");
    }
    */
/*                  Örnek II
    int i,
    sayi1,
    toplam;

    sayi1 = 0;
    for (int i = 1; i <=81; i+=4) {
        toplam = sayi1 +i;
        printf("%d\n",toplam);
    }
*/
    int el,
    normal,
    eltutar,
    normaltutar,
    toplam;

    printf("El bagaj kg giriniz.\n");
    scanf("%d",el);

    printf("Normal bagaj kg giriniz.\n");
    scanf("%d",normal);

    if (normal<15){
        normaltutar =0;
    }else{
        normaltutar = (normaltutar - 15)*5;
    }
    if (el<15){
        eltutar =0;
    }else{
        eltutar = (normaltutar - 15)*5;
    }

    toplam = normaltutar + eltutar;
    printf("Odemeniz gereken ucret %d TL",toplam);
    return 0;
}
