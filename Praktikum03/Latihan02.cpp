/* Membuat segitiga angka yang outputnya sbb:

1
12
123
1234
12345

*/

#include <iostream>
using namespace std;

int main()
{
    int i = 1, x;
    while(i<=5)
    {
        x=1;
        while(x<=i)
        {
            cout << x++;
        }
        cout << endl;
        i++;
    }

    return 0;
}