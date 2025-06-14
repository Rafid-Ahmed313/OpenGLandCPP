#include <iostream>
using namespace std;

class BaseClass{
    public:
        int var1_base;
        virtual void display(){
            cout<<"Displaying Base class variable var1 "<<var1_base<<endl;
            
        };
    
    
};

class DerivedClass : public BaseClass{
    public:
        int var_derived;
        void display(){
            cout<<"Displaying base class variable var derived "<<var1_base<<endl;
            cout<<"Displaying derived class variable var_derived "<<var_derived<<endl;
            
        };
    
};                                         



int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    
    base_class_pointer = &obj_derived;
    
    base_class_pointer->var1_base = 34;
    base_class_pointer->display();
    // base_class_pointer->var_derived =123;
    
    DerivedClass * derived_class_pointer;
    derived_class_pointer= &obj_derived;
    derived_class_pointer ->var_derived = 98;
    derived_class_pointer ->var_derived = 98;

    derived_class_pointer ->display();
    return 0;
    
}
