#include <iostream>

using namespace std;
int main(){
	int w;
	cin>>w;
	if(w % 2 == 0 && w>=2){
        cout<<w%2<<" "<< w<<endl;
		cout<<"YES"<<endl;
	}
	else{
        cout<<w%2<<" "<< w<<endl;
		cout<<"NO"<<endl;
	}
}