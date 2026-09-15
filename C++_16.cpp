#include <iostream>
#include <cmath>
using namespace std;
/*
    12 15 18 21 24 27 30 33 36 39 42 45 48
*/
int main (){
    int n = 10;
    while (n < 50){
        n ++;
        if (n % 3 == 0){
            cout <<n <<" ";
        }
    }
}