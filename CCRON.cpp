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
        int n;
        cin>>n;
        int rev=0;
        while(n!=0){
            int k= n%10;
            rev=(rev*10)+k;
            n/=10;
        }
        cout<<rev<<"\n";
    }


}