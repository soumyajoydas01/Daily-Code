#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    long long n;
    cin>>n;

    if(n%2){
        cout<<"0";
    }else if(n%4==0){
        cout<<n/4-1;
    }else{
        cout<<n/4;
    }

}