/*  PROGRAM zakat
    algoritma ini digunakan untuk menghitung zakat seseorang berdasarkan jumlah penghasilan
*/

// DEKLARASI pustaka
#include <stdio.h> // pustaka untuk standart input dan/atau output (I/O)

// DEKLARASI variabel
float penghasilan; // variabel untuk menerima masukan berupa jumlah penghasilan seseorang
float zakat;       // variabel untuk menampilkan jumlah zakat yang harus dibayarkan

// DEKLARASI variabel
int main()
{
    // masukan program
    printf("Masukan penghasilan anda : ");
    scanf("%f", &penghasilan);

    // proses program
    zakat = penghasilan * 0.025;

    // keluaran program
    printf("Zakat yg harus dibayarkan : %.2f", zakat);

    return 0;
}