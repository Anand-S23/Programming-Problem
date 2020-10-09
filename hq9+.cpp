#include <bits/stdc++.h> 

using namespace std; 

int main()
{
    char word[101];
    cin >> word; 

    for (int i = 0; i < strlen(word); ++i)
    {
        if (word[i] == 'H' || word[i] == 'Q' || word[i] == '9')
        {
            cout << "YES"; 
            return 0; 
        }
    }

    cout << "NO"; 
    return 0;
}