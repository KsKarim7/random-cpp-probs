#include <bits/stdc++.h>
using namespace std;

void tokenize(string s, string del = " ")
{
    int start, end = -1 * del.size();
    string ans;
    do
    {
        start = end + del.size();
        end = s.find(del, start);
        ans += s.substr(start, end - start);
        ans += "$";
    } while (end != -1); // condition
    int len = ans.length();
    cout << ans.substr(0, len - 1);
}
int main(int argc, char const *argv[])
{
    // Takes C++ string with any separator
    int t;
    cin >> t;
    while (t--)
    {
        string a, x;
        cin >> a >> x; // = "thatsagoodmomentforgoodrelations";
        tokenize(a, x);
        cout << endl;
    }
    return 0;
}