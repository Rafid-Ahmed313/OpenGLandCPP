#include <iostream>
#include <vector>
#include <set>
#include <cctype>  
#include <map>
#include<string>
#include <algorithm>


using namespace std;

int main() {
    string str;
    cin>>str;
    map<char,int> mp;
    for (char tempchar:str){
        mp[tempchar]++;
  
    }
    
    
    char highest;
    int appr=-1;
    
    for (const auto x:mp){
        if (x.second > appr){
            highest = x.first;
            appr = x.second;
            
        }
        
    }
    cout<<highest<<" "<<appr<<endl;
   
    
    return 0;
    
}

