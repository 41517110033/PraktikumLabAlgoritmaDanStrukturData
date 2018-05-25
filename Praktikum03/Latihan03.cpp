/* Membuat segitiga angka yang outputnya sbb:

12345
1234
123
12
1

*/
#include <iostream>
using namespace std;

int main()
{
    int i = 5, x;
    while(i>0)
    {
        x=1;
        while(x<=i)
        {
            cout << x++;
        }
        cout << endl;
        i--;
    }

    return 0;
}