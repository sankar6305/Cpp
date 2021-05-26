#include<iostream>
using namespace std;
int main(){
	int c,n;
	cin>>c>>n;
	int arr[c];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int index,value;
	cin>>index>>value;
	if(index>c){
		exit(0);
	}
//	(()?(exit(0)):(cout<<"You have access.. Go ahed !! "));
	for(int i=n;i>=index;i--){
		arr[i+1]=arr[i];
	}
	arr[index]=value;
	for(auto i: arr){
		cout<<" "<<i;
	}
}
