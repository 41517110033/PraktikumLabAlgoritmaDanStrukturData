#include <iostream>
using namespace std;

int main()
{
    int angka[10] = {1,2,3,4,5};
    int angka1[10] = {9,10,11,12,13};

    for(int i = 0; i < 10; i++){
        if(i < 5)
            cout << angka[i];
        else
            cout << angka1[i%5];

        if(i != 9)
            cout << ", ";
    }

    return 0;
}