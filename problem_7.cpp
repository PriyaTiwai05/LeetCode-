#include <iostream>
using namespace std;
//reverse of number
//Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside
// the signed 32-bit integer range [-231, 231 - 1], then return 0
int main(){
 int num = 123;
 int revNum = 0;
 while(num>0){
    int ld = num%10;
     if(revNum > INT32_MAX/10 || revNum < INT32_MIN/10) {
                return 0;
             }
    revNum = (revNum*10)+ld;
    num /=10;
   
}   
 cout<<revNum<<" ";
    return 0;
}