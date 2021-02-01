// # t1 = input()
// # t2 = input()
// # s = t1+t1+t2+t2
// # print(s)

// # test = s.split(t2,1)[1]

// # print(test)

// # if t2 in test:
// #     print(1)
// # else:
// #     print(0)



// # def compare(a):
// #     for x in zip(a):
// #         if x == x:
// #             print(1)
// #         else:
// #             print(0)
// # if __name__ == "__main__":
// #     ch = input()
// #     compare(ch)



// # def count(str1): 
   
// #     set_string1 = set(str1) 
  
// #     print("No. of matching characters are : " + str(len(set_string1)) ) 
  
  
// # # Driver code 
// # if __name__ == "__main__" : 
  
// #     str1 = 'aabcddekll12@'  # first string 
// #     # str2 = 'bb2211@55k'     # second string 
  
// #     # call count function  
// #     count( str1) 
     


// # def allCharactersSame(s) : 
// #     n = len(s) 
// #     for i in range(1, n) : 
// #         if s[i] != s[0] : 
// #             return False
  
// #     return True
  
// # # Driver code 
// # if __name__ == "__main__" : 
      
// #     s = input()
// #     if allCharactersSame(s) : 
// #         print(1) 
// #     else : 
// #         print(0) 



// # string = input()
   
// # print("Duplicate characters in a given string:")
// # for i in range(0, len(string)):  
// #     count = 1  
// #     for j in range(i+1, len(string)):  
// #         if(string[i] == string[j] and string[i] != ' '): 
// #             count = count + 1
// #             string = string[:j] + '0' + string[j+1:]

// #     if(count > 1 and string[i] != '0'):  
// #         print(string[i]) 


// #include<bits/stdc++.h>
// using namespace std;
// //#pragma GCC optimize("Ofast")
// /// Macros
// //#define int long
// #define ll long long
// #define sz size
// #define ull unsigned long long
// #define ld long double
// #define vi vector<int>
// #define ii pair<int,int>
// #define vii vector<ii>
// #define fst first
// #define scd second
// #define pb push_back
// #define fl '\n'
// #define el endl
// #define all(x) x.begin() , x.end()
// #define rall(x) x.rbegin() , x.rend()
// /// Functions
// #define db(x) cerr << #x << ": " << (x) << '\n';
// #define random() __builtin_ia32_rdtsc()
// #define lg2(x) 31-__builtin_clz(x)
// #define lg2ll(x) 63-__builtin_clzll(x)
// #define pi acos(-1)
// #define YN(x) cout<<((x)?("YES"):("NO"))<<fl;
// #define yn(x) cout<<((x)?("Yes"):("No"))<<fl;
// /// Red-Black Tree Template
// //#include <ext/pb_ds/assoc_container.hpp>
// //#include <ext/pb_ds/tree_policy.hpp>
// //using namespace __gnu_pbds;
// //typedef tree < long long ,  null_type ,  less<long long> ,  rb_tree_tag ,  tree_order_statistics_node_update > ordered_set;
// //#define less_than(n) order_of_key(n)
// //#define en_pos(n) find_by_order(n)
// /// Prime numbers  173,179,311,331,737,1009,2011,2027,3079,4001,100003
// ///===================================================================
// ull p[100005];
// ull base=311;


// struct str{
//     string s;
//     ull h[100005];

//     void hsh(){
//         h[0]=s[0];
//         p[0]=1;
//         for(int i=1;i<s.sz();i++){
//             h[i]=(h[i-1]*base+s[i]);
//             p[i]=p[i-1]*base;
//         }
//     }

//     ull gethash(int l,int r){
//         if(l==0){
//             return h[r];
//         }
//         return h[r]-h[l-1]*p[r-l+1];
//     }

// };


// main(){
//     ios_base::sync_with_stdio(0);cin.tie(0);
//     int tc;
//     cin>>tc;
//     while(tc--){
//         str x;
//         cin>>x.s;
//         x.hsh();
//         int ans=0;
//         int n=x.s.sz()-1;

//         for(int i=1;i<=n-2;i+=2){
//             int pik1=i/2;
//             int pik2=(n+i)/2;
// //            cout<<pik1<<" "<<i<<" "<<pik2<<fl;
//             if( (i+1)%2==0 && (n-i)%2==0 && x.gethash(0,pik1)==x.gethash(pik1+1,i) && x.gethash(i+1,pik2)==x.gethash(pik2+1,n) ){
//                 ans++;
//             }
//         }
// //        cout<<x.gethash(4,6)<<" "<<x.gethash(7,9)<<fl;
//         cout<<ans<<fl;;
//     }
// return 0;}

