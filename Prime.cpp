#include<iostream>
using namespace std;
int main()
{
int a,c=0;
cout<<"Enter a number";
cin>>a;
for(int i=1;i<=a;i++)
{
    if (a%i==0)
    c++;
  
}
if (c==2)
cout<<"prime number";
else
cout<<"not prime number";
return 0;
}