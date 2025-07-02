#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define int long long
signed main() {
    int T;cin>>T;
    for (int k =0;k<T;k++){
        int i,j;cin>>i>>j;
        int middle,ans;
        int max = (i>j) ? i:j;
        middle = (max*max)-(max-1);
        if(max%2==0){
            if(i>j){
                ans=middle+(i-j);
            }
            else if(j>i){
                ans=middle-(j-i);
            }
            else{
                ans = middle;
            }
           
        }else{
            if(i>j){
                ans=middle-(i-j);
            }
            else if(j>i){
                ans = middle+(j-i);
                
            }
            else{
                ans=middle;
            }
            
        }
        
        cout<<ans<<endl; 
    }
    return 0;
}

