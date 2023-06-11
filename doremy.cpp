#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <queue>


using namespace std;
long long solve(){
    int n;
    cin>>n;
    map<int,int> mp;
    //vector<int> arr(n);
    for(int i=0;i<n;i++){
        //cin>>arr[i];
        int x;
        cin>>x;
        mp[x]++;
    }
    if(mp.size() == 1){
       for(auto it:mp){
            return it.second/2;
        } 
    }
    long long left = 0;
    long long ans = 0;
    for(auto it:mp){
        left+=it.second;
        ans = max(ans,left*(n-left));

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