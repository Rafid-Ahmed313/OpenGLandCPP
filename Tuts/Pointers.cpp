#include <iostream>
using namespace std;
main(){
  int a =3;
  int* b=&a;
  int** c =&b;
  int marks[] = {23,45,56,89};
  cout<<marks[0]<<endl;
  cout<<marks[1]<<endl;
  cout<<marks[2]<<endl;
  cout<<marks[3]<<endl;

  std::cout <<b<<" "<<endl<<*b<<endl<<**c<<endl<<*c<<endl;
  for (int i=0;i<4;i++){
    cout<<"Value of mark "<<i<<"is " << marks[i]<<endl;
  }
  int j=0;
  while(j<4){
    cout<<"value of mark "<<j<<"is "<<marks[j]<<endl;
    j++;
  }
  int* p =marks;
  cout<<*(p+2)<<endl;
  return 0;
}
