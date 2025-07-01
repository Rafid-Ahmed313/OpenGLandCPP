#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define int long long
signed main(){
    int n;cin>>n;
    vector <int> c(n-1);
    for(auto &x:c) cin>>x;
    sort(c.begin(),c.end(),[](const auto &a,const auto &b){return a<b;});
    c.insert(c.begin(),0);
    bool ans = false;
    for (int i =0;i<n;i++){
        if(i!=c[i]){
            cout<<i;
            ans=true;
            break;
        }
        
    }
    if(!ans){
        cout<<n;
    }
    return 0;
}
