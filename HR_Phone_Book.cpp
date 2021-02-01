#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, number;
    cin>>n;
    string name; 
    map<string,int> mp;
    for(int i =0; i<n; i++){
        cin>>name;
        cin>>number;
        mp.insert(pair<string,int>(name,number));
    }
    string s;
    map<string ,int> ::iterator it;
    while(cin>>s){
        it = mp.find(s);
        if(it == mp.end()){ //if iterator reaches end, this means the find() could not find the required stirng
            cout<<"Not found\n";
        }else{
            cout<<it->first<<"="<<it->second<<endl;
        }
    }
    return 0;
}