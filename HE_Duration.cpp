#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

int main(){
    fastIO();
    int N; //no. of work
    cin>>N;
    while(N--){
        int HH = 0, MM;
        int SH, SM, EH, EM; //starting hour, starting min, ending hr, ending min
        cin>>SH>>SM>>EH>>EM;
        if(SM > EM){ //this won't work if MM get's greater than 60
            MM = SM-EM;
            if(MM < 30){
                int temp = (30 - MM)*2;
                MM = MM + temp;
            }
            else if(MM > 30){
                int temp = (MM - 30) *2;
                MM = MM - temp;
            }
        }
        else if(SM <= EM){
            MM = (abs)(SM - EM);
        }
        // cout<<MM;
        if(SH > EH){
            HH = SH - EH;
            if(HH > 6){
                int temp = (abs)(HH - 12);
                HH = temp;
            }
        }
        // else if(MM > 59){
        //     HH++;
        // }
        else if(SH <= EH){ //TODO: 
            // HH = (abs)(SH - EH);
            // if(HH <= 6 ){
            //     HH--;
            // }
            if(MM > 30){
                HH = (abs)(SH - EH);
                HH--;
                // cout<<"HH--\n";
            }
            else if(MM < 30 && MM >0){
                HH = (abs)(SH - EH);
                HH++;
                // cout<<"HH++\n";
            }
            else if(MM == 0){
                HH = (abs) (SH-EH);
            }
        }
        cout<<HH << " "<<MM<<endl;
    }

    return 0;
}
