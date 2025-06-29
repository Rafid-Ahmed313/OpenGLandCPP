#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int main(){
  
    vector <int> some(10);
    for(int i=0;i<10;i++){
        some[i] = i;    
    }
    for(const auto &x:some){
        cout<<x<<endl;    
    }
    int a = accumulate(some.begin(),some.end(),0);
    cout<<a<<endl;
    auto b = find(some.begin(),some.end(),5);
    sort(some.begin(),some.end(),[](const int &x,const int &y){
        if (x>y){
            return y;
        }
        else{
            return x;
        }
        });
    cout<<"Index of five is "<<*b<<endl;
    for(const auto &x:some){
        cout<<"After sorting "<<x<<endl;
    }
    return 0;
}
