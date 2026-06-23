#include <iostream>
#include <vector>
using namespace std;
int peakValue(vector<int> num){
   int n = num.size();
    int st = 1,end = n-1;
    while (st<=end)
    {
       int mid = st +(end -st)/2;
       if(num[mid -1]<num[mid] && num[mid]>num[mid +1]){
        return mid;
       }
       if(num[mid -1]<num[mid]){
        st = mid +1;
       }
       else{
        end = mid -1;
       }
    }
    

}
int main(){
   vector<int> num = {0,3,8,9,5,2};
   cout<<peakValue(num)<<" ";
    return 0;
}