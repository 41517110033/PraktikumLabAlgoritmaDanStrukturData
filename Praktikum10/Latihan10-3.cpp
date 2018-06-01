/*
 * Penjumlahan dua matriks
 * dengan menggunakan array 2-dimensi
 * */
#include <stdio.h>
using namespace std;

main()
{
    int i,j;
    int X[2][3], Y[2][3];

    for(i=0 ; i<2 ; i++){
        for(j=0 ; j<3 ; j++){
            printf("Masukkan elemen X[%i][%i] : ", i,j);
            scanf("%d", &X[i][j]);
        }
    }

    for(i=0 ; i<2 ; i++){
        for(j=0 ; j<3 ; j++){
            printf("Masukkan elemen Y[%i][%i] : ", i,j);
            scanf("%d", &Y[i][j]);
        }
    }

    for(i=0 ; i<2 ; i++){
        for(j=0 ; j<3 ; j++)
            printf("%6i", X[i][j] + Y[i][j]);

        printf("\n");
    }
    printf("\n");
}
