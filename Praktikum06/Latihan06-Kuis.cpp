/*
1. Input array A sebanyak 3 elemen
2. Input array B sebanyak 3 elemen
3. Jumlahkan array A dan array B
 */
#include <iostream>
using namespace std;

int main()
{
    int arrayA[3], arrayB[3], hasil[3];

    for(int i = 0 ; i < 3 ; i++){
        cout << "Masukkan elemen A[" << i << "] : ";
        cin >> arrayA[i];
    }
    cout << endl;

    for(int j = 0 ; j < 3 ; j++){
        cout << "Masukkan elemen B[" << j << "] : ";
        cin >> arrayB[j];
    }
    cout << endl << "Jumlah matriks A + B = [";

    for(int k = 0 ; k < 3 ; k++){
        hasil[k] = arrayB[k] + arrayB[k];
        cout << hasil[k];

        if(k!=2)
            cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}