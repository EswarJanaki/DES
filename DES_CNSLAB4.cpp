#include<bits/stdc++.h>
//included comment for better understanding //

using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    map<int,int> m;
    for(int i=0;i<n;i++)m[arr[i]]++;
    sort(m.begin(),m.end(),[](auto a,auto b){if(a.second<b.second)return true;return false;});
    for(auto i:m)cout<<i.second<<" ";
    return 0;
}