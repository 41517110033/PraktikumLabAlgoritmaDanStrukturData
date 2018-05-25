#include <iostream>
using namespace std;

int main()
{
    int angka[10] = {1,2,3,4,5}, jumlah_angka = 0;
    int angka1[10] = {9,10,11,12,13}, jumlah_angka1 = 0;

    for(int i = 0; i < 10; i++){
        if(i < 5) {
            cout << angka[i];
            jumlah_angka += angka[i];
        } else {
            cout << angka1[i%5];
            jumlah_angka1 += angka1[i%5];
        }

        if(i != 9)
            cout << ", ";
    }

    cout << endl;
    cout << "Jumlah array Angka = " << jumlah_angka << endl;
    cout << "Jumlah array Angka1 = " << jumlah_angka1 << endl;

    return 0;
}