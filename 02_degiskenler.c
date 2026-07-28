#include <stdio.h>
int main() {
    // yas ve ilk_harf değişkenlerini tanımlıyorum
    int yas=23;
    char ilk_harf='A';

    // %d ile int, %c ile char yazdırıyorum, \n ile alt satıra geçiyorum
    printf("yas = %d\n",yas);
    printf("ilk_harf = %c\n",ilk_harf);

    // yas değişkenine 3 ekleyip güncelliyorum
    yas=yas+3;
    printf("yeniyas = %d\n",yas);
    return 0;
}