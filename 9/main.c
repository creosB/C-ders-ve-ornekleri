#include <stdio.h>

int main() {
/*                           PART I POINTER
    int sayi1;
    float sayi2;
    char kelime[10];

    printf("****** Islemler ve Adresleri ******\n");

    printf("Tam sayi giriniz ve enterlayiniz.\n");
    scanf("%d",&sayi1);

    printf("Float sayisi giriniz ve enterlayiniz.\n");
    scanf("%f",&sayi2);

    printf("Bir kelime giriniz.\n");
    scanf("%s",&kelime);

    printf("****** Girdiginiz Degerlerin Adresleri ******\n");
    printf("Tam sayi: %x\n",&sayi1); // %x bellekte tutulan yerin adresini gösterir.
    printf("Float sayisi: %x\n",&sayi2);
    printf("Kelime: %x\n",&kelime);
*/
/*                          PART II
    int sayi;
    int sayiAdresi= &sayi;

    printf("Bir sayi giriniz ve enterlayiniz.\n");
    scanf("%d",&sayi);

    printf("Girdiginiz sayinin adresi: %x",&sayiAdresi);
*/
    int sayi,
    sayiadresi,
    kelimeadresi;
    char kelime[10];

    printf("Bir sayi giriniz ve enterlayiniz.\n");
    scanf("%d",&sayi);
    sayiadresi = &sayi;

    printf("Bir kelime giriniz ve enterlayiniz.\n");
    scanf("%s",kelime);
    kelimeadresi = &kelime;

    printf("Girdiginiz sayi ve adresi: %d %x\n",sayi,sayiadresi);
    printf("Girdiginiz kelime ve adresi: %s %x\n",kelime,kelimeadresi);

    sayiadresi++;
    kelimeadresi++;
    printf("******* Yeni adresleri *******\n");
    printf("Yeni sayi ve adresi: %d %x\n",sayi,sayiadresi);
    printf("Yeni kelime ve adresi: %s %x\n",kelime,kelimeadresi);
    return 0;
}
