#include <iostream>
#include <vector>
using namespace std;
#define int long long
signed main() {
    int n=100000;
    int arg[n][n];
    int inc=1;
    for(int i =0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<i;j++){
                arg[j][i]=inc;
                inc++;
            }
            arg[i][i] = inc;
            inc++;
            for(int k=(i-1);k>=0;k--){
                arg[i][k]=inc;
                inc++;
                
            }
        
        }else{
            for(int k=0;k<i;k++){
                arg[i][k]=inc;
                inc++;
            }
            arg[i][i] = inc;
            inc++;
            
            for(int j=(i-1);j>=0;j--){
                arg[j][i] =inc;
                inc++;
                
            }
        }
    }
    // for(int i =0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<arg[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
        int j,i;
        cin>>j>>i;
        cout<<arg[i-1][j-1]<<endl;
    }
    return 0;
}

