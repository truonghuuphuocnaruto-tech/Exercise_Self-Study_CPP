#include <iostream>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int check,a;
    while (check == 0){
        cout <<"1. Tìm theo tên\n";
        cout <<"2. Tìm theo tên tác giả\n";
        cout <<"3. Tìm theo nhà xuất bản\n";
        cout <<"4. Tìm theo tiêu đề\n";
        cin >> a;
        switch (a){
            case 1:
                cout <<"tìm theo tên Phước";
                check ++;                
                break;
            case 2:
                cout <<"tìm theo tên tác giả Phước";
                check ++;                
                break;            
            case 3:
                cout <<"tìm theo nhà xuất bản Phước";
                check ++;
                break;            
            case 4:
                cout <<"tìm theo tiêu đề Phuoc";
                check ++;
                break;            
            default:
                cout <<"phím nhập không hợp lệ \n";
                continue;
        }
    }
}