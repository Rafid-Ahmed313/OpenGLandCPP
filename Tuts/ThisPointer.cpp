#include <iostream>
using namespace std;

class A{
    private:
        int a;
    public:
        A & setData(int a){
            this->a=a;
            return *this;
            
            
        }
        
        void getData(){
            cout <<"The value of a is "<<a;   
        }
    
    
};


int main(){
    A a;
    a.setData(4).getData();
    return 0;    
}
