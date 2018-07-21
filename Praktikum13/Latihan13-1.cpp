/*
QUEUE
*/
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 4
using namespace std;

// inisialisasi awal
typedef struct{
    int data[MAX];
    int head;
    int tail;
}Queue;

Queue antrian;

//create awal
void create(){
    antrian.head=antrian.tail=-1;
}

//operasi jika proses kosong
int IsEmpty(){
    if(antrian.tail==-1)
        return 1;
    else
        return 0;
}

//operasi jika proses penuh
int IsFull(){
    if(antrian.tail==MAX-1)
        return 1;
    else
        return 0;
}

//proses enqueue
void Enqueue(int data){
    if(IsEmpty()==1){
        antrian.head = antrian.tail = 0;
        antrian.data[antrian.tail] = data;
        printf("%d sudah dimasukan", antrian.data[antrian.tail]);
    }
    else{
        if(IsFull()==0){
            antrian.tail++;
            antrian.data[antrian.tail] = data;
            printf("%d sudah dimasukan", antrian.data[antrian.tail]);
        }
    }
}

//proses dequeue
int Dequeue(){
    int i;
    int e = antrian.data[antrian.head];
    for(i=antrian.head;i<=antrian.tail-1;i++){
        antrian.data[i]=antrian.data[i+1];
    }
    antrian.tail--;
    return e;
}

//menghapus Queue
void clear(){
    antrian.head=antrian.tail=-1;
    printf("CLEAR");
}

//menampilkan Queue
void Tampil(){
    if(IsEmpty()==0){
        for(int i=antrian.head;i<=antrian.tail;i++){
            printf("%d ", antrian.data[i]);
        }
        cout<<endl;
    }
    else
        printf("Data Kosong!!\n");
}

int main(){
    int pil,data;
    create();
    do{
        system("cls");

        cout<<"=============================="<<endl;
        cout<<"\tPROGRAM QUEUE"<<endl;
        cout<<"==============================\n"<<endl;
        cout<<"1. ENQUEUE"<<endl;
        cout<<"2. DEQUEUE"<<endl;
        cout<<"3. TAMPIL"<<endl;
        cout<<"4. CLEAR"<<endl;
        cout<<"5. EXIT"<<endl;
        cout<<"\nMasukan Pilihan : ";cin>>pil;
        switch(pil){
            case 1:
                cout<<"Masukan Data : ";cin>>data;
                Enqueue(data);
                break;
            case 2:
                Dequeue();
                break;
            case 3:
                Tampil();
                break;
            case 4:
                clear();
                break;
            case 5:
                cout<<endl<<"\nTHANKS";
                break;
            default:
                break;

        }
        getch();
    }while(pil !=5);
    return 0;
}