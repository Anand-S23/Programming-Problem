#include <bits/stdc++.h> 

using namespace std; 

int main()
{
    uint64_t input_num; 
    int lucky_num = 0;

    cin >> input_num; 

    do
    {
        if (input_num % 10 == 4 || input_num % 10 == 7)
        {
            ++lucky_num;
        }
        input_num /= 10;
    } while (input_num > 1);

    string output = (lucky_num == 4 || lucky_num == 7) ? "YES" : "NO"; 
    cout << output;

    return 0; 
}