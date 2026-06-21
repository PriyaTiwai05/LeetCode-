#include <iostream>
#include <vector>
using namespace std;
//moore's law
//Ye algorithm majority element ko candidate ki tarah treat karta hai.

//Same element mile → vote +1
//Different element mile → vote -1
//Vote 0 ho jaye → naya candidate choose karo
int majorityElement(vector<int> num){
//time complexity = o(n)
    int n = num.size();
    
    int freq = 0, ans = num[0];
    for(int i = 0;i < n;i++){
        if(freq==0){
            ans = num[i];
        }
        
        if(ans==num[i]){
            freq++;
            
        }
        else{
            freq --;
        }
        
    }
  return ans; 
}
int main(){
vector<int> num = {1,1,2,4,1,1,1};

cout <<" majority elemnet is "<<majorityElement(num);
   
     
    return 0;
}