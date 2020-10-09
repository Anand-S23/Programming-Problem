#include <bits/stdc++.h> 

using namespace std; 

int main()
{
    char players[101]; 
    cin >> players; 

    int current = -1; 
    int total = 0;

    for (int i = 0; i < strlen(players); ++i)
    {
        if (players[i] != current)
        {
            current = players[i];
            total = 1; 
        }
        else
        {
            total++; 
        }
        
        if (total >= 7)
        {
            cout << "YES";
            return 0;  
        }
    }

    cout << "NO";
    return 0;
}