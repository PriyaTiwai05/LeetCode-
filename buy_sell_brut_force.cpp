#include <iostream>
#include <vector>
using namespace std;
int  buySell(vector<int> num){
    int Max_profit = 0;
    int best_buy=num[0];
    int n = num.size();

    for(int i = 0;i<n;i++){
         
        for(int j = i+1;j<n;j++){
        if(num[i]<num[j]){
            int profit = num[j]-num[i];
            Max_profit=max(Max_profit,profit);
        }
        
    }
    
}
return Max_profit;
}
int main(){
    vector<int> price = {8,3,1,4,5,9,2};
    cout<<"max profit is "<<buySell(price)<<" ";
    return 0;
}