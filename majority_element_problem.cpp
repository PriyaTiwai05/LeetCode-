#include <iostream>
#include <vector>
using namespace std;
//1,1,2,2,2,3,3,1,1,1
int majorityElement(vector<int> num){
    int n = num.size();
    int freq = 0, ans = num[0];
    for(int i = 0;i<n;i++){
        if(freq==0){
            ans = num[i];
        }
        if(ans == num[i]){
            freq ++;
        }
        else{
            freq --;
        }
    }
    int count = 0;
    for(int val:num){
        if(val==ans){
            count++;
        }
    }
if(count>n/2){
    return ans;
    }
return -1;

}
int main()

 {
 vector<int> num = {1,1,2,2,2,3,3,1,1,1};

cout <<" majority elemnet is "<<majorityElement(num);   
      
    return 0;
}