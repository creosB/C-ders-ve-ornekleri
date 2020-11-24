#include <stdio.h>

int main() {
    char yazi;
    char yazi2[100];
    FILE *dosya; // bir dosya oluşturduk
    dosya=fopen("C:\\Users\\Administrator\\Desktop\\olustur.txt","w"); // girilen konuma olustur.txt dosyasını olusturur
    //fopen ile dosyayı açıktık. "w" ile dosyayı oluşturduk.

    putc('B',dosya);// Tek harf yazdırır.
    fprintf(dosya,"\nyazi yazdirildi"); // Uzun yazılar yazdırır.
    fclose(dosya);

    dosya = fdopen("C:\\Users\\Administrator\\Desktop\\olustur.txt","r"); // dosya okumak için r
    yazi = getc(dosya); // char değişkenini çağırmak için getc
    printf("%c",yazi);
    fclose(dosya);

    dosya = fdopen("C:\\Users\\Administrator\\Desktop\\olustur.txt","r");
    fgets(yazi,1,dosya); //toplu okuma
    puts(yazi); // yazdırma
    fclose(dosya);

    char metin1[10] = "Merhaba";
    char metin2[10] = "Dunya";
    dosya = fdopen("C:\\Users\\Administrator\\Desktop\\olustur.txt","r");
    fputs(metin1,dosya); //toplu yazdırma
    fputs(metin2,dosya);

    return 0;
}
