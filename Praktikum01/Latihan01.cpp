#include <iostream>
using namespace std;

int main()
{
    float uts, uas, rata2;

    cout << "Nilai UTS : "; cin >> uts;
    cout << "Nilai UAS : "; cin >> uas;

    rata2 = (uts+uas)/2;

    cout << "Rata-rata adalah : " << rata2;

    return 0;
}