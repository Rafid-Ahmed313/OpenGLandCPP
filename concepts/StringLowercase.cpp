#include <iostream>
#include <vector>
#include <set>
#include <cctype>  

#include<string>
#include <algorithm>


using namespace std;

int main() {
    int n;
    cin>>n;
    set<string> mySet;
    string arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
        
    }
    
    for(int j=0;j<n;j++){
        string temp = arr[j];
        std::transform(temp.begin(), temp.end(), temp.begin(),
                   [](unsigned char c) { return std::tolower(c); });

        mySet.insert(temp);
        
    }
    cout<<mySet.size()<<endl;
    
    
    return 0;
    
}

