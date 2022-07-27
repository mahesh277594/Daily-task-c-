#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int c, ct = 0, cnt = 0;
    cin >> c;
    int s;
    cin >> s;
    int *arr = new int[s];
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + s);
    for (int i = s - 1; i >= 0; i--)
    {
        c -= arr[i];
        cnt++;
        if (c <= 0)
            break;
        else
        {
            c -= arr[i];
            cnt++;
            if (c <= 0)
                break;
        }
    }
    if (c <= 0)
    {
        cout << cnt << "\n";
    }
    else
        cout << "-1\n";

  
    return 0;
}