#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int T;
    cin>>T;
    while(T--){
        int X,Y,Z;
        cin>>X>>Y>>Z;
        if(X+Y<=Z){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }



}