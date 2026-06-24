#include <iostream>
#include <vector>
using namespace std;
int singleElement(vector<int> num){
   int n = num.size();
    int st = 0,end = n-1;
    if(n==1){
        return num[0];
    }
    while (st<=end)
    {
        
       int mid = st +(end -st)/2;
       if(mid == 0 && num[0]!= num[1]){
        return num[mid];
       }
       if(mid == n -1 && num[n-1] != num[n-2]){
        return num[mid];
       }
       if(num[mid -1] != num[mid] && num[mid] != num[mid +1]){
        return mid;
       }
       if(mid % 2 == 0){//even
       if(num[mid - 1]=num[mid]){
        end = mid -1;
       }
       else{
        st = mid +1;//right
       }
    }
    else{
        if(num[mid - 1]==num[mid]){
            st = mid +1;//rght
        }
        else{
            mid - 1;//left
        }
    }
      
    }
}
int main(){
   vector<int> num = {1,1,2,3,3,4,4,8,8};
   cout<<singleElement(num)<<" ";
    return 0;
}