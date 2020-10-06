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
    int n;
    cin >> n;

    int arr[1000];
    int brr[1000];
    int crr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cin >> brr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        crr[i] = brr[i] - arr[i + 1];
        brr[i + 1] = brr[i + 1] + crr[i];
        }
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (brr[i] > max)
        {
            max = brr[i];
        }
    }
    cout << max;

    return 0;
}