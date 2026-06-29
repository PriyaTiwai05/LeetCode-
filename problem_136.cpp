#include <iostream>
#include <vector>
using namespace std;
int singleElement(vector<int> num){
    int n = num.size();
    for(int i=0;i<n-1;i++){
        for(int j = 0;j<n-1-i;j++){
            if(num[j]>num[j+1]){
                swap(num[j],num[j+1]);
            }
            
        }
    }
    
    int st = 0;
    int end = n - 1;
    while(st<end){
        int mid = st + (end - st)/2;
        if(mid != num[mid-1] && mid != num[mid+1] ){
            return mid;
        }
        if(num[mid] == num[mid +1]){
            st = mid +1;
        }
        else{
            end = mid -1;
        }
        
    }
  
}
int main(){
  vector<int> num = {4,1,2,1,2} ;
  cout<<singleElement(num)<<" ";
    return 0;
}