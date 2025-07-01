#include <iostream>
#include <vector>
using namespace std;
#define int long long
signed main() {
    int n;cin>>n;
    vector <int> f;
    vector <int> even;
    for(int i=1;i<(n+1);i++){
        if(i%2!=0){
            f.push_back(i);
        }else{even.push_back(i);}
    }
    for(auto &x:f){
        even.push_back(x);
    }
    
   
    if(even.size()>3){
    for(const auto &y:even){
        cout<<y<<" ";
    }}else{if(even.size()!=1){cout<<"NO SOLUTION";}else{cout<<1;}}
    
   
    return 0;
}

