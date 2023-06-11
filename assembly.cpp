#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <queue>


using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>> towers(n);
    vector<int> expected;

    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        for(int j=0;j<q;j++){
            int num;
            cin>>num;
            towers[i].push_back(num);
            expected.push_back(num);
        }
    }
    sort(expected.begin(),expected.end());
    int sz = expected.size();
    // divide the current towers into increasing order;
    int divide = 0;
    unordered_map<int,int> mp;
    for(int i=0;i<sz-1;i++){
        mp[expected[i]] = expected[i+1];
    }
    mp[expected[sz-1]] = -1;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<towers[i].size()-1;j++){
            if(mp[towers[i][j]]!=towers[i][j+1]){
                divide++;
            }
        }
    }
    cout<<divide<<" "<<n+divide-1;


}