// #include <bits/stdc++.h>
// using namespace std;

// class Student
// {
// public:
//     string name;
//     int cls;
//     string sec;
//     int id;
//     int mMarks;
//     int eMarks;
//     int total = 0;
// };

// int main()
// {
//     int n;
//     cin >> n;
//     cin.ignore();
//     Student a[n];
//     int same = 0;
//     for (int i = 0; i < n; i++)
//     {
//         // getline(cin, a[i].name);
//         cin >> a[i].name >> a[i].cls >> a[i].sec >> a[i].id >> a[i].mMarks >> a[i].eMarks;
//         // cin.ignore();
//         a[i].total += (a[i].mMarks + a[i].eMarks);
//     }

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[i].total < a[j].total)
//             {
//                 swap(a[i], a[j]);
//             }
//             if (a[i].total == a[j].total)
//             {
//                 same = a[i].total;
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i].total == same)
//         {
//             for (int k = 0; k < n - 1; k++)
//             {
//                 for (int j = i + 1; j < n; j++)
//                 {
//                     if (a[i].id > a[j].id)
//                     {
//                         swap(a[i], a[j]);
//                     }
//                 }
//             }
//         }
//     }
//     // for (int i = 0; i < n; i++)
//     // {

//     //     for (int j = i + 1; j < n; j++)
//     //     {
//     //         if (a[i].total == same && a[j].total == same)
//     //         {

//     //             if (a[i].id > a[j].id)
//     //             {
//     //                 swap(a[i], a[j]);
//     //             }
//     //         }
//     //     }
//     // }

//     // Student min;
//     // min.id = INT_MAX;
//     // for (int i = 0; i < 3; i++)
//     // {
//     //     for (int j = i + 1; j < n; j++)
//     //     {
//     //         if (a[i].total == same && a[j].total == same)
//     //         {
//     //             if (a[i].id > min.id)
//     //             {
//     //                 swap(a[i], a[j]);
//     //                 // min.id = a[i].id;
//     //             }
//     //             // else
//     //             // {
//     //             //     swap(a[j], a[i]);
//     //             // }
//     //             // if (a[i].marks < min.marks)
//     //             // {
//     //             //     min = a[i];
//     //             // }
//     //         }
//     //     }
//     // }
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i].name << " " << a[i].cls << " " << a[i].sec << " " << a[i].id << " " << a[i].mMarks << " " << a[i].eMarks << "---" << a[i].total << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int std_id;
    int cls;
    char s;
    int total, mm, engm;

    Student()
    {
    }
    Student(string name, int cls, char s, int std_id, int total, int mm, int engm)
    {
        this->name = name;
        this->cls = cls;
        this->s = s;
        this->std_id = std_id;
        this->total = total;
        this->mm = mm;
        this->engm = engm;
    }

public:
    void print_information()
    {
        cout << name << " " << cls << " " << s << " " << std_id << " " << mm << " " << engm << "\n";
    }
};

bool comp(Student a, Student b)
{
    if (a.total == b.total)
    {
        // sort using age
        return a.std_id < b.std_id;
    }
    // when a is less than b
    return a.total > b.total;
}

int main()
{
    int n;
    cin >> n;
    // Sort Array of Class

    vector<Student> a;
    for (int i = 0; i < n; i++)
    {
        string name;
        int cls;
        char s;
        int std_id;
        int mm, engm;
        int total = 0;
        cin >> name >> cls >> s >> std_id >> mm >> engm;
        total = mm + engm;
        a.push_back(Student(name, cls, s, std_id, total, mm, engm));
    }

    //*****second method
    sort(a.begin(), a.end(), comp);
    for (int i = 0; i < n; i++)
    {
        a[i].print_information();
    }

    return 0;
}