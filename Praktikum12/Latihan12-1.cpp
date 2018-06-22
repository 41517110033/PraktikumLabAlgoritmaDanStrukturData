#include<stdio.h>
#include<conio.h>
#include<windows.h>

/*
* =======================================
*  STACK :
*	 PUSH  -> Input / Insert
*	 POP   -> Hapus data satu per satu
*	 CLEAR -> Hapus semua data
* =======================================
*/

using namespace std;

struct STACK
{
    int data[5];
    int atas;
};

STACK tumpuk;

main()
{
    system("cls");
    int pilihan, baru, i;

    //Inisialisasi awal
    tumpuk.atas = -1;

    do
    {
        system("cls");
        printf("1. Push Data\n");
        printf("2. Pop Data\n");
        printf("3. Print Data\n");

        printf("\nPilihan = ");
        scanf("%d", &pilihan);
        switch(pilihan)
        {
            case 1 :
                if (tumpuk.atas == 4)
                {
                    printf("Tumpukan penuh");
                    getch();
                }
                else
                {
                    printf("Data yang akan di push = ");
                    scanf("%i", &baru);
                    tumpuk.atas++;
                    tumpuk.data[tumpuk.atas] = baru;
                }
                break;

            case 2 :
                if (tumpuk.atas == -1)
                {
                    printf("Tumpukan Kosong");
                    getch();
                }
                else
                {
                    printf("Data yang akan di - pop = %d", tumpuk.data[tumpuk.atas]);
                    tumpuk.atas--;
                    getch();
                }
                break;

            case 3 :
                if(tumpuk.atas == -1)
                {
                    printf("Tumpukan Kosong");
                    getch();
                }
                else
                {
                    printf("Data = ");
                    for (i = 0; i <= tumpuk.atas; i++)
                    {
                        printf("%d  ", tumpuk.data[i]);
                    }
                    getch();
                }
                break;

            default :
                printf("\nTidak ada dalam pilihan");
        }
    }
    while (pilihan >= 1 && pilihan <= 3);
    getch();
}