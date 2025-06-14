#include <iostream>
#include <map>
#include <string>
using namespace std;
   
int main(){
    map<string,int> marksMap;
    marksMap["Harry"] = 98;
    marksMap["Jack"] = 59;
    marksMap["Rohan"] = 2;
    marksMap.insert({{"Kozume's",169},{"kuroo",69}});
    map<string,int> ::iterator itr;
    for(itr = marksMap.begin(); itr!=marksMap.end(); itr++){
        cout<<(*itr).first<<" "<<(*itr).second<<"\n";
        
    }
    
    cout<<"Max size is "<<marksMap.max_size()<<endl;
    cout<<"Sizee is "<< marksMap.size()<<endl;
    
    
    return 0;
}
