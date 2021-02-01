#include<iostream>
using namespace std;
int closestNumber(int n, int m) 
{ 
    // find the quotient 
    int q = n / m; 
      
    // 1st possible closest number 
    int n1 = m * q; 
      
    // 2nd possible closest number 
    int n2 = (n * m) > 0 ? (m * (q + 1)) : (m * (q - 1)); 
      
    // if true, then n1 is the required closest number 
    // if (abs(n - n1) < abs(n - n2)) 
    return n1; 
      
    // else n2 is the required closest number     
    // return n2;     
} 
int main()
{
    int test_cases;
    int s,n,q;
    cout<<"Enter test cases\n";
    cin>>test_cases;
    for(int i =0; i<test_cases; i++)
    {
        cin>>s>>n;
        int q = s / n; 
        int n1 = n * q; 
        // int n2 = (n * m) > 0 ? (m * (q + 1)) : (m * (q - 1)); 
        int closest = n1; //closest number to maximum
        int subtract = closest - s ;
        



    }   
    return 0;
}