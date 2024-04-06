#include <bits/stdc++.h>
using namespace std;
void solution2()
    {
        string str;
        bool space = false;
        while (cin >> str)
        {
            reverse(str.begin(), str.end());
            if (space)
            {
                cout << " ";
            }
            space = true;
            cout << str;
        }
    }
int main()
{
    solution2();

    return 0;
}