#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    string a;
    string b;
    cin>>a>>b;

    cout<<a.size()<<" "<<b.size()<<"\n";
    cout<<a+b<<"\n";
    char a0 = a[0];
    char b0 = b[0];
    a[0]=b0;
    b[0]=a0;
    cout<<a<<" "<<b<<"\n";

}