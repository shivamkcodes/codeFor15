#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#define in long long
#include <cstring>
using namespace std;

int main()
{

    set<int> arr;
    for (int i = 0; i < 4; i++)
    {
        int k;
        cin >> k;
        arr.insert(k);
    }

    cout << 4 - arr.size();

    return 0;
}