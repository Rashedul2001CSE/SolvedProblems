#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    // s = "abc" s.length() = 3 0, 1, 2
    int lowerCaseCnt = 0, upperCaseCnt = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            lowerCaseCnt++;
        }
        else
        {
            upperCaseCnt++;
        }
    }
    // a b c d ..... z
    // A B C D ..... Z
    if (upperCaseCnt > lowerCaseCnt)
    {
        // a = A
        // b = B
        // B = B
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }

    cout << s << endl;

    return 0;
}