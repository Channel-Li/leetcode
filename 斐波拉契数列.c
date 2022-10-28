//1 1 2 3 5 8 13 21 34
#include "stdio.h"
int main(){
    int target =13;  //求解斐波拉契数列的target

    int dp[target];

    dp[0]=dp[1]=1;
    for (int i = 2; i < 13; ++i) {
        dp[i]=dp[i-1]+dp[i-2];
    }
    printf("%d",dp[target-1]);
}