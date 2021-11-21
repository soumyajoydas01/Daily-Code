#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    if(n%2!=0){
        cout<<"Weird";
    }else if(n<5&&n%2==0){
        cout<<"Not Weird";
    }else if(n<=20&&n>=6&&n%2==0){
        cout<<"Weird";
    }else{
        cout<<"Not Weird";
    }



}