// Example program
#include <iostream>
#include <string>
using namespace std;

class Employee{
    private:
        int a,b,c;
    public:
        int d,f;
        void setData(int a1,int b1,int c1);
        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};


class binary{
    private:
        string s;
    public:
        void read(void);
        void chk_bin(void);
        void ones(void);
        void display(void);

    
};

void binary::ones(void){
    for (int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i) = '1';
        }
        else if(s.at(i)=='1'){
            s.at(i)='0';
            }
    }
}

void binary::display(void){
    cout<<"Displaying your binary number"<<endl;
    for (int i =0;i<s.length();i++){
        cout<<s.at(i);
        
        }
    
}
void binary::read(void){
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}
void binary::chk_bin(void){
    for (int i=0;i<s.length();i++){
            if(s.at(i)!='0' && s.at(i)!='1'){
                cout<<"Incorrect binary format"<<endl;
                exit(0);
                }  
        }
    }

void Employee:: setData(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main()
{
  binary b;
  b.display();
  b.read();
  b.chk_bin();
  b.ones();
  b.display();
  Employee rafid;
  rafid.setData(1,2,4);
  rafid.getData();
  
  return 0;
}
