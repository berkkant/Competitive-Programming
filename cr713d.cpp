#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main(){

    long long t;
    cin>>t;

    while (t--)
    {
        long long n;
        cin>>n;
        vector<long long> arr(n+2);
        unordered_map<long long,long long> freq;
        long long sum = 0;
        for(int i=0;i<n+2;i++){
            cin>>arr[i];
            freq[arr[i]]++;
            sum+=arr[i];

        }
        bool flag = false;
        for(int i=0;i<n+2;i++){
            long long remSum = sum-arr[i];
            if(remSum%2==1) continue;
            remSum/=2;
            freq[arr[i]]--;
            if(freq[remSum]>0){
                for(auto it:freq){
                    if(it.first == remSum){
                        for(int l=0;l<it.second-1;l++){
                            cout<<it.first<<" ";
                        }
                    }
                    else{
                        for(int l=0;l<it.second;l++){
                            cout<<it.first<<" ";
                        }
                    }
                }
                flag = true;
                break;
            }
            freq[arr[i]]++;

            
        }

        if(!flag)
        cout<<-1;

        cout<<endl;
        
        
       


        
    }
    
}