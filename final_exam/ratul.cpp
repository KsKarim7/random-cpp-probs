#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    bool flag = false;
    while (ss >> word)
    {
        if (word == "Ratul")
        {
            flag = true;
            break;
        }
    }
    if (flag == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}