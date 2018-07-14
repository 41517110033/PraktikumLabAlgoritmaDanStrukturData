/*
 * BUBBLE SORT
 * Dwicandra Ekastrya
 * 41517110033
 */
#include <stdio.h>
int total, data[10];

void input()
{
    printf("Masukkan sebuah bilangan : ");
    scanf("%d", &total);
    for(int a=0; a<total; a++){
        printf("Masukkan nilai pada INDEX ke-%d : ", a+1);
        scanf("%d", &data[a]);
    }
}


void sort()
{
    int temp;
    for(int i=0; i < (total-1); i++){
        for(int j=0; j < (total-1); j++){
            if(data[j] > data[j+1]){
                temp = data[j+1];
                data[j+1] = data[j];
                data[j] = temp;
            }
        }
    }
}

void view()
{
    for(int a=0; a<total; a++){
        printf("%d ", data[a]);
    }
    printf("\n");
}

main()
{
    input();
    printf("Sebelum disorting :\n");
    view();
    sort();
    printf("Sesudah disorting :\n");
    view();
}
