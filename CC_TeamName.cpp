// #pragma GCC optimize("Ofast")
// #include<bits/stdc++.h>
// #define fastIO() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
// using namespace std;

// const int N = 1e4+10;

// void permute(string str, string out){
//     // When size of str becomes 0, out has a
//     // permutation (length of out is n)
//     if (str.size() == 0)
//     {
//         cout << out << endl;
//         return;
//     }
 
//     // One be one move all characters at
//     // the beginning of out (or result)
//     for (int i = 0; i < str.size(); i++)
//     {
//         // Remove first character from str and
//         // add it to out
//         permute(str.substr(1), out + str[0]);
 
//         // Rotate string in a way second character
//         // moves to the beginning.
//         rotate(str.begin(), str.begin() + 1, str.end());
//     }
// }


// int main(){
//     fastIO();
//     int n;
//     cin>>n;
//     while(n--){
//         char firstLetter[N];
//         int m; // total number of words (strings)
//         cin>>m;
//         string s[m];
//         for(int i = 0; i < m; i++){
//             cin.ignore();
//             cin>>s[i];
//             firstLetter[i] = s[i].front(); //stored the first character of every string!
//             // swap(s[i].front(),firstLetter[i]);
//             // cout<<s;
//         }
//         for (int i = 0; i < m; i++){
//             // s[i].replace(0,1,firstLetter[i]);
//             //fix firstLetter and traverse it through all strings (i mean replace first charcaters of every string with firstLetter) do this with all firstLetters (firstLetter is array which contains every first charcter of string)

//         }
        
//         // for(int i = 0; i < m; i++){
//         //     swapp(s[i].front(),s[i+1].front());
//         //     cout<<s[i]<<" ";
//         // }
//         // char first;
//         // first = s[0].front();
//         // char second = s[1].front();
//         // std::swap(s[0].front(),s[1].front());
//         // cout<<s[0]<<" "<<s[1];
        
//     }
// }
#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;

        string s[n];
        vector<pair <string, string>> vec;
        
        for(int i=0; i<n; i++){
            cin.ignore();
            cin>>s[i];
        }

        for (int i=0; i<n; i++)
        {
            for (int j=i; j<n-1; j++)
            {
                string s1 = s[j+1][0] + s[i].substr(1);
                string s2 = s[i][0] + s[j+1].substr(1);
                vec.push_back(pair<string, string> (s1, s2));
            }
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<vec.size(); j++){
                if(vec[j].first == s[i] || vec[j].second == s[i])
                    vec.erase(vec.begin() + j);
            }     
            
        }

        cout << vec.size()*2 <<"\n";
    }

}