#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <queue>


using namespace std;

string solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<pair<int,int>> colors;
    auto comp = [](pair<int,int>& p1, pair<int,int>& p2){
        p1.second>p2.second;
    };
    priority_queue<pair<int,int>,vector<pair<int,int>>,decltype(comp)> pq(comp);
    
    for(int i=1;i<=m;i++){
        int x;
        cin>>x;
        colors.push_back({i,x});
    }


}

int main(){

    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}