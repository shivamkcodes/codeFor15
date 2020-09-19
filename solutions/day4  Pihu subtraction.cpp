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

    int n, k;
    cin >> n >> k;

    while (k--)
    {
        int rem = n % 10;
        if (rem != 0)
        {
            n--;
        }
        else if (rem == 0)
        {
            n = n / 10;
        }
    }

    cout << n << endl;

    return 0;
}