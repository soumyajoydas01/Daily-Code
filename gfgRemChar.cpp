#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    string s1,s2;
    cin>>s1>>s2;
    for (int i = 0; i < s1.size(); i++){
        for(int j =0;j<s2.size();j++){
            if(s1[i]==s2[j]){
                s1[i]='\0';
            }else{
                continue;
            }
        }
    }

    cout << s1<< endl;
}