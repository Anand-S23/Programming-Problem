#include <bits/stdc++.h> 

using namespace std; 

int main() 
{
    char s[101]; 
    char t[101]; 

    cin >> s >> t; 

    if (strlen(s) == strlen(t))
    {
        for (int i = 0; i < strlen(s); ++i)
        {
            if (s[i] != t[strlen(t) - (i + 1)])
            {
                cout << "NO";
                return 0; 
            }
        }
    }
    else 
    {
        cout << "NO"; 
        return 0; 
    }

    cout << "YES";

    return 0; 
}