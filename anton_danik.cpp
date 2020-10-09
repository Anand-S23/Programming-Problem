#include <bits/stdc++.h> 

using namespace std; 

int main() 
{
    int n; 
    cin >> n; 
    char games[n];
    cin >> games; 

    int a = 0; 
    int d = 0; 

    for (int i = 0; i < n; ++i)
    {
        if (games[i] == 'A')
        {
            ++a; 
        }
        else 
        {
            ++d;
        }
    }

    if (a == d)
    {
        cout << "Friendship";
    }
    else if ( a > d)
    {
        cout << "Anton";
    }
    else 
    {
        cout << "Danik";
    }

    return 0;
}