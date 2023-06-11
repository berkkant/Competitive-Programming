#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <queue>
#include <cmath>


using namespace std;

int main(){
    int n;
    cin>>n;
    long long sum = 0;
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            sum+=x;
            if(i+j==n-1)
            mini = min(x,mini);

        }
    }
    cout<<sum-mini<<endl;
}