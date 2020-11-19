#include <stdio.h>
#include<string.h>

int main() {
/*                              Part I Gets-Puts
    char yazi[10];
    printf("Yazilacak olan yaziyi giriniz ve enterlayiniz.\n");
    gets(yazi); // scanf den farkı bosluk koyduğumuzda da değeri alabiliyor.

    printf("Yazilan yazi: %s\n",yazi);
    puts(yazi); // printf yerine alınan bilgiyi yazdırabilir.

    printf("\n Yeni atanacak degeri giriniz ve enterlayiniz.\n");
    scanf("%[^\\n]c",&yazi); // %[^\n]c komutu sayesinde boşluklu yazarsa alınabilir.

    printf("Yeni atanan deger: %s",yazi);
*/
/*                              Part II String İşlemleri
    char yazi[30];

    printf("Yazilacak olan yaziyi giriniz ve enterlayiniz.\n");
    scanf("%s",&yazi);

    printf("%s\n",yazi);
    printf("%18s\n",yazi); //18 karakter (yazi karakter sayisi + bosluk) boşluk bırakarak yazdırdı.
    printf("%20.2s",yazi); // yazılan 20 karakterin ilk 2 karakterini yazdırır.
*/
/*                               Part III Strlen
    char yazi[30];
    printf("Yazilacak olan yaziyi giriniz ve enterlayiniz.\n");
    scanf("%s",&yazi);

    printf("Yazilan yazinin uzunlugu: %d",strlen(yazi)); // yazilan yazinin uzunlugunu belirtir.
*/
    char yazi[30];
    char yaziKopya[30];
    char kisitliyazi[30];

    printf("Yazilacak olan yaziyi giriniz ve enterlayiniz.\n");
    scanf("%s",&yazi);

    strcpy(yaziKopya,yazi); // yazilan yaziyi kopyalar. İlk değer hafızada ki yeri diğeri kopyalanacak yer.
    printf("Kopyalanan yazi: %s\n",yaziKopya);

    strncpy(kisitliyazi,yazi,3);// Diğeri gibi kopyalar fakat belirtilen karakter sayısını kopyalar.
    printf("Kisitli kopyalanan yazi: %s\n",kisitliyazi);

    strcat(yazi,kisitliyazi); // yazi ile kisitliyaziyi birleştirir.
    strcat(yazi," "); //birleşme sonuna boşluk bırakır.
    strcat(yazi,yaziKopya); //boşluk sonrası yaziKopyayi ekler.
    printf("%s",yazi);

    return 0;
}
