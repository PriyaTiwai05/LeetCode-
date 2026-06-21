#include <iostream>
#include <vector>
using namespace std;
int WaterLevel(vector<int> &Water){
int maxWater = 0;
int lp = 0,rp = Water.size()- 1;
while(lp<rp){
  int   widht = rp - lp;
  int height = min(Water[lp],Water[rp]);
  int currentWater = widht*height;
  maxWater = max(maxWater,currentWater);
  Water[lp]<Water[rp]?lp++:rp--;

}


return maxWater;
}
int main(){
    vector<int> Water = {8,3,1,4,5,9,2};
    cout<<"max water is "<<WaterLevel(Water)<<" ";
    return 0;
}