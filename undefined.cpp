#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    long long int D,d,p,q;
	    cin>>D>>d>>p>>q;
	    long long int n=D/d;
	    long long int res;
	    res=(d*n*(2*p+(n-1)*q))/2+(D%d)*(p+n*q);
	    cout<<res<<"\n";
	}
	return 0;
}
