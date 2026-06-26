#include <iostream>
#include <vector>
using namespace std;
bool isValid(vector<int> arr,int n,int m,int maxAllow){
    int person = 1,work = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]>maxAllow){
            return false;
        }
        if(work + arr[i]<= maxAllow){
            work+= arr[i];
        }
        else{
            person++;
            work = arr[i];
        }
    }
    return person>m? false: true;

}
int paintersPartion(vector<int> arr,int n,int m){
   if(m>n){
    return -1;
   }
   int sum = 0;
   for(int i = 0; i<n ; i++){
    sum += arr[i];
   }
int st = 0,end = sum,ans = -1;
while(st<= end){
    int mid = st + (end - st)/2;
    if(isValid (arr , n , m ,mid)){
        ans = mid;
        end = mid -1;
    }
    else{
        st = mid +1;
    }
}
return ans;
}
int main(){
 vector<int> arr = {40,30,10,20}  ;
 int n = 4,m=2;
 cout<<paintersPartion(arr ,n , m)<<" ";
    return 0;
}