/* Given a gold mine of n*m dimensions. Each field in this mine contains a positive integer which is the amount of gold in tons. Initially the miner is at first column but can be at any row. He can move only (right->,right up /,right down\) that is from a given cell, the miner can move to the cell diagonally up towards the right or right or diagonally down towards the right. Find out maximum amount of gold he can collect. */


int maxGold(int gold[][] , int m, int n)
{
  int goldtable[m][n];
  memset(goldtable,0,sizeof(goldtable));
  for(int col=n-1;col>=0;col--)
  {
    for(int row=0;row<m;row++)
    {
      int right= (col==n-1)?0:gold[row][col+1];
      
      int right_up = (col==n-1 || row==0)?0:gold[row-1][col+1];
      
      int right_down = (col==n-1 || row==m-1)?0:gold[row+1][col+1];
      
      goldtable[row][col]= gold[row][col] + max(right, max(right_up,right_down));
    }
  }
  
  int res=goldtable[0][0];
  for(int i=1;i<m;i++)
  {
    res= max(res,goldtable[i][0]);
  }
  return res;
}
