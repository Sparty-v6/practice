#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int max = a.size() > b.size() ? max = a.size() : b.size();
        int min = 0;
        string temp = a+a;
        for(int i = 0; i< max; i++){
            if(a.size() > b.size()){
                a.pop_back();
                min++;
            }
            else{
                b.pop_back();
                min++;
            }            
        }
        if(temp.find(b) == string::npos){
            a.pop_back();   b.pop_back();
            min++;
        }
        cout<<min;
    }

    return 0;
}