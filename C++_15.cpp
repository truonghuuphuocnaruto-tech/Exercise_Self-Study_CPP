#include <iostream>
#include <cmath>
using namespace std;
/*
    in = 7 | out = 13
    step: 1 + 5 + 7 = 13
*/
int main (){
    int n,sum;
    cin >>n;
    for (int i = 0; i <= n; i++){
        if (i == 3 or i % 2 == 0){
            continue;
        }
        else
            sum += i;
    }
    cout << sum;
}