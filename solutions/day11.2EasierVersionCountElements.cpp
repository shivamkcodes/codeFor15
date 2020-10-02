#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <unordered_set>
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
    unordered_set<int> s;
    for (int x : arr)
        s.insert(x);

    int c = 0;

      for (int x : arr)
    {

        if (s.count(x + 1) == 1)
        {
            c++;
        }
    }

    cout << c << endl;

    return 0;
}