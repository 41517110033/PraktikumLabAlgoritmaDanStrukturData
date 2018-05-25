#include <iostream>
using namespace std;

int main()
{
    int angka[10] = {1,2,3,4,5}, jumlah_angka = 0;
    int angka1[10] = {9,10,11,12,13}, jumlah_angka1 = 0;
    int hasil[10];

    cout << "Jumlah matriks Angka + matriks Angka1 = ";

    for(int i = 0; i < 5; i++){
        hasil[i] = angka[i] + angka1[i];
        cout << hasil[i];

        if(i != 4)
            cout << ", ";
    }

    cout << endl;

    return 0;
}