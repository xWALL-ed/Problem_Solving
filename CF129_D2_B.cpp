//http://codeforces.com/contest/129/problem/B
#include<bits/stdc++.h>
using namespace std;
int arrhash[200];
int main(){
	int n,m,i,a,b,count=0,flag=1;
	cin>>n>>m;
	map<int,vector<int>> mapp;
	vector<int> store;
	vector<int> list;
	for(i=0;i<m;i++){
		cin>>a>>b;
		mapp[a].push_back(b);
		mapp[b].push_back(a);
		if(arrhash[a]==0) list.push_back(a);
		if(arrhash[b]==0) list.push_back(b);
		arrhash[a]++;
		arrhash[b]++;
	}
	while(flag){
		flag=0;
		for(unsigned x=0;x<list.size();x++){
			if(arrhash[list[x]]==1){
				store.push_back(list[x]);
				arrhash[list[x]]--;
				list.erase(list.begin()+x);
				x--;
				flag=1;
			}
		}
		for(const auto& x : store){
			for(const auto& j : mapp[x]){
				arrhash[j]--;
			}
		}
		store.clear();
		if(flag==1) count++;
	}
	cout<<count<<endl;
    return 0;
}
