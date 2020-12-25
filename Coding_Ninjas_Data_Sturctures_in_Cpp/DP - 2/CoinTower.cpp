Coin Tower
Whis and Beerus are playing a new game today . They form a tower of N coins and make a move in alternate turns . Beerus being the God plays first . In one move player can remove 1 or X or Y coins from the tower . The person to make the last move wins the Game . Can you find out who wins the game ?
Input Format :
Contains three value N,X,Y as mentioned in the problem statement
Output Format :
A string containing the name of the winner like “Whis” or “Beerus” (without quotes)
Constraints:
1<=N<=10^6
2<=X<=Y<=50
Sample Input :
 4 2 3
Sample Output :
 Whis
 
 
 /******************************************************* SOLUTION ************************************************************************/
 
 
 int dp[2000000];
string solve(int n,int x,int y) {
    dp[1]=1;
    dp[x]=1; dp[y]=1;
    for(int i=2;i<=n;i++) {
        if(!dp[i]) // if beerus is not winning at i
        {
            dp[i]=dp[i-1]^1; // beerus can always remove 1 coin and be at the dp[i-1]
            if(i-x>=1)//beerus can always remove x coin and be at the dp[i-x]
            {
                dp[i]=max(dp[i],dp[i-x]^1);
            }
            if(i-y>=1)//beerus can always remove x coin and be at the dp[i-y] 
            {
                dp[i]=max(dp[i],dp[i-y]^1); 
            }
        }
    }
    string sol; 
    if(dp[n]) 
        sol="Beerus";
    else
        sol="Whis";
    return sol;
}
