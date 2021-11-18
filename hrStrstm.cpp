#include <bits/stdc++.h>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);
    vector<int> out;
    char ch;
    int temp;
    while(ss >> temp)
    {
    out.push_back(temp);
    ss >> ch;
    }
    return out;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}