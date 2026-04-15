#include <iostream>
using namespace std;
int main()
{
  int number,orginal , remainder,n=0;
  int sum=0;
cout<<"enter a number";
cin>>number;
original =number; // for the comparing it in the last
  
int i=number; 
while(i!=0)
{
i/10;
++n;
}
i =number;
while(i !=0)
{
remainder =temp%10;
sum+=power(remainder,n);
temp/10;
}
  
if(sum==original)
  cout<< "it is an Armstrong Number";
else
  cout<< "it is not an Armstrong Number";

return 0;
}
