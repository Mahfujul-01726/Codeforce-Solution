#include <iostream>
using namespace std;

#define ll long long

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        ll minimum = min(min(a, b), (a + b) / 4);

        cout << minimum << endl;
    }

    return 0;
}
