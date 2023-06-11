#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>


using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            arr.push_back(x+1+i);
        }
        sort(arr.begin(),arr.end());
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(c>=arr[i]){
                c-=arr[i];
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}