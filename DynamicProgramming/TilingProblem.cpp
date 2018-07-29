/* You are given a floor of size 5xN. You have tiles of 2 different sizes: 1x5 and 2x5. Of course, you can rotate the tiles to get 2 more tile sizes: 5x1 and 5x2. You have to do the flooring using these tiles in the following way:
1.Floor space should be completely covered by tiles.
2.You cannot break tiles, ie, you have to use a tile entirely or not at all.
3.Any tile should not extend beyond the floor space.
4.Tiles should be placed parallel to the floor boundaries.
Your task is to find the number of ways in which you can lay the tiles on the floor  */


int dp[1000000]={0};
int count(int n){
    if(n<0){
        return 0;
    }
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;
    if(dp[n]>0){
        return dp[n];
    }

    dp[n] = count(n-1)+count(n-2)+8*count(n-5);

    return dp[n];    
}
