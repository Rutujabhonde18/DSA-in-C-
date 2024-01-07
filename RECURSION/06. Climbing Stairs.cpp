#include <bits/stdc++.h> 
int countDistinctWays(int nStairs) 
{
    //base class
    if(nStairs < 0)
        return 0;

    if(nStairs == 0)
        return 1;

    //Reconcilation Statement
    int ans = countDistinctWays(nStairs - 1) + countDistinctWays(nStairs - 2);

    return ans;
}
