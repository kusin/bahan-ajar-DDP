/*  PROGRAM persegi
    algoritma ini digunakan untuk menghitung luas dan keliling dari persegi
*/

// DEKLARASI pustaka
#include <stdio.h>  // pustaka untuk standar input dan/atau output (I/O)

// DEKLARASI variabel
int sisi;           // variabel masukan program
int luas;           // variael keluaran program
int keliling;       // variael keluaran program

// ALGORITMA
int main(){
    // masukan program
    printf("Masukan sisi : ");
    scanf("%i", &sisi);

    // proses program
    luas = sisi * sisi;
    keliling = sisi * 4;

    // keluaran program
    printf("Luas persegi %i \n", luas);
    printf("Keliling persegi %i \n", keliling);

    return 0;
}
