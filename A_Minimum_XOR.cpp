//-----------_The_eRRoR_----------
//---------Adnan_Torofdar----------
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mod 1000000007
void _The_eRRoR_()
{
    int n, XOR = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        XOR ^= a[i];
    }

    int ans = XOR;
    for (int i = 0; i < n; i++)
    {
        ans = min(ans, (XOR ^ a[i]));
    }

    cout << ans << endl;
}
int main()
{
    fast;
    ll test_case = 1;
    cin >> test_case;
    while (test_case--)
        _The_eRRoR_();
    return 0;
}