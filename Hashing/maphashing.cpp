#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    map<int, int>hpp;
    for(int i=0;i<n;i++){
        hpp[arr[i]]++;
    }

    int query;
    cin>>query;
    while(query--){
        int number;
        cin>>number;
        cout<<hpp[number]<<endl;
    }

    return 0;
}