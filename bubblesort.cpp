#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int i, j, temp, s;
    cout << "enter the size of array";
    cin >> s;
    int *arr = new int[s];
    for (i = 0; i < s; i++)
    {
        cin >> arr[i];
    }
    cout << "unsorted element are\n";
    for (i = 0; i < s; i++)
    {
        cout << arr[i] << endl;
    }
    for (i = 0; i < s; i++)
    {
        for (j = i + 1; j < s; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "sorted element are \n";
    for (i = 0; i < s; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}