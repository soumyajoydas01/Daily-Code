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
        int a,b;
        cin>>a>>b;

        if(a>b){
            cout<<">"<<"\n";
        }else if(a<b){
            cout<<"<"<<"\n";
        }else{
            cout<<"="<<"\n";
        }
    }



}