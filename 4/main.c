#include <stdio.h>

int main() {
/*                              Çok Boyutlu Diziler
    int dizi[2][2];

    dizi[0][0] = 10;
    dizi[0][1] = 20;
    dizi[1][0] = 30;
    dizi[1][1] = 40;

    printf("%d %d\n%d %d",dizi[0][0],dizi[0][1],dizi[1][0],dizi[1][1]);
*/
    int satir,
    sutun,
    i,
    j;

    printf("Satir sayisini giriniz ve enterlayiniz.\n");
    scanf("%d",&satir);

    printf("Sutun sayisini giriniz ve enterlayiniz.\n");
    scanf("%d",&sutun);

    int dizi[satir][sutun];

    for (int i = 0; i < satir; ++i) {
        for (int j = 0; j < sutun; ++j) {
            printf("Yazdirilacak yer [%d][%d] degerini giriniz ve enterlayiniz.\n",i+1,j+1);
            scanf("%d",&dizi[i][j]);
        }
    }
    printf("\n***** Olusan Tablo ******\n");
    for (int k = 0; k < satir; ++k) {
        for (int l = 0; l < sutun; ++l) {
            printf("%d ",dizi[k][l]);
        }
        printf("\n");
    }
    return 0;
}
