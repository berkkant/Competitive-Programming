#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <queue>


using namespace std;
bool solve(){
    int m;
    cin>>m;
    vector<vector<char>> arr(2,vector<char>(m));
    for(int i=0;i<2;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    vector<vector<bool>> dp(2,vector<bool>(m,false));
    //fill last column
    if(arr[0][m-1]=='B') dp[0][m-1] = true;
    if(arr[1][m-1]=='B') dp[1][m-1] = true;

    for(int i=m-2;i>=0;i--){
        if(arr[0][i]=='B' && arr[1][i]=='B'){
            dp[0][i] = dp[1][i+1];
            dp[1][i] = dp[0][i+1];

        }
        else if(arr[0][i]=='W' && arr[1][i]=='B'){
            dp[0][i] = false;
            dp[1][i] = dp[1][i+1];
            
        }
        else if(arr[0][i]=='B' && arr[1][i]=='W'){
            dp[1][i] = false;
            dp[0][i] = dp[0][i+1];
        }
    }

    return dp[0][0] || dp[1][0];

}

int main(){
    int t;
    cin>>t;
    while(t--){
        if(solve()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}