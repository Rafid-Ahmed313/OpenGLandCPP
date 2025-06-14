#include <iostream>
using namespace std;

typedef struct employee {
  int eID;
  char favchar;
  float salary;

} ep;

union money{
  int rice;
  char car;
  float pounds;
  
};

int sum(int,int);
void swap(int*a,int*b){
  int temp = *a;
  *a = *b;
  *b = temp;
   
}
int main(){
  int x=4;
  int y=5;
  swap(&x,&y);
  cout << "X is "<<x<<" Y is "<<y<<endl;
  enum TrafficLight { Red, Yellow, Green };

  TrafficLight light = Green;

  if (light == Green) {
     cout << "Go!" << endl;
  }

  ep rafid;
  struct employee harry;
  harry.eID=1;
  rafid.eID=1;
  rafid.favchar='c';
  rafid.salary=1200000;
  int s = 10;
  int f = 100;
  int ss = sum(s,f);

  cout<<ss<<endl;

  return 0;
}

int sum(int a,int b){
  return a+b;
}
