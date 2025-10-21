#include <stdio.h>

int main(){
    //perkenalan saya
    printf("\nnama saya Dinda Nor'aini");
    printf("\nSaya dari Prodi Teknik Infomatika 25");
    printf("\nSaya harap, saya dapat belajar dan berkembang bersama dengan komunitas GDGOC UNHAS");

    //judul untuk kalkulator sederhana 
    printf("\n\n\t\t+--------------------+");
    printf("\n\t\t|kalkulator sederhana|");
    printf("\n\t\t+--------------------+\n\n");

    //tipe data atau variabel
    float x, y,hasil;
    char katabaku, pilihan;
    
    //perulangan 
    do {
    
    //untuk input output
    printf("masukkan angka pertama:");
    scanf(" %f", &x);
    printf("+ - x /:");
    scanf(" %c", &katabaku);
    printf("masukkan angka kedua:");
    scanf(" %f", &y);

    //percabangan
    if(katabaku == '+') hasil = x + y;
    else if (katabaku == '-') hasil = x - y;
    else if (katabaku == 'x') hasil = x * y;
    else if (katabaku == '/') hasil = x / y;
    else {
        printf("\nMaaf masukkan simbol operasi (+, -, x, /)!!\n");
    }

    //untuk hasil
    printf("\n______________________ %c\n", katabaku);
    printf("%.2f",hasil);

    //Tanya apakah ingin menghitung lagi
    printf("\nApakah ingin menghitung lagi? (y/n) : ");
    scanf(" %c", &pilihan);

    //lanjutan dari perulangan
    } while(pilihan == 'y' || pilihan == 'Y');
    
    //penutup
    printf("\nTerima kasih telah menggunakan kalkulator\n");
    return 0;
}