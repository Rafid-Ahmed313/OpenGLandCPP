#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool myCompare(pair <int,int> p1, pair<int,int> p2){
    return p1.first<p2.first;
}

int main(){
    
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    
    for (int i =0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    vector<int>::iterator it;
    for (it = v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }
    for (auto element:v){
        cout<<element<<endl;
    }
    
    v.pop_back();
    vector<int> v2 (3,50);
    swap(v,v2);
    
    pair <int,char> p;
    p.first = 3;
    p.second = 'f';
    
    pair <pair<int,int>,int> pss;
    pss.first = make_pair(100,200);
    pss.second = 300;
    cout<<pss.first.second<<endl;
    
    int arr[] = {10,16,7,14,5,3,2,9};
    vector <pair<int,int>> v11;
    
    for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        v11.push_back(make_pair(arr[i],i));
    }
    
    sort(v11.begin(),v11.end(),myCompare);
    
    for (int i=0;i<v11.size();i++){
        arr[v11[i].second] = i;
        
        
    }
    
    for (int i = 0;i<v11.size();i++){
        
        cout<<arr[i];
        
    }
    
    
    return 0;
}
