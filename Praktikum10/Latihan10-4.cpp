/* Sabtu, 26 Mei 2018
 * Kuis Praktikum Algoritma dan Struktur Data
 * 1. Menjumlahkan 2 matriks 2x2
 * 2. Menampilkan elemen ke i,j dari hasil penjumlahan tsb dimana i dan j diinput
 */
#include <stdio.h>
using namespace std;

main()
{
    int i,j, baris, kolom;
    int X[2][2], Y[2][2], Z[2][2];

    for(i=0 ; i<2 ; i++){
        for(j=0 ; j<2 ; j++){
            printf("Masukkan elemen X[%i][%i] : ", i,j);
            scanf("%d", &X[i][j]);
        }
    }

    printf("\n");

    for(i=0 ; i<2 ; i++){
        for(j=0 ; j<2 ; j++){
            printf("Masukkan elemen Y[%i][%i] : ", i,j);
            scanf("%d", &Y[i][j]);
        }
    }

    for(i=0 ; i<2 ; i++){
        for(j=0 ; j<2 ; j++){
            Z[i][j] = X[i][j] + Y[i][j];
            printf("%6i", Z[i][j]);
        }

        printf("\n");
    }

    printf("\n\nMasukkan baris dan kolom untuk mengetahui\nnilai dari penjumlahan\n");
    printf("Baris : "); scanf("%d", &baris);
    printf("Kolom : "); scanf("%d", &kolom);
    printf("Data Z[%i][%i] = %i", baris, kolom, Z[baris][kolom]);
    printf("\n");
}
