#include <iostream>
using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;

    int cnt = 1;

   while( (1 <= k && k <= 1000) && (1 <= r && r <= 9) )
   {
        if( (k * cnt) % 10 == 0 || (k * cnt) % 10 == r )
        {
            cout << cnt << endl;
            break;
        }
        else
        {
            cnt++;
        }
   }

    return 0;
}