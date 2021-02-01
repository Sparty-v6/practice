#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        // he is covering total n distance after n steps coz 1 step = 1 distance... 
        // and this happens in first quadrant, so for all 4 quadrants, multiply n by 4
        long long n;
        cin>>n;
        cout<<4*n<<endl;
    }
    return 0;
}