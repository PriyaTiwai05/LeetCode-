#include <iostream>

using namespace std;

int main(){
    //printing all sub array
    //subarray=continuse element at any index
    //no. of subarray=n*(n+1)/2
    int n = 5;
    int arr[5]={1,2,3,4,5};
    for(int st=0;st<n;st++){//start index 0 to 4
        for(int end=st;end<n;end++){//end the index if start index is 0 then end is 4, in start in 1 then end is also 4
            for(int i = st;i<=end;i++){//print the no. 
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}