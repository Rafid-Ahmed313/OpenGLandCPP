#include <iostream>
#include <string>
using namespace std;

int add(int a, int b){
  int c;
  c = a+b;
  return c;
}

class Employee{
  public:
    Employee(string name,int salary,int sp){
      this->name = name;
      this->salary = salary;
      this->secretPassword = sp;

    }
    string name;
    int salary;

    void printDetails(){
        cout<<"The name of our first employee is"<<this->name<<" and his salary is "<<this->salary<<endl;
    }

    void getSecretPassword(){
      cout<<"SecretPass Is "<<this->secretPassword<<endl;
    }

  private:
    int secretPassword;




};

int main(){

  int arr2d[3][3] = {
    {1,2,3},{4,5,6},{7,8,9}
  };
  cout<<endl;
  for (int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout<<arr2d[i][j]<<endl;
    }
  }
  int a = 343;
  float b = 87.56;
  cout<<(float) a<<endl;
  cout<<(int) b;

  string name = "Rafid";
  cout<<"The name is "<<name;
  cout<<"Length of name is "<<name.length()<<endl;
  cout<<"This name is "<<name.substr(0,3)<<endl;
  string c;

  int as;
  int* ptra;
  as=32;
  ptra = &as;
  cout<<*ptra;
  Employee har("Rafid Ahmed",10000,69);
  har.printDetails();
  har.getSecretPassword();
  return 0;
}


