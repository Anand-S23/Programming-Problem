#include <bits/stdc++.h>

using namespace std; 

int main()
{
    char word[100]; 
    cin >> word; 

    int upper = 0; 
    int lower = 0; 
    
    for (int i = 0; i < strlen(word); ++i)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            ++lower; 
        }
        else 
        {
            ++upper;
        }
    }

    if (upper <= lower)
    {
        for (int i = 0; i < strlen(word); ++i)
        {
            putchar(tolower(word[i]));
        }
    }
    else 
    {
        for (int i = 0; i < strlen(word); ++i)
        {
            putchar(toupper(word[i]));
        }
    }

    return 0; 
}

