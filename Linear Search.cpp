#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int a[100],i,n,item,s=0;
cout<<"Enter No. of Elements=";
cin>>n;
cout<<"\nEnter Elements=\n";
for(i=1;i<=n;i++)
{
    cin>>a[i];
}
cout<<"\nEnter Element you want to Search=";
cin>>item;
for(i=1;i<=n;i++)
{
    if(a[i]==item)
        {
        cout<<"\nData is Found at Location : "<<i;
        s=1;
        break;
        }
}
if(s==0)
{
    cout<<"Data is Not Found";
}
return 0;
}