#include <iostream>
#include <vector>
using namespace std;
vector<int> product(vector<int> num){
    int n = num.size();
    vector<int> ans(n , 1);
    for(int i = 0; i<n;i++){
        for(int j = 0;j<n;j++){
            if(i!=j){
                ans[i]*=num[j];
            }
        }

    }
    return ans;
    
}
int main(){
vector<int> num ={1,2,3,4,5};
vector<int> ans = product(num);
for(int x : ans){
    cout<<x<<" ";
}  
    return 0;
}