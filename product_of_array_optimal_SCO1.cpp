#include <iostream>
#include <vector>
using namespace std;
vector<int> product(vector<int> num){
    int n = num.size();
    vector<int> ans(n , 1);
    
    
    for(int i = 1;i<n;i++){
        ans[i]=ans[i-1]*num[i-1];
    }
    int suffix = 1;
    for(int i = n-2;i>=0;i--){
        suffix*=num[i+1];
        ans[i]*=suffix;

    }
    
    

    
    return ans;
    
}
int main(){
vector<int> num ={1,2,3,4};
vector<int> ans = product(num);
for(int x : ans){
    cout<<x<<" ";
}  
    return 0;
}