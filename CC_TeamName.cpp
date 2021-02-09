#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

const int N = 1e4+10;

void permute(string str, string out){
    // When size of str becomes 0, out has a
    // permutation (length of out is n)
    if (str.size() == 0)
    {
        cout << out << endl;
        return;
    }
 
    // One be one move all characters at
    // the beginning of out (or result)
    for (int i = 0; i < str.size(); i++)
    {
        // Remove first character from str and
        // add it to out
        permute(str.substr(1), out + str[0]);
 
        // Rotate string in a way second character
        // moves to the beginning.
        rotate(str.begin(), str.begin() + 1, str.end());
    }
}

int main(){
    fastIO();
    int n;
    cin>>n;
    string s;
    while(n--){
        char firstLetter[N];
        int m; // total number of words (strings)
        cin>>m;
        for(int i = 0; i < m; i++){
            cin.ignore();
            cin>>s;
            firstLetter[i] = s.front(); //stored the first character of every string!
        }
    }
}