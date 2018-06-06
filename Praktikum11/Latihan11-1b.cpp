#include <stdio.h>
#include <windows.h>
#include <conio.h>

struct Mahasiswa{
    int No;
    char Nama[20];
    char Nim[15];
    float Tugas;
    float UTS;
    float UAS;
    char Nilai;
};

void input(Mahasiswa *mhs,int jumData){
    //printf("\n");
    for(int i=0;i<jumData;i++){
        mhs[i].No=i+1;
        printf("No : %i \n",mhs[i].No);
        printf("Nama :");scanf("%s",&mhs[i].Nama);
        printf("NIM :");scanf("%s",&mhs[i].Nim);
        printf("Tugas :");scanf("%f",&mhs[i].Tugas);
        printf("UTS :");scanf("%f",&mhs[i].UTS);
        printf("UAS :");scanf("%f",&mhs[i].UAS);
        printf("\n");
    }
}

void prosesData(Mahasiswa *mhs, int jumData){
    float nilai;
    for(int i=0;i<jumData;i++){
        nilai=((mhs[i].Tugas*30)/100)+((mhs[i].UTS*30)/100)+((mhs[i].UAS*40)/100);
        if(nilai>=85)
            mhs[i].Nilai='A';
        else if(nilai<85 && nilai>=75)
            mhs[i].Nilai='B';
        else if(nilai<75 && nilai>=60)
            mhs[i].Nilai='C';
        else if(nilai<60 && nilai>=50)
            mhs[i].Nilai='D';
        else if(nilai<50)
            mhs[i].Nilai='E';
    }
}

void gotoxy(int x,int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void Cetak(Mahasiswa *mhs, int jumData){
    system("cls");
    printf("======================================\n");
    printf("No Nim Nama Tugas UTS UAS Nilai\n");
    printf("======================================\n");
    int y=3;
    for(int i=0;i<jumData;i++){
        printf("%i",mhs[i].No);
        gotoxy(5,y);printf("%s",mhs[i].Nim);
        gotoxy(15,y);printf("%s",mhs[i].Nama);
        gotoxy(30,y);printf("%5.2f",mhs[i].Tugas);
        gotoxy(38,y);printf("%5.2f",mhs[i].UTS);
        gotoxy(46,y);printf("%5.2f",mhs[i].UAS);
        gotoxy(54,y);printf("%c",mhs[i].Nilai);printf("\n");
        y++;
    }
    printf("======================================");
}

main(){
    int jumData;
    Mahasiswa *mhs;
    printf("Masukan Jumlah Data : ");scanf("%i",&jumData);
    mhs=new Mahasiswa[jumData];
    input(mhs,jumData);
    prosesData(mhs,jumData);
    Cetak(mhs,jumData);
}
