#include<bits/stdc++.h>
using namespace std;
struct cell{
	int ii,jj,dist;
	cell(){}
	cell(int ii,int jj, int dist):ii(ii),jj(jj),dist(dist){}
};
map<pair<int,int>,int> allowed;
map<pair<int,int>,int> visited;

int bfs(int startI,int startJ,int targetI,int targetJ){
	int i,x,y;
	int kx[8]={1,0,-1,0,1,-1,1,-1};
	int ky[8]={0,1,0,-1,1,1,-1,-1};
	cell temp;
	queue<cell> pos;
	pos.push(cell(startI,startJ,0));
	visited[make_pair(startI,startJ)]=21235730;
	while(!pos.empty()){
		temp=pos.front();
		pos.pop();
		if(temp.ii==targetI && temp.jj==targetJ) return temp.dist;
		for(i=0;i<8;i++){
			x=temp.ii+kx[i];
			y=temp.jj+ky[i];
			if(allowed[make_pair(x,y)]==21235730 && visited[make_pair(x,y)]!=21235730){
				visited[make_pair(x,y)]=21235730;
				pos.push(cell(x,y,temp.dist+1));
			}
		}
		
	}
	return -1;
}

int main(){
	int i,j,startI,startJ,targetI,targetJ,n,r,a,b;
	cin>>startI>>startJ>>targetI>>targetJ>>n;
	for(i=0;i<n;i++){
		cin>>r>>a>>b;
		for(j=a;j<=b;j++) allowed[make_pair(r,j)]=21235730;
	}
	cout<<bfs(startI,startJ,targetI,targetJ)<<endl;
    
    return 0;
}
