#include<iostream>
using namespace std;
struct Date
{
    int mm;
    int dd;
    int yy;
};
void displayDate(Date d)
{
    cout<<d.mm<<"/"<<d.dd<<"/"<<d.yy;
}
int main()
{
Date d1;
cout<<"Enter the month:";
cin>>d1.mm;
cout<<"\nEnter the day:";
cin>>d1.dd;
cout<<"\nEnter the year:";
cin>>d1.yy;
displayDate(d1);
return 0;
}