#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

        for(int i=1;i<=100;i++){
        if((i%3 == 0) && (i%5==0))
            cout<<"FizzBuzz\n";
        else if(i%3 == 0)
            cout<<"Fizz\n";
        else if(i%5 == 0)
            cout<<"Buzz\n";
        else
            cout<<i<<"\n";
     }


}