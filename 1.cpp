// # n = int(input())
// # for i in range(0, n):
// #     word = input()
// #     orgword = word
// #     for j in range(len(word)):
// #         word = word[1:]
// #         # print(word)
// #         if len(orgword) == len(word):
// #             print(len(word))
// # for i in range(0,n):
// #     if len(word) ==


// # word = input()
// # s =0
// # str = word
// # for i in range(len(word)):
// #        for word in str:
// #             sim +=1
// #             str = str[1:]
// #             s += sim
//     # print(len(word))

//     # if len(orgword) == len(word):
//     #     print(len(word))

using namespace std;
#include<bits/stdc++.h>
char a[100];
int s(int i)
{
    int j=0,count=0;
   // cout<<"ooo>"<<strlen(a)<<endl;
    while(i<strlen(a))
    {
        if(a[i++]==a[j++])
        count++;
        else
        break;
    }
    return count;
}
int main()
{
    int test,i,j,sum;
    cin>>test;
    for(i=0;i<test;i++)
    {
        sum=0;
        cin>>a;
        for(j=0;j<strlen(a);j++)
          sum+=s(j);
        cout<<sum<<endl;  
    }
    return 0;
}