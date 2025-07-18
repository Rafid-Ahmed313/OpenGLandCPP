#include <iostream>

using namespace std;

class Complex;

class Calculator{
    public:
        int add(int a, int b){
            return (a+b);
        }
        
        int sumRealComplex(Complex, Complex);
}   ;

class Complex{
    private:
        int a,b;
        friend int Calculator :: sumRealComplex(Complex o1,Complex o2);
        friend class Calculator;
        
        
    
    public:
        void setNumber(int n1,int n2){
            a =n1;
            b =n2;
            
            
        }
        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
            
        }
    
};

int Calculator::sumRealComplex(Complex o1, Complex o2){
            
            return (o1.a + o2.a);
            
        };


int main(){
    Complex o1,o2;
    o1.setNumber(1,4);
    o2.setNumber(5,7);
    Calculator calc;
    int res = calc.sumRealComplex(o1,o2);
    cout<<"The sum of the real part of o1 and o2 is "<<res<<endl;
    
    return 0;
}
