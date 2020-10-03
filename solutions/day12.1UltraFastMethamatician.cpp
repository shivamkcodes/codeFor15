#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <chrono>
#define in long long
#include <string>
using namespace std;

int main()
{

    string str1;
    string str2;
    string str3;
    cin >> str1;
    cin >> str2;
    for (int i = 0; i < str1.size(); i++)
    {
        if (str1[i] == str2[i])
        {
            str3.push_back('0');
        }
        else
        {
            str3.push_back('1');
        }
    }
    cout << str3;

    return 0;
}