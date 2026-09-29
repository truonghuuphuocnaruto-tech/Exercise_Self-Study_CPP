#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
int PTB2 (double a, double b, double c ){
    double delta = (pow(b,2)-4*a*c);
    double x1 = ((-b + sqrt(delta))/2*a);
    double x2 = ((-b - sqrt(delta))/2*a);
    if (a+b+c == 0)
        cout <<"Phương trình có 2 nghiệm: x1 =  1 x2 = "<<c/a<<endl;
    else if (a-b+c == 0)
        cout <<"Phương trình có 2 nghiệm: x1 = -1 x2 = "<<-c/a<<endl;    
    else if (delta > 0)
        cout <<"Phương Trình Có 2 Nghiệm Phân Biệt: "<<"x1 = "<<x1<<" x2 = "<<x2<<endl;
    else if (delta == 0)
        cout <<"Phương Trình Có 1 Nghiệm Duy Nhất: x1 = x2 = "<<-b/2*a<<endl;
    else
        cout <<"Phương Trình Vô Nghiệm"<<endl;
    
} 
int main(){
    SetConsoleOutputCP(CP_UTF8);   
    PTB2(1,2,3);
    PTB2(1,2,1);
    PTB2(1,2,-3);
    PTB2(4,-1,-3);
    PTB2(1,4,3);
}