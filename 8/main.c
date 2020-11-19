#include <stdio.h>

typedef int sayiler;

int main() {

    sayiler sayi1,sayi2,sayi3;

    sayi1= 5;
    sayi2 = 3;
    sayi3 = 4;

    sayiler islem;
    islem = sayi1+sayi2+sayi3;

    printf("%d",islem);

    return 0;
}
