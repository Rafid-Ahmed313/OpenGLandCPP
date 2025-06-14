#include <iostream>
#include <cmath>
using namespace std;

class Distance;
class p1{
    private:
        int x1;
        int y1;
        friend class Distance;
        
    public:
        p1(int x_inp,int y_inp){
            x1=x_inp;
            y1=y_inp;
        };
        void printPoints(void){
            cout<<"Points are ("<<x1<<","<<y1<<")"<<endl;
        };
    
};

class p2{
    private:
        int x2;
        int y2;
        friend class Distance;
        
    public:
        p2(int x_inp,int y_inp){
            x2=x_inp;
            y2=y_inp;
        };
        void printPoints(void){
            cout<<"Points are ("<<x2<<","<<y2<<")"<<endl;
        };
    
};

class Distance{
    public:
        double MSD(p1 o1,p2 o2){
            double answer = sqrt(pow((o1.x1-o2.x2),2)+pow((o1.y1-o2.y2),2));
            return answer;
            
        }
    
};
    
int main(){
    cout<<sqrt(1000)<<endl;
    p1 point1(0,0);
    p2 point2(1000,1000);
    
    
    point1.printPoints();
    point2.printPoints();
    Distance DE;
    double ans = DE.MSD(point1,point2);
    cout<<"The answer is "<< ans;
   
    return 0;
}
