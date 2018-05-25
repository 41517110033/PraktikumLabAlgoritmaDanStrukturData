#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, max=0;

    cout << "Masukkan nilai A : "; cin >> a;
    cout << "Masukkan nilai B : "; cin >> b;
    cout << "Masukkan nilai C : "; cin >> c;
    cout << "Masukkan nilai D : "; cin >> d;
    cout << "Masukkan nilai E : "; cin >> e;

    if( (a > b) && (a > c) && (a > d) && (a > e)) max = a;
    if( (b > a) && (b > c) && (b > d) && (b > e)) max = b;
    if( (c > a) && (c > b) && (c > d) && (c > e)) max = c;
    if( (d > a) && (d > b) && (d > c) && (d > e)) max = d;
    if( (e > a) && (e > b) && (e > c) && (e > d)) max = e;

    cout << "Nilai terbesar adalah : " << max;

    return 0;
}