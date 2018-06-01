/*
 * Input nilai untuk mengisi
 * elemen-elemen array 2-dimensi
 * */
#include <stdio.h>
using namespace std;

main()
{
    int i,j;
    int X[2][2];

    for(i=0 ; i<2 ; i++){
        for(j=0 ; j<2 ; j++){
            printf("Masukkan elemen X[%i][%i] : ", i,j);
            scanf("%d", &X[i][j]);
        }
    }

    for(i=0 ; i<2 ; i++){
        for(j=0 ; j<2 ; j++)
            printf("%6i", X[i][j]);

        printf("\n");
    }
    printf("\n");
}