#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#define in long long
#include <string>
using namespace std;

int main()
{

    string str;
    cin >> str;
    vector<int> arr;

    for (int i = 0; i < str.size(); i += 2)
    {
        // arr.push_back(stoi(str[i]));
        int val = str[i] - '0';
        arr.push_back(val);
    }

        sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size() - 1; i++)
    {
        cout << arr[i] << "+";
    }

    cout << arr[arr.size() - 1];

    return 0;
}