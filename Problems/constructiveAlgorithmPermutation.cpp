#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int T;
    cin>>T;
    for (int j=0;j<T;j++){
        int n;
        cin>>n;
        vector <int> v={2,1};
        for (int i=3;i<(n+1);i++){
            int idx = int(round( v.size() / 2.0 ) );
            v.insert(v.begin()+idx,i);}
        for(const auto &x:v) cout<<x<<" ";
        cout<<endl;
           
    }
    return 0;
}
    

