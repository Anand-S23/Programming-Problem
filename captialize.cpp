#include <bits/stdc++.h>

using namespace std; 

int main()
{
    string word;
    string result = "";
    cin >> word; 

    for (int i = 0; i < word.length(); ++i)
    {
        if (i == 0) { result += toupper(word.at(i)); }
        else { result += word.at(i); }
    }

    cout << result;

    return 0;
}