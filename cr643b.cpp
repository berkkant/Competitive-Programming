#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>


using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--)
    {
        /* code */
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        cin>>arr[i];

        sort(arr.begin(),arr.end());
        int ans = 0;
        int curCount = 0;
        int needed = -1;
        for(int i=0;i<n;i++){
            needed = max(needed,arr[i]);
            curCount++;

            if(curCount == needed){
                ans++;
                needed = -1;
                curCount = 0;
            }

        }
        cout<<ans<<endl;
    }
    
}