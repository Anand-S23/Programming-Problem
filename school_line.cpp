#include <bits/stdc++.h> 

using namespace std; 

int main() 
{
    int n, t; 
    cin >> n >> t; 
    string line; 
    string result = ""; 

    cin >> line;

    // BGGBG
    // GBGGB

    for (int i = 0; i < t; ++i)
    {
        for (int j = 0; j < n - 1; ++j)
        {
            if (line.at(j) == 'B' && line.at(j + 1) == 'G')
            {
                result += "GB";
                j++;
            }
            else
            {
                result += line.at(j);
            }

            if (j == n - 2 && line.at(j + 1) == 'B')
            {
                result += 'B';
            }
        }

        line = result; 
        result = "";
    }

    cout << line; 

    return 0;
}