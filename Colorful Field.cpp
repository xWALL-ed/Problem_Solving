//http://codeforces.com/contest/79/problem/B
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k,t,i,a,b,count=0,flag=1;
    vector<pair<int,int>> wasteArr;
    cin>>n>>m>>k>>t;
    for(i=0;i<k;i++){
    	cin>>a>>b;
    	wasteArr.push_back(make_pair(a,b));
    }
    for(i=0;i<t;i++){
    	cin>>a>>b;
    	for(const auto& temp : wasteArr){
    		if(temp.first<a) count++;
    		else if(temp.first==a && temp.second<b) count++;
    		else if(temp.first==a && temp.second==b) {flag=0;cout<<"Waste\n";}
    	}
    	if(flag==1){
    		int juta=(m*(a-1))+b;
    		if((juta-count)%3==0) cout<<"Grapes\n";
    		if((juta-count)%3==1) cout<<"Carrots\n";
    		if((juta-count)%3==2) cout<<"Kiwis\n";
    	}
    	count=0;flag=1;
    }
    
    return 0;
}
