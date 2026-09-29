#include <iostream>
#include <random>
using namespace std;
int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> dis(0,99);
    int row = 4, col = 6;
    int a[row][col];
    for (int i = 0; i < row; i++ ){
        for (int j = 0; j < col; j++){
            a[i][j] = dis(gen);
        }
    }
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout <<a[i][j]<<"\t";
        }
        cout <<endl;
    }
    int max = a[0][0];
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            if (a[i][j] >= max){
                max = a[i][j];
            }
        }
    }
    cout << max;
    cout << endl;
    int min = a[0][0];
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            if (a[i][j] <= min){
                min = a[i][j];
            }
        }
    }
    cout << min;    
    cout <<endl;
    int sum = 0;
    for (int i = 0 ; i < row; i++){
        for (int j = 0; j < col; j++){
            sum += a[i][j];
        }
    }
    cout <<sum;
    cout <<endl;
    int n,count = 0;
    cin >>n;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++)
            if (n == a[i][j]){
                count ++;
            }
    }
    cout <<count;
}