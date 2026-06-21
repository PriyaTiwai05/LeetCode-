#include <iostream>
#include <vector>
using namespace std;
//time complaxity = o(n^2)
//majority elemen > n/2
int majorityElement(vector<int> num){
    int n = num.size();
    for(int val : num){
        int freq = 0;
        for(int el : num){
            if(el == val){
                freq++;

            }
            
        }
        if(freq > n/2){
            
          return {val}; 
        }
        
    }

}
int main(){
vector<int> num = {1,1,2,1,2,1};

cout <<" majority elemnet is "<<majorityElement(num);
   
    return 0;
}