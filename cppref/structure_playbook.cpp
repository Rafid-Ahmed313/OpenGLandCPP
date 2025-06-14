#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int func(){
  int a,b,c;
  a=5;
  b=2;
  a = a +1;
  int result = a-b;
  cout<<result<<endl;
  return 0; 
}
void str(){
  string mystring;
  mystring = "This is a string";
  cout<<mystring;
  
}

int addition(int a,int b){
  int r ;
  r = a+b;
  return r;
}

int main(){
  cout<<"Hello World"<<endl;
  cout<<"another line"<<endl;
  func();
  str();
  string f;
  getline (cin,f);
  cout<<f<<endl;
  int z = addition (5,3);
  cout<<"The result is "<<z;
  return 0;
}
