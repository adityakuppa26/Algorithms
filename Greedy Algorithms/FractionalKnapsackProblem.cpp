struct Item
{
  int value,weight;
};

bool compare(struct Item a, struct Item b)
{
  float r1= float(a.value)/a.weight;
  float r2= float(b.value)/b.weight;
  return (r1>r2);
}

float Knapsack( int w, struct Item arr[], int n)
{
  sort(arr,arr+n,compare);
  int current_weight=0;
  float res_value=0.0;
  for(int i=0;i<n;i++)
  {
    if((current_weight + arr[i].weight) <= w)
    {
      current_weight += arr[i].weight;
      res_value += arr[i].value;
    }
    else
    {
      int remain= w-current_weight;
      res_value += arr[i].value * (float(remain)/arr[i].weight);
      break;
    }
  }
  return res_value;
}
