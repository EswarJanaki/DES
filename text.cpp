#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];

	}
	int odsum=0,esum=0;
	for(int i=0;i<n;i++){
		if(i%2){
			odsum+=arr[i];
		}
		else{
			esum+=arr[i];
		}
	}
	cout<<"ODDINDEX SUM"<<odsum<<"\nEVEN INDEX SUM "<<esum<<" "<<endl;
	return 0;
}