#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int a[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        int index = s[i] - 'a';
        a[index]++;
    }
    int max = 0, index = -1;
    for (int i = 0; i < 26; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            index = i;
        }
    }
    char ch = index + 'a';
    cout << ch;
}