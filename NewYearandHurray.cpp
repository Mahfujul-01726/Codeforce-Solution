#include <iostream>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;

    int leftmin = 240 - k;
    int low = 0;
    int high = n;
    int ans = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int done = 0.5 * mid * (2 * 5 + (mid - 1) * 5);

        if (done > leftmin)
        {
            high = mid - 1;
        }
        else if (done < leftmin)
        {
            low = mid + 1;
            ans = mid;
        }
        else
        {
            ans = mid;
            break;
        }
    }
    cout << ans << endl;
}

int main()
{
    solve();
    return 0;
}
