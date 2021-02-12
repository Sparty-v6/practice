#include<bits/stdc++.h>
typedef long long ll;
#define fastIO() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

ll means(int *arr, int n, int l, int r){
    // vector<int> v(arr, arr+n / sizeof(arr[0]));
    // return accumulate(v.begin()+l,v.end()-r,0)/v.size();
    ll sum = 0;
    ll count = 0;
    for(int i = l; i <= r; i++){
        sum+= arr[i];
        count++;
    }
    return floor(sum/count);
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fastIO();
    int n,q; //n size of array, q- querries
    cin>>n;
    cin>>q;
    int arr[n];
    for(int i = 1; i <= n; i++){
        cin>>arr[i];
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<means(arr,n,l,r)<<endl;
    }
    return 0;
}