#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    string str;
    cin>>str;
    string str_rev;
    for(int i=str.size()-1; i>=0;i--){
        str_rev.push_back(str[i]);
    }

    if(str==str_rev){
        cout<<str.size()-1;
    }else{
        cout<<str.size();
    }


}