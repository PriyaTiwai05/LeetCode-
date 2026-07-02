#include <iostream>
#include <vector>
using namespace std;
vector<int> sorting(vector<int> num){
    int n = num.size();
    int count0 = 0,count1 = 0,count2 = 0;
for(int i = 0;i<n;i++){
    if(num[i] == 0) {
        count0++;
    }
    else if(num[i]==1){
        count1++;
    }
    else{
        count2++;
    }
    

}
int idx = 0;
for(int i =0;i<count0;i++){
    num[idx++]=0;
}
for(int i =0;i<count1;i++){
    num[idx++]=1;
}
for(int i =0;i<count2;i++){
    num[idx++]=2;
}
return num; 
}


int main(){
 vector<int> num = {2,0,2,1,1,0,1,2,0,0};
 vector<int> ans = sorting(num);
 for(int val:ans){
    cout<<val<<" ";
 }   
    return 0;
}