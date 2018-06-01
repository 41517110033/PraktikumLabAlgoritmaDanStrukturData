/*
 * Array 2-dimensi
 * */
#include <stdio.h>
using namespace std;

main()
{
    int i,j;
    //int X[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int X[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    for(i=0 ; i<3 ; i++){
        for(j=0 ; j<4 ; j++)
            printf("%6i", X[i][j]);
        printf("\n");
    }
    printf("\n");
}