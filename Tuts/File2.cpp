#include <iostream>
#include <fstream>
#include <string>
using namespace std; 

int main(){
  ofstream hout("sample.txt");
  cout<<"Enter your name";
  string name;
  string content;
  cin>>name;
  hout<<"My name is "+name;

  hout.close();


  ifstream hin("sample.txt");
  hin>>content;
  cout<<"The content of this file is: "<<content;
  
  ofstream out;
  out.open("sample.txt");
  out<<"This is me ";
  out<<"I am john constantine ";
  out.close();
  
  ifstream in;
  string st,st2;
  in.open("sample.txt");
  while (in.eof()==0){
    getline(in,st);
    cout<<st<<endl;
  };
  in.close();


  return 0;
}
