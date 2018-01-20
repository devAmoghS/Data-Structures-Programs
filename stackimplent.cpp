#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#define SIZE 10
using namespace std;
static int top=-1;
class stack
{
private:
int ar[SIZE];
public:
void push(int item);
void pop();
void peep();
};
void stack::push(int item)
{
if(top==SIZE-1)
cout<<"\nThe Stack is Full!!!";
else
{
ar[++top]=item;
cout<<"\nElement succesfully pushed in the Stack!!!";
}
}
void stack::pop()
{
if(top<0)
cout<<"\nStack Under flow!!!";
else
{
top--;
cout<<"\nElement sucessfully popped from the Stack!!!";
 }
 }
 void stack::peep()
 {
 if(top<0)
 cout<<"\nThe Stack is Empty it cannot be Peeped!!!";
 else
 for(int i=top;i>=0;i--)
 {
     if(i%2!=0)
     {
 cout<<ar[i]<<" ";
}
 }

}  int main()
  {
  char choice;
  int ch,num;
  stack ob;
  do
  {
  //clrscr();
  cout<<"\n\n\t\t\tS T A C K O P E R A T I O N S";
  cout<<"\n\t\t\t-------------------------------";
  cout<<"\n\n1.PUSH";
  cout<<"\n2.POP";
  cout<<"\n3.PEEP";
  cout<<"\n4.EXIT";
  cout<<"\n\nEnter your choice:";
  cin>>ch;
  switch(ch)
  {
  case 1:
   cout<<"\nEnter the Element you want to Push:";
   cin>>num;
ob.push(num);
     break;
      case 2:
       ob.pop();
       break;
       case 3:
       ob.peep();
       break;
       case 4:
       exit(0);
       default:
       cout<<"\nPlease Enter a Valid Choice(1-4)!!!";
        }
         cout<<"\nDo you want to Continue(Y/N):";
         cin>>choice;
         }
         while(choice=='y' || choice=='Y');
         getch();
         }
