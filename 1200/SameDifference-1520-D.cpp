#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define pii pair<int, int>
#define pb push_back
#define vi vector<int>
#define vll vector<long long>
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
void init_code()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}

int main()
{
    init_code();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<ll, ll> m;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            ll y = x - i;
            m[y] += 1;
        }
        ll sum = 0;
        for (auto i : m)
        {
            ll k = i.second;
            sum += (k * (k - 1)) / 2;
        }

        cout << sum << endl;
    }
}
