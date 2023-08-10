#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[3],i,j,n;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<3;j++){
            cin>>arr[j];
        }
        int len = sizeof(arr)/sizeof(arr[0]);
        std::sort(arr, arr + len, greater<int>());
        if(arr[0]+arr[1]>=10) cout<<"YES\n";
        else cout<<"NO\n";
        len=0;
    }
    return 0;
}
