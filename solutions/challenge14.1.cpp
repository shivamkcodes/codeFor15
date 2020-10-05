#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <chrono>
#define in long long
#include <cstring>
using namespace std;

int main()
{

    int n;
    cin >> n;
    if (n & 1)
    {
        cout << "-1";
    }
    else
    {
        for (int i = 2; i <= n; i = i + 2)
        {
            cout << i << " " << i - 1 << " ";
        }
    }

    return 0;
}