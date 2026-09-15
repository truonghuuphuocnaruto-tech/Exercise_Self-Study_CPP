#include <iostream>
#include <cmath>
using namespace std;
/*
    Phạm vi số hoàn hảo từ 1-1000:
    output: 6       28      496
    exemple: 6 = 1 + 2 + 3
*/
int main (){
    for (int i2 = 1; i2 <= 1000; i2++){
        int sum = 0;
        for (int i = 1; i < i2; i++){
            if (i2 % i == 0 ){
                sum += i;
                continue;
            }
        }
        if (sum == i2){
            cout <<sum<<"  ";
        }    
    }
}