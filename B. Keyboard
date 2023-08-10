//https://codeforces.com/contest/88/problem/B
#include<stdio.h>
#include<math.h>
struct pos{
    int ii;
    int jj;
};
int indexx[125];
struct pos s[30*30+5],arr[125][30*30+5];
int main(){
    int i,j,k,n,m,x,q,sCount=0,outputC=0,flag=0;
    double arrDist[125];
    char c;
    scanf("%d %d %d\n",&n,&m,&x);
    for(i=1;i<=n;i++){
    	for(j=1;j<=m;j++){
    		scanf("%c",&c);
    		if(c=='\n'){j--;continue;}
    		if(c=='S'){s[sCount].ii=i;s[sCount].jj=j;sCount++;}
    		else {arr[c][indexx[c]].ii=i;arr[c][indexx[c]].jj=j;indexx[c]++;}
    	}
    }
    for(i='a';i<='z';i++){
    	arrDist[i]=100.0;
    	for(j=0;j<sCount&&indexx[i]>0;j++){
    		for(k=0;k<indexx[i];k++){
    			int calcX=s[j].ii-arr[i][k].ii;
    			int calcY=s[j].jj-arr[i][k].jj;
    			double temp=sqrt((calcX*calcX)+(calcY*calcY));
    			if(arrDist[i]>temp) arrDist[i]=temp;
    		}
    	}
    }
    scanf("%d\n",&q);
    for(i=0;i<q;i++){
    	scanf("%c",&c);
    	if(c>='a'&&c<='z'&&arr[c][0].ii==0&&arr[c][0].jj==0) flag=1;
    	if(c>='A'&&c<='Z'&&arr[c+32][0].ii==0&&arr[c+32][0].jj==0) flag=1;
    	if(c>='A'&&c<='Z'&&sCount==0) flag=1;
    	if(c>='A'&&c<='Z'&&arrDist[c+32]>x) outputC++;
    }
    if(flag) printf("-1\n");
    else printf("%d\n",outputC);
    return 0;
}
