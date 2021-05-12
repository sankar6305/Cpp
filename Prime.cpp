#include<iostream>
#include<math.h>
using namespace std;
bool Prime1(int n){
	int count=0;
	for(int i=2;i<n-1;i++){
		if(n%i==0){
			count++;
			if(count==1){
				return false;
			}
		}
	}
	return true;
}
bool Prime2(int n){
	int count=0;
	for(int i=2;i<=(n/2)+1;i++){
		if(n%i==0){
			count++;
		    if(count==1){
			    return false;
			}
		}
	}
	return true;
}
bool Prime3(int n){
	int c=int(sqrt(n));
	if(n%c==0){
		return false;
	}
	else{
		return true;
	}
}
int main(){
	int n=15;
	cout<<"Method 1\n";
	(Prime1(n))?(cout<<"Prime"):(cout<<"Not A Prime");
	cout<<"\nMethod 2\n";
	(Prime2(n))?(cout<<"Prime"):(cout<<"Not A Prime");
	cout<<"\nMethod 3\n";
	(Prime3(n))?(cout<<"Prime"):(cout<<"Not A Prime");
}
