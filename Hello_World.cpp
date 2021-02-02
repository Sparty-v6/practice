#include<bits/stdc++.h>
#include<chrono>
#include<thread>
#include<time.h>
using namespace std;

int main(){
    srand(time(NULL));
    
    while(true){
        char cch = 'a' + rand()%26;
        if(cch == 'h'){
            cout<<cch<<endl;
            break;
        } else {
            cout<<cch<<endl;
            std::this_thread::sleep_for(chrono::milliseconds(1000));
        }
    }
    return 0;
}