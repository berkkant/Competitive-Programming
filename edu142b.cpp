#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>


using namespace std;



int main(){
    int t;
    cin>>t;

    while(t--){
        int nums[5];
        for(int i=0;i<4;i++){
            cin>>nums[i+1];
        }
        int cnt = nums[1];
        if(cnt == 0){
        cout<<1<<endl;
        continue;
        } 
        int alice = nums[2];
        int bob = nums[3];
        cout<<cnt+2*min(alice,bob)+min(cnt+1,abs(alice-bob)+nums[4])<<endl;

    }
}