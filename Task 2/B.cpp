#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    bool check = true;

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            check = false;
        }
    }

    if (check)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] = s[i] - 32;
            }
            else
            {
                s[i] = s[i] + 32;
            }
        }
    }

    cout << s;

    return 0;
}