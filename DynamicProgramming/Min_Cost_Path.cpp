/* Given a cost matrix cost[][] and a position (m, n) in cost[][], write a function that returns cost of minimum cost path to reach (m, n) from (0, 0). Each cell of the matrix represents a cost to traverse through that cell. Total cost of a path to reach (m, n) is sum of all the costs on that path (including both source and destination). You can only traverse down, right and diagonally lower cells from a given cell, i.e., from a given cell (i, j), cells (i+1, j), (i, j+1) and (i+1, j+1) can be traversed. You may assume that all costs are positive integers. */
  
int min_cost(int cost[R][C], int m, int n)
{
  int temp[R][C];
  temp[0][0]=cost[0][0];
  for(int i=1;i<=m;i++)
  {
    temp[i][0]=temp[i-1][0] + cost[i][0];
  }
  for(int j=1;j<=n;j++)
  {
    temp[0][j]=temp[0][j-1] + cost[0][j];
  }
  for(int i=1;i<=m;i++)
  {
    for(int j=1;j<=n;j++)
    {
      temp[i][j]= cost[i][j] + min(temp[i-1][j-1],temp[i-1][j],temp[i][j-1]);
    }
  }
  return temp[m][n];
}
