#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <cstring>
using namespace std;

int main()
{

    vector<int> S;
    char str[100];
    cin.getline(str, 100);

    // strtok is used for string splitting...
    char *ptr;
    ptr = strtok(str, "+");

    //  atoi is used for converting (const char *str) to integer
    while (ptr != NULL)
    {
        int k;
        k = atoi(ptr);
        S.push_back(k);
        ptr = strtok(NULL, "+");
    }

    sort(S.begin(), S.end());
    cout << S[0];
    for (int i = 1; i < S.size(); i++)
    {

        cout << "+" << S[i];
    }

    return 0;
}