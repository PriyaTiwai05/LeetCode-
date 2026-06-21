#include <iostream>
#include <vector>
using namespace std;
//SUM OF TWO NUM == TARGET 
vector<int> twoSum(vector<int>& num,int target){
vector<int> ans;
int n = num.size();
for(int i = 0;i<n;i++){
    for(int j = i+1;j<n;j++){
        if(num[i]+num[j]==target){
            ans.push_back(i);
            ans.push_back(j);

        }
    }
}
return ans;
}

int main(){
    vector<int> num ={2,7,11,15};
    int target = 18;
    vector<int> ans= twoSum(num,target);
    for(int x : ans){
        cout<<x<<" ";
    }
    return 0;
}