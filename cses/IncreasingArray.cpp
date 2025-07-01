#include <iostream>
#include <vector>
using namespace std;
#define int long long
signed main() {
    int f;cin>>f;
    vector<int> n(f);
    for(auto &x:n) cin>>x;
    int score=0;
    for(int i =0;i<(f-1);i++){
        if(n[i]>n[i+1]){
            score+=(n[i]-n[i+1]);
            n[i+1]=n[i];
        }
    }
    cout<<score;
    return 0;
}
