#include <iostream>
using namespace std;

int main()
{
    int a, b, c, max=0;

    cout << "Masukkan nilai A : "; cin >> a;
    cout << "Masukkan nilai B : "; cin >> b;
    cout << "Masukkan nilai C : "; cin >> c;

    if( (a > b) && (a > c) ) max = a;
    if( (b > a) && (b > c) ) max = b;
    if( (c > a) && (c > b) ) max = c;

    cout << "Nilai terbesar adalah : " << max;

    return 0;
}