#include <iostream>
#include <iomanip>
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
    double sum = 0;

    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        // arr.push_back(k);
        sum += k;
    }
    double div = sum / n;

    cout << std::fixed;
    cout << std::setprecision(12);
    cout << div;
}