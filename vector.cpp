#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t,n;
    cin>>t>>n;
    vector<int> arr(1,0);
    while(t--){
       int l,r;
       cin>>l>>r;
       arr[l]++;
       if(r+1<n){
        arr[r+1]--;}
        
       for(int i=1;i<arr.size();i++){
        arr[i]+=arr[i-1];}

       for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";}
    }
    return 0;
}