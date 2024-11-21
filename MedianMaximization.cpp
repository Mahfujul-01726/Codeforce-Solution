#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int count = n / 2 + 1;
        cout << s / count << endl;
    }
    return 0;
}