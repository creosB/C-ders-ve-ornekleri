#include <stdio.h>
#include<math.h>
int main() {
/*              Part I
    int sayi,
    islem1,
    islem2;

    for (int i = 1; i <=3; ++i) {
        printf("Bir sayi giriniz ve enterlayiniz.\n");
        scanf("%d",&sayi);

        islem1 = pow(sayi,2);
        islem2 = pow(sayi,3);

        printf("Girdiginiz sayi: %d\n",sayi);
        printf("Sayinin karesi: %d\n",islem1);
        printf("Sayinin kupu: %d\n",islem2);
    }
*/
/*              Part II
    char karakter;
    printf("Bir karakter girerek enter tusuna basiniz.\n");
    scanf("%c",&karakter);

    printf("%c karakterin sayisal karsiligi: %d\n",karakter,karakter);
    */
  /*  int a = 4,
    b = 7,
    c = 9;

    a = a+1; // a=5
    a++; //a=6
    ++b; //b=8
    c--; //c=8

    a = b++; //a=8, b=9
    a = ++b; // a=10, b=10

    c = ++a; // a=11, c=11
    c = b--; // b=9, c=10
    c = --b; // b=8, c=8

    printf("a: %d\n",a); //a=11
    printf("b: %d\n",b); //b=8
    printf("c: %d\n",c); //c=8
    printf("a mod b: %d\n",a%b); //3
    printf("b mod c: %d\n",b&c); //0
*/
    // atama bölme mod alma operatörlerini kullanarak 4 basamaklı bir sayının basamak sayı değerini bulup toplayan bir sayı değerini yazan prog.
    // kullanıcıdan scanf ile sayıyı isteyiniz.
    int a,
    b,
    c,
    d,
    girilen,
    islem;

    printf("Bir sayi giriniz.\n");
    scanf("%d",&girilen);

    d = girilen/1000; // binler basamağı için
    a = (girilen/100)%10; // yüzler basamağı için
    b = (girilen/10)%10; // onlar basamağı için
    c = girilen%10; // birler basamağı için

    islem = a+b+c+d;

    printf("basamak degeri: %d",islem);

    return 0;
}
