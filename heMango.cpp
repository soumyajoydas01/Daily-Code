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
    long long w;
    cin>>w;

    if((w%2==0)&&(w!=2)){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    }



}