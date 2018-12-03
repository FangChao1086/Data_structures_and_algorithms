//一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。
//求该青蛙跳上一个n级的台阶总共有多少种跳法。


class Solution {
public:
    int jumpFloorII(int number) {
		//f(n-1)=f(1)+f(2)+...+f(n-2)
		//f(n)=f(1)+f(2)+...+f(n-2)+f(n-1)=f(n-1)+f(n-1)
		int total=1;
		for(int i=1;i<number;i++){
			total*=2;
		}
		return total;
    }
};