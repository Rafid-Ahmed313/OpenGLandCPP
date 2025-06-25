#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,a,b) for(int i=(a); i<=(b); ++i)
const ll INF = LLONG_MAX/4;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> l(n+1), r(n+1);
    FOR(i,1,n) cin >> l[i] >> r[i];

    // dp[len] = the minimum possible ending-value of
    //               a non-decreasing chain of length `len`
    vector<ll> dp(n+2, INF);
    dp[0] = -INF;   // empty chain can end at “−∞”
    int best = 0;   // current maximum chain length

    vector<int> ans(n+1);
    FOR(i,1,n){
        // can we extend our best chain by 1 using interval i?
        if (dp[best] <= r[i]) {
            ll x = max(dp[best], l[i]);
            dp[best+1] = x;
            ++best;
        }
        ans[i] = best;
    }

    // output answers for k=1..n
    FOR(i,1,n){
        cout << ans[i] << (i==n?'\n':' ');
    }
    return 0;
}

