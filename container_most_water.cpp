#include <iostream>
#include <vector>
using namespace std;
int WaterLevel(vector<int> &Water){
int maxWater = 0;
for(int i=0;i<Water.size();i++){
    for (int j = i+1;j<Water.size();j++){
        int widht= j-i;
        int height = min(Water[i],Water[j]);
        int area = widht*height;
        maxWater = max(maxWater,area);

    }


}
return maxWater;
}
int main(){
    vector<int> Water = {8,3,1,4,5,9,2};
    cout<<"max water is "<<WaterLevel(Water)<<" ";
    return 0;
}