#include <iostream>
using namespace std;
/*
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44
*/
int main() {
    for (int i = 1; i <= 4; i++){
        for (int j = 1; j <= 4; j++){
            cout <<" *";
        }
        cout <<endl;
    }
    cout <<endl;
    cout <<endl;
    cout <<endl;
    for (int i = 1; i <= 4; i++){
        for (int j = 1; j <= 4; j++){
            if (i == 1 or i == 4 or j == 1 or j == 4)
                cout <<" *";
            else
                cout <<"  ";
        }
        cout <<endl;
    }
    cout <<endl;
    cout <<endl;
    cout <<endl;
    for (int i = 1; i <= 4; i++){
        for (int j = 1; j <= i; j++){
            cout <<" *";
        }
        cout <<endl;
    }
    cout <<endl;
    cout <<endl;
    cout <<endl;    
    for (int i = 1; i <= 4; i++){
        for (int j = 1; j <= i; j++){
            cout <<" *";
        }
        cout <<endl;
    }
    cout <<endl;
    cout <<endl;
    cout <<endl; 
    for (int i = 1; i <= 4; i++){
        for (int j = 1; j <= 4; j++){
            if (i == 3 and j == 2){
                cout <<"  ";
            }
            else if (j <= i){
                cout <<" *";
            }
        }
        cout <<endl;
    }
    cout <<endl;
    cout <<endl;
    cout <<endl; 
    for (int i = 1; i <= 4; i++){
        for (int j = 1; j <= 5-i; j++){
            cout <<"*"<<" ";
        }
        cout <<endl;
    }
    cout <<endl;
    cout <<endl;
    cout <<endl;    
    for (int i = 1; i <= 4; i++){
        for (int j = 1; j <= (5-i); j++){
            if (i == 2 and j == 2){
                cout <<"  ";
            }
            else
                cout <<"*"<<" ";
        }
        cout <<endl;
    }
    cout <<endl;
    cout <<endl;
    cout <<endl;    
    for (int i = 1; i <= 4; i++){
        for (int j = 1; j <= 4; j++){
            cout <<"";
        }      
        for (int k = 5-i; k <= 4; k++){
            cout <<" *";
        }
        cout <<endl;
    }
    cout <<endl;
    cout <<endl;
    cout <<endl;    
    for (int i = 1; i <= 4; i++){
        for (int j = 1; j <= 4-i; j++){
            cout <<" "<<" ";
        }      
        for (int k = 5-i; k <= 4; k++){
            cout <<" *"<<"";
        }
        cout <<endl;
    }
    cout <<endl;
    cout <<endl;
    cout <<endl;    
    for (int i = 1; i <= 4; i++){
        for (int j = 1; j <= 4-i; j++){
            cout <<" "<<" ";
        }      
        for (int k = 5-i; k <= 4; k++){
            if (k == 3 and i == 3){
                cout <<" "<<" ";
            }
            else{
                cout <<" *"<<"";
            }
        }
        cout <<endl;
    }
    cout <<endl;
    cout <<endl;
    cout <<endl;     
    for (int i = 1; i <= 4; i++){
        for (int j = 1; j <= 3; j++){
            if (j <= 4-i)
                cout <<" "<<" ";
            else
                cout <<"*"<<" ";
        if (j == 3){
            for (int k = 1; k <= 5; k++){
                if (k == 4)
                    cout <<"*"<<" ";
                else if (k > 4 ){
                    for (int m = 5; m <= 7; m++){
                        if (m - i == 4 or m - i == 5 or m-i==6)
                            cout <<" ";
                        else
                            cout <<"*"<<" ";
                    } 
                }     
            }   
        }    
        }
    }
    cout <<endl;        
    cout <<endl;                                                                         
    cout <<endl;                                                                               
}