#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int query;

    int hash[26] = {0};

    for(int i =0; i<s.size(); i++){
        hash[s[i]-'a']++;
    }

    cin>>query;
    while(query--){
        char c;
        cin>>c;
        //fetch
        cout<<hash[c-'a']<<endl;
    }
    return 0;
}