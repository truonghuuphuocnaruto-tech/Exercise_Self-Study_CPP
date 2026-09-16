#include <iostream>
#include <string>
using namespace std;
/*
    in: -15
    out: nhập lại
    in: 15
    out: k phải là số nt
    out: nhập tiếp in n/N
*/
int main() {
    int n,check;
    char leave;
    cin >> n;
    while (true)
    {   
        if (n < 0){
            cout << "nhap lai \n";
            continue;
        }
        else{
            for (int i = 2; i < n; i++){
                if (n % i == 0){
                    check += 1;
                    break;
                }
                }
            if (check >= 1)
                cout << "Day k phai la so nt\n";
            else
                cout << "day la so ngto\n";
        }
        cout << "nhap N or n de thoat\n";
        cin >>leave;
        if (leave == 'N' or leave == 'n')
            break;
        else
            n = leave;
            continue;
    }
}