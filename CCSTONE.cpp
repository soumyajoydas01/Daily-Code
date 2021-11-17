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
        string J, S;
        cin>>J>>S;
        int count=0;

        int n= S.size(), m = J.size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(S[i]==J[j]){
                    count++;
                    break;
                }
            }
        }

        cout<<count<<"\n";
    }



}