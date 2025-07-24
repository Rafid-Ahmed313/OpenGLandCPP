#include <iostream>
#include <numeric>
#include <cmath>
#include <vector>

using namespace std;
bool isInteger(double x) {
    return floor(x) == x;
}

int main(){
    int n ;
    cin>>n;
    int arg[n];
    vector<int> s1;
    vector<int> s2;
    for(int i =1;i<=n;i++){
        arg[i-1] =i;
    
    }
    cout<<"The full list is "<<endl;
    for(int i =0;i<n;i++){
        cout<<arg[i]<<" ";
    }
    cout<<endl;
    
    auto avg = (std::accumulate(arg, arg+n, 0))/2.0;
    cout<<"The average is " <<avg<<endl;
    bool integer = isInteger(avg);
    if(integer){
        cout<<"YES"<<endl;
        int i = 0;
        int j = n;
        int sum=0;
        bool outer =true;
     
        
                
        for(int k = 1;k<n;k++){
            if(sum==avg){break;}
            if(k==1){sum+=arg[i];s1.push_back(arg[i]);}
            if((k)%2==0){i=i+1;sum+=arg[i];s1.push_back(arg[i]);}
            else{j = j-1;sum+=arg[j];s1.push_back(arg[j]);}
            cout<<"arg[i] is "<<arg[i]<<" arg[j] is "<<arg[j]<<" ";
            cout<<" Running sum is "<<sum<<" ";
            
            cout<<"Middle numbers are ";
            for(int m = (i+1); m<j;m++){
                cout<<arg[m]<<" ";
                if(sum+arg[m]==avg){
                    cout<<"Sum is "<<sum+arg[m]<<endl;
                    s1.push_back(arg[m]);
                    outer=false;
                    break;
                    
                    
                }
            }
            if(!outer){
                break;
            }
        
            cout<<endl;
            
            
        }
        
           cout<<"S1 is ";
    
    for (const auto &num : s1){
        cout<<num<<" ";
    };

    
    for (int i = 0; i < n; i++) {
        int x = arg[i];
        if (find(s1.begin(), s1.end(), x) == s1.end()) {
            s2.push_back(x);
        }
    }
    
    cout<<"s2 is ";
    for (const auto &num : s2){
        cout<<num<<" ";
    };

    }
        
    else{
        cout<<"NO"<<endl;
    }
    
        
    
       
      
    
 


    
// 1 2 3 4 5 6 7

    
    
    
}
