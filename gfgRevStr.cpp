#include <bits/stdc++.h>
using namespace std;

string reverseWord(string s){
    string rev;
    for(int i = s.size()-1;i>=0;i--){
        rev.push_back(s[i]);
    }
    return rev;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<reverseWord(s)<<endl;
    }

}