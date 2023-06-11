// // #include <bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     // int n;
// //     // cin >> n;
// //     // cin.ignore();
// //     // string arr[n];
// //     // for (int i = 0; i < n; i++)
// //     // {
// //     //     getline(cin, arr[i]);
// //     // }
// //     // int s = arr[0].back();
// //     // cout << s;
// //     int arr[5] = {12, 13, 14, 15, 16};
// //     cout << sizeof(arr);
// //     return 0;
// // }
// //--------------------------------------------

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     int secarr[101];
//     for (int i = 1; i <= n; i++)
//     {

//         string nm;
//         cin >> nm;
//         int cls;
//         cin >> cls;
//         char s;
//         cin >> s;
//         int id;
//         cin >> id;
//         arr[i] = id;
//         string temp;
//         temp += nm +
//         // cout << nm << " " << cls << " " << s << " ";
//     }
//     for (int i = n; i > 0; i--)
//     {
//         cout << i;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    string secarr[101];
    for (int i = 1; i <= n; i++)
    {

        string nm;
        int cls;
        char s;
        int id;
        cin >> nm >> cls >> s >> id;
        arr[i] = id;

        string temp;
        temp += (nm + " " + to_string(cls) + " " + s + " ");
        secarr[i] = temp;
    }
    for (int i = n; i > 0; i--)
    {
        cout << secarr[(n + 1) - i];
        cout << arr[i] << endl;
    }

    return 0;
}