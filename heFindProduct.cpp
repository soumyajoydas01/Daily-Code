#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int T;
    cin>>T;
    long long prod=1;
    while(T--){
        long long n;
        cin>>n;
        prod=(prod*n)%(1000000007);
    }

    cout<<prod;


}