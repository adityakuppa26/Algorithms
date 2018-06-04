void towers_of_hanoi(int n,char from_rod,char to_rod , char aux_rod)
{
  if(n==1)
  {
    cout<<"move disk 1 from"<<from_rod<<"to"<<to_rod;
    return;
  }
  towers_of_hanoi(n-1,from_rod,aux_rod,to_rod);
  cout<<"move"<<n<<" disk from "<<from_rod<<"to"<<to_rod;
  towers_of_hanoi(n-1,aux_rod,to_rod,from_rod);
}
