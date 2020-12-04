#include <stdio.h>

int main() {
/*                      Part I
    int a=2,
    b=3,
    c=4,
    d=2;

    printf("a!=b? %d\n",a!=b); //sonuc 1
    printf("a!=d? %d\n",a!=d); //sonuc 0
    printf("a<b>? %d\n",a<b); //sonuc 1
    printf("b>d? %d\n",b>d); //sonuc 1
    printf("a<=d? %d\n",a<=d); //sonuc 1
    printf("a<=b? %d\n",a>=b); //sonuc 0
    printf("a<b? %d\n",a<b); //sonuc 0
*/
/*                      Part II
    int a=0,
    b=5,
    c=-4;

    printf("a nin degeri %d:\n", a); //0
    printf("c nin degeri %d:\n", b); //5
    printf("b nin degeri %d:\n\n", c); //-4

    // AND operatoru
    printf("a ve b nin degeri(a AND b):%d\n",a && b); //0
    printf("b ve c nin degeri(b AND c):%d\n",b && c); //0

    // OR operatoru
    printf("a veya b nin degeri(a or b):%d\n",a || b); //0
    printf("a veya c nin degeri(a or c):%d\n",a || c); //0

    // NOT operatoru
    printf("a DEGIL in degeri (NOT a): %d\n",!a); //1
    printf("c DEGIL in degeri (NOT c): %d\n",!c); //0
*/
//kullanıcıdan bir günde ortalama kaç saat uyuduğu kaç yaşında olduğu bilgilerini
//alarak şuana kadar ne kadar uyuduğunu ve ömrünün ne kadarını uyuyarak geçirdiğini vericek

    int yas,
    uyku,
    saat,
    omur,
    yuzde;

    printf("Kac yasinda oldugunuzu giriniz ve enterlayiniz: ");
    scanf("%d",&yas);

    printf("\nGunde ortalama kac saat uydugunuzu yaziniz ve enterlayiniz: ");
    scanf("%d",&uyku);

    saat = yas * 365 * uyku;
    omur = yas * 365;
    yuzde = omur/saat;
    printf("\n%d saat uyku uyudunuz.\n omrunuzun %d lik kismini uyuyarak gecirdiniz.",saat,yuzde);

    return 0;
}
