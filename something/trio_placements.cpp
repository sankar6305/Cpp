#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void gang(){
	int n,m;//size of that matrix
	cin>>n>>m;
	int vect[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>vect[i][j];
		}
		//vect.push_back(temp);
	}
	//
	// tried
	//
	/*queue<pair<pair<int,int>,int>>Q;
	int ix,iy;
	for(int i=0;i<n;i++){
		int gh=0;
		for(int j=0;j<m;j++){
			if(vect[i][j]==1){
				ix=i;
				iy=j;
				gh=1;
				break;
			}
		}
		if(gh==1){
			break;
		}
	}
	
	/*
	for(int i=0;i<8;i++){
		int newi=d[i]+ix;
		int newj=d[j]+iy;
		if(newi>=0 && newi<n && newj>=0 && newj<m && vect[newi][newj]!=0){
			count++;
		}
	}*/
	//int count=0;
	int di[8]={-1,-1,0,1,1,1,0,-1};
	int dj[8]={0,1,1,1,0,-1,-1,-1};
	int yh=0,yo=0;
	int count=INT_MIN;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(vect[i][j]==1){
				int count1=0;
				for(int k=0;k<8;k++){
				int newi=di[k]+i;
				int newj=dj[k]+j;
				/*if(i==0 && j==6){
					cout<<newi<<" "<<newj<<" "<<vect[newi][newj]<<"\n";
				}*/
				if(newi>=0 && newi<n && newj>=0 && newj<m && vect[newi][newj]==1){
					
				    count1++;
					}
				}
				if(count<count1){
					count=count1;
					yh=i+1;
					yo=j+1;
				}
			}
		}
	}
	cout<<yh<<" "<<yo<<" "<<count;
	/*Q.push({{ix,iy},count});
	while(!Q.empty()){
		auto it=Q.front();
		int i=it.first.first;
		int j=it.first.second;
		
	}*/
}
int main(){
	gang();
}
