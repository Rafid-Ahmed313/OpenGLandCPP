#include <iostream>
using namespace std;
#define int long long
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    while(true){
        cout<<n<<" ";
        if(n==1) {
            break;
        }
        if(n%2==0){
            n=n/2;   
        }else{
            n=3*n+1;     
        }   
    }
    return 0;
}
