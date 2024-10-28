#include <bits/stdc++.h>
using namespace std;

void checkString(string s)
{
    int v = 0;
    int c = 0;

    // Your code here
    remove(s.begin(), s.end(), ' ');
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            v++;
        else
            c++;
    }
    cout << s << '\n';

    if (v > c)
        cout << "Yes";
    else if (c > v)
        cout << "No";
    else
        cout << "Same";

    cout << endl;
}

int main()
{
    checkString("a i u e o t m n s w");
    return 0;
}