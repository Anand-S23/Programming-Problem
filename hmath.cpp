#include <bits/stdc++.h> 

using namespace std; 

int main()
{
    string expr; 
    cin >> expr; 

    int size = expr.length()/2+1;
    vector<char> vec = {};
    string result = "";

    for (int i = 0; i < expr.length(); ++i)
    {
        if (expr.at(i) != '+')
        {
            vec.push_back(expr.at(i));
        }
    }

    sort(vec.begin(), vec.begin()+size);

    for (int i = 0; i < size; ++i)
    {
        result += vec.at(i);
        if (i < size-1) { result +=  "+"; }
    }

    cout << result; 
    return 0;
}