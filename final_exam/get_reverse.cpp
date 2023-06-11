#include <bits/stdc++.h>
using namespace std;

void func(string arr[], int n, int i)
{
    if (i == n)
    {
        return;
    }
    func(arr, n, i + 1);
    cout << arr[i] << endl;
}

int main()
{
    int num;
    cin >> num;
    cin.ignore();
    string arr[num];
    for (int i = 0; i < num; i++)
    {
        getline(cin, arr[i]);
    }

    func(arr, num, 0);
    return 0;
}