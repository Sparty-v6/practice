#include<iostream>
using namespace std;

class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
        int count = 0;
        bool flag = false;
	    for(int i =0; i <n; i ++){
	        if(arr[i] == x){
	            count++;
                flag = true;
	        }
	    }
        if(flag){
            return count;
        }
        else{
            return 0;
        }
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int *arr = new int [n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}