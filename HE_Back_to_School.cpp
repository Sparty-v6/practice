#include<bits/stdc++.h>
using namespace std;

int maxx(int x,int y,int z){
    int max = x;
    if(max < y){
        if(max < z)    max = z;
        else    max = y;
    }
    return max;
}

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    cout<<maxx(x,y,z);
    return 0;
}