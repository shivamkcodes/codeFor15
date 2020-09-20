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

    in num;
    cin >> num;

    if (num == 2)
    {

        cout << "NO";
    }
    else if (num % 2 == 0)
    {
        cout << "YES";
    }

    else
    {
        cout << "NO";
    }

    return 0;
}