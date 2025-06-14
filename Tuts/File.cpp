#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
  string st = "Nigga it has been written";
  string st2;
  ofstream out("Sample.txt"); 
  out<<st<<endl;

  ifstream in("Sample.txt");


  getline(in,st2);

  cout<<st2;

  
  

  return 0;
}

