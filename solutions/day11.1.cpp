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
    priority_queue<int, vector<int>, greater<int>> minh; // Implementation of minHeap
    vector<int> arr(n);
    for (int &it : arr)
        cin >> it;

    for (int x : arr)
    {

        minh.push(x);
        if (minh.size() > k)
        {

            minh.pop();
        }
    }

    cout << minh.top() << endl;

    return 0;
}