#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end(), greater<int>());
    ll x;
    cin >> x;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += x / arr[i];
        cout<<"ans:"<<ans<<endl;
        x -= x / arr[i] * arr[i];
        cout<<"x:"<<x<<endl;
    }
    cout << ans << endl;

    return 0;
}
