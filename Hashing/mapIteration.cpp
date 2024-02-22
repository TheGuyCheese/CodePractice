#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }

    map<int, int>testmap;
    for(int i=0;i<n;i++){
        testmap[arr[i]]++;
    }

    for(auto c:testmap){
        cout<<c.first<<"---"<<c.second<<endl;
    }
    return 0;
}