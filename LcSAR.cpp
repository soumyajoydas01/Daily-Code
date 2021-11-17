#include <bits/stdc++.h>
using namespace std;

    bool checkRecord(string s){
        int absent = 0;
        int late = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'A'){
            absent++;
            if(absent >= 2 ) return false;
            }
            if(s[i] == 'L'&&s[i+1]=='L'&&s[i+2]=='L'){
            late=late+3;
            if(late >=3 ) return false;
            }else{
            late = 0;
            }
            
        }
        return true;
    }

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;

        if(checkRecord(s)==0){
            cout<<"false";
        }else{
            cout<<"true";
        }
        
    }



}