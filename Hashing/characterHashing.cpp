#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int query;

    int hash[256] = {0};

    //int hash[26] = {0} for only the small alphabets or big alphabets

    for(int i =0; i<s.size(); i++){
        hash[s[i]]++;
        //hash[s[i]-'a'] for small alphabets and hash[s[i]-'A'] for big alphabets only
    }

    cin>>query;
    while(query--){
        char c;
        cin>>c;
        //fetch
        cout<<hash[c]<<endl;
    }
    return 0;
}