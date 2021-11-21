#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    while(n--){
        long l,b;
        cin>>l>>b;
        long a = l*b;
        long p = 2*l + 2*b;

        if(a>p){
            cout<<"Area"<<"\n";
            cout<<a<<"\n";
        }else if(p>a){
            cout<<"Peri"<<"\n";
            cout<<p<<"\n";
        }else{
            cout<<"Eq"<<"\n";
            cout<<a<<"\n";
        }
    }


}