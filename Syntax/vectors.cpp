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
    
    
    vector <vector<int>> cube = {10,vector<int>(10)};
    int k =0;
    for(auto &y:cube){
        for(int j =0;j<10;j++){
            y.at(j) = k++;
            
        }
    }
    for(const auto &x:cube){
        for(const auto &y:x){
            cout<<y<<" ";
        }
    }
    
    
    return 0;
}
