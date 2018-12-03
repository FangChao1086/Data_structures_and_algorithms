//输入一个整数，输出该数二进制表示中1的个数。其中负数用补码表示。


class Solution {
public:
     int  NumberOf1(int n) {
         //最优解 从右往左计数
         int count=0;
         while(n!=0){
             count++;
             n&=(n-1);
         }
         return count;
     }
};