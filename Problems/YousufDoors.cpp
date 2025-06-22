#include <iostream>
#include <vector>
#define int long long

using namespace std;
signed main(){
    int cases;
    cin>>cases;
    for (int i= 0;i<cases;i++){
        int len,sec,count=0;
        cin>>len>>sec;
        vector <int> inps(len);
        for (auto &x:inps) cin>>x;
        bool escape = true;
        for(int j=0;j<len;j++){
            if(inps.at(j)==0){count++;}
            else{
                if(escape){
                    j=j+sec-1;
                    count+=sec;
                    escape=false;
                }
                else{
                    cout<<"NO"<<endl;
                    break;
                }
            }    
        }
        if (len==count || count>len){
            cout<<"YES"<<endl;;
        } 
        }
        
    return 0;
    }
    

