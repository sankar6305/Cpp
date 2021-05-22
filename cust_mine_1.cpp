#include<bits/stdc++.h>
using namespace std;

int main(){
	int count=0;
	vector<int>vect;
	int cust_id[10]={1,2,3,4,5,6,7,8,9,10};
	int cust_visited[35]={1,2,3,5,1,5,6,5,5,6,5,6,5,8,9,6,3,2,1,4,7,8,5,5,6,1,2,3,6,4,5,6,9,4,8};
	for(auto i:cust_id){
		count=0;
		for(auto j:cust_visited){
			if(i==j){
				count++;
			}
		}
		vect.push_back(count);
	}
	cout<<((max_element(vect.begin(),vect.end())-vect.begin())+1)<<"  Visited more times \n";
}
