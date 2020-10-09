#include <bits/stdc++.h> 

using namespace std; 

int main()
{
    string s;
    string copy_s = "";
    int check = 0;

    cin >> s; 

    for (int i = 0; i < s.length(); ++i)
    {
        bool found = false;
        for (int j = 0; j < copy_s.length(); ++j)
        {
            if (copy_s.at(j) == s.at(i))
            {
                found = true; 
                break;
            }
        }

        if (!found)
        {
            check++;
            copy_s += s.at(i);
        }
    }

    if (check % 2 == 0) { cout << "CHAT WITH HER!"; }
    else { cout << "IGNORE HIM!"; }

    return 0;
}