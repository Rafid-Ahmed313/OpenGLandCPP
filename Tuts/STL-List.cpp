#include <iostream>
#include <list>


using namespace std;
void display(list <int> & lst){
    list <int> ::iterator it;
    for(it = lst.begin(); it!=lst.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    
}
int main(){
    
    list <int> list1;
    
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(12);
    list1.push_back(10);
    list1.push_back(3);
    
    list<int> ::iterator iter;
    iter = list1.begin();
    
    cout<<*iter<<endl;
    ++iter;
    cout<<*iter<<endl;
    display(list1);
    list1.pop_front();
    list1.remove(3);
    display(list1);
    
    list1.sort();
    display(list1);
    
    list<int> list2(3);
    list<int> :: iterator iter2;
    iter2 = list2.begin();
    *iter2 =45;
    iter2++;
    *iter2 = 9;
    iter2 ++;
    *iter2 = 6;
    display(list2);
    
    list1.merge(list2);
    cout<<"List 1 After merging: ";
    display(list1);
    list1.reverse();
    display(list1);
    
    return 0;
}
