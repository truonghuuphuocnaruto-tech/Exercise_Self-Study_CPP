#include <iostream>
#include <windows.h>
using namespace std;
int casio(double a, double b, char c);
int main (){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double a,b;
    char c;
    cout <<"Mời nhập số a: ";
    cin >>a;
    cout <<"Mời nhập số b: ";
    cin >>b;
    cout <<"Mời nhập phép tính (+,-,*,/): ";
    cin >>c;
    casio (a,b,c);
}
int casio(double a, double b, char c){
    switch (c){
        case '+':
            cout <<"kp "<<a+b;
            break;
        case '-':
            cout <<"kp "<<a-b;
        case '*':
            cout <<"kp "<<a*b;
            break;
        case '/':
            if (b > 0)
                cout <<"kp "<<a/b;
            else
                cout <<"Error: 0 sao chia được đây thím";
            break;
        default:
            cout <<"Error: phép tính tào lao";
    }
}