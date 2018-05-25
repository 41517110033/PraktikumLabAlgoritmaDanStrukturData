/* Membuat segitiga angka yang outputnya sbb:

5
4 4
3 3 3
2 2 2 2
1 1 1 1 1
Total = 35

*/
#include <iostream>
using namespace std;

int main()
{
    int i = 5, x, total=0;
    while(i>0)
    {
        x=1;
        while(x<=(6-i))
        {
            cout << i << " ";
            x++;
            total = total + i;
        }
        cout << endl;
        i--;
    }
    cout << "Total = " << total;

    return 0;
}