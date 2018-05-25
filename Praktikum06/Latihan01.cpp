#include <iostream>
using namespace std;

int main()
{
    char huruf[10] = {'B', 'A', 'B', 'A', 'K', '\0'};
    int angka[10] = {1,2,3,4,5};

    cout << huruf[0] << huruf[1] << huruf[2] << huruf[3] << huruf[4] << endl;
    cout << "String yang ada adalah : " << huruf;
    return 0;
}