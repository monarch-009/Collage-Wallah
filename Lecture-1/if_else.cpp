#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    int age;
    cin >> name;
    cin >> age;

    if (age >= 18)
    {
        cout << name << " is eligible to vote." << endl;
    }
    else
    {
        cout << name << " is not eligible to vote." << endl;
    }

    return 0;
    
}