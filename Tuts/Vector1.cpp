#include <iostream>
#include <vector>


using namespace std;
void display(vector <int> &v){
    for (int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
        // cout<<"From another method"<<endl;
        // cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
int main(){
    vector <int> vec1;
    int element;
    cout <<"Enter the size of the vector"<<endl;
    cin>>size;
    
    for (int i=0;i<size;i++){
        cout<<"Enter an element to add to this vector: ";
        cin>>element;
        vec1.push_back(element);
        
        
    }
    // vec1.pop_back();
    display(vec1);
    vector<int>::iterator iter = vec1.begin();
    
    vec1.insert(iter+1,2, 566);
    display(vec1);
    
    return 0;
}
