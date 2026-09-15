#include <iostream>
#include <cmath>
using namespace std;
/*
    S = 1!+2!+3!+..+10!
    output = 4037913
*/
int main (){
    int sum;
    int a = 1;
    for (int i = 1; i <= 10; i++){
        a = a * i;
        sum +=a;
    }
    cout <<sum;
}