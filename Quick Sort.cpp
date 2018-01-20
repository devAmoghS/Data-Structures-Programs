#include<iostream>
#include<conio.h>
using namespace std;
int a[10],l,r,i,j,n;
void quick(int *,int,int);
int main()
{
cout<<"Enter The Number Of Elements For Which You Want To Do Sorting  ";
cin>>n;
cout<<"Enter The Elements\n";
for(i=0;i<n;i++)
cin >> a[i];
l=0;
r=n-1;
quick(a,l,r);
cout <<"\n\nSorted Elements\n\n";
for(i=0;i<n;i++)
cout << a[i] << " ";
getch();
return 0;
}
void quick(int a[],int l,int r)
{
   int p,temp;
   if(l<r)
   {
   p=a[l];
   i=l;
   j=r;
    while(i<j)
   {
      while(a[i] <= p && i<j )
	 i++;
      while(a[j]>p && i<=j )
	   j--;
      if(i<=j)
      {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;}
      }
  temp=a[j];
  a[j]=a[l];
  a[l]=temp;
  cout <<"\n";
  for(i=0;i<n;i++)
  cout <<a[i]<<" ";
  quick(a,l,j-1);
  quick(a,j+1,r);
 }
 }
