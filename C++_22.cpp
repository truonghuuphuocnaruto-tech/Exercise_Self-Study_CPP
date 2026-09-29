#include <iostream>
using namespace std;

int main() {
    bool check = false;
    while (check = false){
        int a;
        cin >>a;
        switch (a){
            case 1:
                cout <<"tìm theo tên Phước";
                break;
            case 2:
                cout <<"tìm theo tên tác giả Phước";
                break;            
            case 3:
                cout <<"tìm theo nhà xuất bản Phước";
                break;            
            case 4:
                cout <<"tìm theo tiêu đề";
                break;            
            default:
                cout <<"phím nhập không hợp lệ";
                check = false;
                continue;
        }
    }
}