#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    string first,second;
    vector <string> comp;
    getline(cin,first);
    getline(cin,second);
    reverse(second.begin(),second.end());
    string p1;
    string p2;
    string f;
    for (int i=0;i<first.size();i++){
        
        for (int j = 0;j<second.size();j++){
            if(first[i] == second[j]){
                if(j!=0){
                    p2 = second.substr(0,j+1);
                    reverse(p2.begin(),p2.end());
                    p1 = first.substr(0,i);
                    f = p1+p2;
                    comp.push_back(f);        
                }    
            }
        }  
    }
    auto it = min_element(comp.begin(),comp.end(),[](const string &a, const string &b){
        return a.size()<b.size();});
    if (it != comp.end()){cout<<*it<<endl;} else{cout<<-1<<endl;}
    
    return 0;
}
    

