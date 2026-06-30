#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> sort_array(vector<int> num){
    sort(num.begin(),num.end());
    return num;
}
int main(){
  vector<int> num = {1,0,0,1,2,0,1,2,0,1};
  vector<int> ans = sort_array(num);
  for(int val:ans){
    cout<<val<<" ";
  }
    return 0;
}






