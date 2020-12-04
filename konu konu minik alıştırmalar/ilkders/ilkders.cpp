#include <stdio.h>


int main(){
    /*
     *      İLK DERS PART I
    // double virgüllü sayılar için
    double  pi = 3.14;
    // int tam sayılar için
    int yaricap = 16;
    // %s yazı yazdırmak için
    // printf fonksiyonu ekrana yazırmaya yarar
    printf("urunun cinsi: %s\n","elma");
    // %d tam sayı yazdırmak için
    // %i tam sayı yazdırmak için integer anlamına geliyor.
    printf("kilo fiyati: %d", 500);
    // \n alt satıra geçmek için.
    printf("\ndairenin alani: \n");
    // %f ondalıklı sayı anlamına geliyor(double,float)
    // %e ondalıklı sayı anlamına geliyor(double,float) - üstlü sayı anlamına da geliyor
    // %E ondalıklı sayı anlamına geliyor(double,float) - üstlü sayı anlamına da geliyor -(%e ile arasında kapasite farkı var)
    // %s yazı anlamına geliyor (String)
    // %c tek karakter (character)
    // %u işaretsiz türler için (önüne + veya - almadığı için işaretsiz sayı)
    // %x 16'lık biçiminde işaretsiz tür
    // %x 16'lık biçiminde işaretsiz tür
    printf("%f",pi*yaricap*yaricap);
     */
    //                   İLK DERS PART II
    int yasiniz;
    printf("lutfen yasinizi giriniz ve enterlayiniz.\n");
    // scanf() kullanıcıdan değeri almak için
    // & tanımladığımız değişkeni çağırmak için
    scanf("%d", &yasiniz);
    printf("yasiniz: %d'dir!",yasiniz);

    if(yasiniz >= 5){
        double daireAlani;
        double pi = 3.14;
        printf("\ndaire yari capi giriniz ve enterlayiniz.\n");
        // %lf daha büyük ondalıklı sayılar girmek için
        scanf("%lf", &daireAlani);
        printf("daire alani: %f",pi*daireAlani*daireAlani);
        return 0;
    }else{
        printf("\n hesaplama icin yasiniz yetmiyor");
    }
}