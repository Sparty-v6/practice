#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *a = new int[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    int last = a[n-1]; //store last element
    for(int i = n-1; i >= 0; i--){ //traverse in reverse
        a[i] = a[i-1]; //right shift
    }
    a[0] = last; // u know this!

    for(int i = 0; i < n ; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}