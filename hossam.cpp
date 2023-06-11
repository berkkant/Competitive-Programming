#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <queue>
#include <cmath>


using namespace std;
long long solve(){
    long long ans = 0;
    int n,m;
    cin>>n>>m;
    unordered_map<int,int> mp;
    for(int i=1;i<=n;i++)
    mp[i] = n+1;
    while(m--){
        int x,y;
        cin>>x>>y;
        if(x>y) swap(x,y);
        //x<y now
        mp[x] = min(mp[x],y);

    }
    int counter = 0;
    int bottleneck = n+1;
    for(int i=n;i>=1;i--){
        bottleneck = min(mp[i],bottleneck);
        ans+=(bottleneck-i);

    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}