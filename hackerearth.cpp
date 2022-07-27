#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c, z = 1;
    cin >> c;
    while (c--)
    {
        int s, i;
        cin >> s;
        
        for (i = 0; i < s; i++)
        {
            int a;
            cin >> a;
            z=z*a;
        
        }
       

        int rem = z % 10;

        if (rem == 2 || rem == 3 || rem == 5)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}