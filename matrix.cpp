#include<iostream>
using namespace std;

int main(){
    int arr[5][5] = {{0,1,1,1,0},{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{0,1,1,1,0}};
    for(int i=0 ;i<5;i ++){
        for(int j=0 ; j<5; j ++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}