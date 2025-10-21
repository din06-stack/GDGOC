#include <stdio.h>

int main(){
    printf("\nnama saya Dinda Nor'aini");
    printf("\nSaya dari Prodi Teknik Infomatika 25");
    printf("\nSaya harap, saya dapat belajar dan berkembang bersama dengan komunitas GDGOC UNHAS");

    //kalkulator sederhana 
    printf("\n\n\t\t+--------------------+");
    printf("\n\t\t|kalkulator sederhana|");
    printf("\n\t\t+--------------------+\n\n");

    //tipe data
    float x, y,hasil;
    char katabaku, pilihan;
    
    do {
    printf("masukkan angka pertama:");
    scanf(" %f", &x);
    printf("+ - x /:");
    scanf(" %c", &katabaku);
    printf("masukkan angka kedua:");
    scanf(" %f", &y);

    if(katabaku == '+') hasil = x + y;
    else if (katabaku == '-') hasil = x - y;
    else if (katabaku == 'x') hasil = x * y;
    else if (katabaku == '/') hasil = x / y;
    else {
        printf("\nMaaf masukkan simbol operasi (+, -, x, /)!!\n");
    }
    printf("\n______________________ %c\n", katabaku);
    printf("%.2f",hasil);

        //Tanya apakah ingin menghitung lagi
        printf("\nApakah ingin menghitung lagi? (yes/no) : ");
        scanf(" %c", &pilihan);

    } while(pilihan == 'yes' || pilihan == 'YES');
    
    printf("\nTerima kasih telah menggunakan kalkulator\n");
    return 0;
}