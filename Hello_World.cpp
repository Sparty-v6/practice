#pragma GCC Optimize("Ofast");
#include<bits/stdc++.h>
#include<chrono>
#include<thread>
#include<time.h>
using namespace std;

void magic(string cur, char exp){
    srand(time(NULL));
    while(true){
        int random = rand()% 127; //prints 0 to 127 random numbers
        cout<<"\r"<<cur + char(random)<<" ";
        this_thread::sleep_for(chrono::milliseconds(10));
        if(char(random) == exp) break;
    }
}

int main(){
    string str = "Hello World";
    string cur = "";
    for(auto c: str){
        magic(cur,c);
        cur += c;
    }
    return 0;
}