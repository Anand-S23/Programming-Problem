#include <bits/stdc++.h> 

using namespace std; 

string compare(const char* one, const char* two)
{
    string alpha = "abcdefghijklmnopqrstuvwxyz";

    int pos2, pos1;
    for (int i = 0; i < alpha.length(); ++i)
    {
        if (alpha.at(i) == one[0])
        {
            pos1 = i;
        }
        else if (alpha.at(i) == two[0])
        {
            pos2 = i;
        }
    }

    if (pos2 > pos1) { return "-1"; }
    return "1";
}

int main() 
{
    string first, second; 
    cin >> first >> second;
    string one, two;

    for (int i = 0; i < first.length(); ++i)
    {
        one = tolower(first.at(i));
        two = tolower(second.at(i)); 

        if (!(one == two))
        {
            cout << compare(one.c_str(), two.c_str());
            return 0;
        }
    }

    cout << "0";  
    return 0;
}