// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         cin.ignore();
//         string a,b;
//         cin>>a>>b;

//         if(a.length() != b.length()){
//             cout<<"NO"<<endl;
//             return 0; 
//         } 
//         bool b = algorithm::contains(b, a);

//         // string temp = a+a;

//         if(a.find(b) != string::npos) cout<<"YES\n";
//         else  cout<<"NO\n";
//     }

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         cin.ignore();
//         string a,b;
//         cin>>a>>b;
//         string temp = a;
//         for(int i = 0; i < a.length(); i++){
//             if(a.find(b) != string::npos) 
//             {
//                 cout<<"YES\n";
//                 break;
//             }
//             else{
//                 temp.erase(i,i);
                
//                 if(temp.find(b) != string::npos) {
//                     cout<<"YES\n";
//                     break;
//                 }
//                 else{
//                     temp = a;
//                     temp.erase(i-a.length(), i-a.length());

//                     if(temp.find(b) != string::npos) {
//                         cout<<"YES\n";
//                         break;
//                     }
//                     else{
//                         temp = a;
//                         temp.erase(i,i-a.length());

//                         if(temp.find(b) != string::npos) {
//                             cout<<"YES\n";
//                             break;
//                         }
//                         else {
//                             cout<<"NO\n";
//                             break;
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        cin.ignore();
        string a,b;
        cin>>a>>b;
        string temp;
        // string t2, t3;
        for(int i = 0; i < a.length(); i++){
            temp  = a;
            if(a.find(b) != string::npos ) 
            {
                cout<<"YES\n";
                break;
            }
            else{
                temp.erase(1,1);
                
                if(temp.find(b) != string::npos) {
                    cout<<"YES\n";
                    break;
                }
                else{
                    temp = a;
                    temp.erase(a.length()-1, 1);

                    if(temp.find(b) != string::npos) {
                        cout<<"YES\n";
                        break;
                    }
                    else{
                        temp = a;
                        temp.erase(1,1);
                        temp.erase(a.length()-1, 1);

                        // if(temp.find(b) != string::npos ) {
                        //     cout<<"YES\n";
                        //     break;
                        // }
                        // else {
                        //     cout<<"NO\n";
                        //     break;
                        // }
                    }
                }
            }
        }

        if (a.find(b) == string::npos ){
            cout << "NO" << endl;
        }
    }
    return 0;
}