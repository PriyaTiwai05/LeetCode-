#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//time complacity = o(nlogn)
int majorityElement(vector<int> num){
    int n = num.size();
    sort(num.begin(),num.end());
    //return num[n/2]; instant of all code we can also only this after sorting
    //because majority element is always midle elemnt
    int freq = 1, ans = num[0];
    for(int i = 1;i < n;i++){
        if(num[i]==num[i-1]){
            freq ++;
        }
        else{
            freq = 1;
            ans = num[i];
        }
        if(freq>n/2){
            return ans;
        }
    }
   return ans; 
}
int main(){
vector<int> num = {1,1,2,1,3,2,1,};

cout <<" majority elemnet is "<<majorityElement(num);
   
     
    return 0;
}