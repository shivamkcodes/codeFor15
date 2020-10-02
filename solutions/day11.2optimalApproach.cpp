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

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &it : arr)
        cin >> it;

    sort(arr.begin(), arr.end());
    int ans = 0;
    int prev = -1;
    int prevCount = 0;

    for (int x : arr)
    {

        if (x == prev)
        {
            prevCount++;
        }
        else
        {
            if (x == prev + 1)
            {

                ans += prevCount;
            }
            prev = x;
            prevCount = 1;
        }
    }

    cout << ans << endl;

    return 0;
}