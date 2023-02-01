#include <iostream>

using namespace std;

int main()
{
    int x[10] , y[10] ,i,num,t;
    t=num;
    cout<<"Enter the value of T"<<endl;
    cin>>t;
    
   for(i=0;i<t;i++)
   {
    cout<<"Price"<<endl;
    cout<<"Price of X:"<<endl;
    cin>>x[i];
    cout<<"Price of Y:"<<endl;
    cin>>y[i];
    
   if (x[i]<y[i])
   {
       cout<<"First Chocolate is cheaper"<<endl;
   }
  else if(x[i]>y[i])
  {
      cout<<"Second Chocolate is cheaper"<<endl;
  }
  else
  {
      cout<<"Buy Any"<<endl;
  }
  cout<<"..........END.........."<<endl;
   }
    return 0;
}