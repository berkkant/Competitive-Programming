#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>


using namespace std;
long long solve(){
    long long n;
    cin>>n;
    int temp = n;
    vector<pair<long long,long long>> v;
    long long cnt = 0;
    while(n%2==0){
        cnt++;
        n=n/2;
    }
    if(cnt!=0){
        v.push_back({2,cnt});
    }

    for(int i=3;i*i<=n;i=i+2){
        int cnt = 0;
        while(n%i==0){
            cnt++;
            n=n/i;
        }
        if(cnt!=0){
            v.push_back({i,cnt});
        }        
    
    }
    if(n>2) v.push_back({n,1});
    sort(v.begin(),v.end(),[](pair<long long,long long>& p1, pair<long long, long long>& p2){
        return p1.second <= p2.second;
    });
    long long prod = 1;
    for(auto x: v){
        prod = prod*x.first;
    }
    long long cur = 0;
    long long ans = 0;
    for(int i=0;i<v.size();i++){
        ans+=(prod*(v[i].second-cur));
        //cout<<ans<<" "<<endl;
        prod/=v[i].first;
        cur=v[i].second;
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