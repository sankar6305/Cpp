#include<bits/stdc++.h>
using namespace std;
void setbits(int n){
	int count=0;
	while(n){
	//	cout<<"Loop"<<" ";
		if(n&1==1){
		//	cout<<n<" ";
			count++;
		}
		n=(n>>1);
	}
	cout<<"number of sets are : "<<count<<endl;
}
void set_or_not(int n){
	int pos;
	cout<<"Enter the set position\n";
	cin>>pos;
	if(n&((pos-1)<<1)){
		cout<<"set \n";
	}
	else{
		cout<<"Not set \n";
	}
}
void unset_bit(int n){
	cout<<"Enter the set position\n";
	int pos;
	cin>>pos;
	int res=(n^((pos-1)<<1));
	cout<<res<<"\n";
}
int main(){
	int n;
	cin>>n;
	setbits(n);
	set_or_not(n);
	unset_bit(n);
}
