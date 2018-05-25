#include <iostream>
using namespace std;

int main()
{
    char huruf[10] = {'B', 'A', 'B', 'A', 'K', '\0'};
    int angka[10] = {1,2,3,4,5}, angkanya=0;

    cout << huruf[0] << huruf[1] << huruf[2] << huruf[3] << huruf[4] << endl;
    cout << "String yang ada adalah : " << huruf << endl;

    for(int i = 0, d = 10000; i < 5; i++, d = d/10){
        cout << angka[i];
        if(i != 4)
            cout << ", ";
        angkanya += angka[i] * d;
    }

    cout << endl << "Integer yang ada adalah : " << angkanya << endl;
    return 0;
}