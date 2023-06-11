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
       long long n,k;
       cin>>n>>k;
       if(k%2==0){
            if(n>=k && n%2==0){
                cout<<"YES"<<endl;
                for(int i=0;i<k-1;i++)
                cout<<1<<" ";
                cout<<n-k+1<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
       }
       else{
            if(n>=k && n%2==1){
                cout<<"YES"<<endl;
                for(int i=0;i<k-1;i++)
                cout<<1<<" ";
                cout<<n-k+1<<endl;

            }
            else if(n>=2*k && n%2==0){
                cout<<"YES"<<endl;
                for(int i=0;i<k-1;i++)
                cout<<2<<" ";
                cout<<n-2*k+2<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
       }
    }
    
}