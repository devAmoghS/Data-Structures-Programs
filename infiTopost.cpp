#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
const int size=50;
char infix[size],postfix[size],stack[size];
int top=-1;
void push(char ch)
{    if(top!=size-1)
    {
        ++top;
        stack[top]=ch;
    }
}
 int precedence(char ch)
 {
     switch(ch)
     {
         case '^' :return 5;
         case '/' :return 4;
         case '*' :return 4;
         case '+' :return 3;
         case '-' :return 3;
         default: return 0;
     }
 }


 char pop()
 {

     char ch;
     if(top!=-1)
     {
         ch=stack[top];
         --top;
         return ch;
     }
     else return '#';
 }

 char top_ele();
 int main()
 {

     int j=0,pre,pret;
     char ele,popped;
     cout<<"Enter infix expression:";
     cin>>infix;
     //gets(infix);
     for(int i=0;infix[i]!='\0';i++)
     {
         if(infix[i]==')')
         {
             while((popped=pop())!='(')
             {
                 postfix[j++]=popped;

             }
         }
         switch(infix[i])
         {
         case '(':
            push(infix[i]);
            case ')': break;
            case '+':
            case '-':
            case '^':
            case '*':
            case '/':
                pre=precedence(infix[i]);
                ele=top_ele();
                pret=precedence(ele);
                if(pre>pret)
                {
                    push(infix[i]);
                }
                else
                {
                    while(pret>=pre)
                    {
                        popped=pop();
                        postfix[j++]=popped;
                        ele=top_ele();
                        pret=precedence(ele);
                    }
                    push(infix[i]);
                }
                break;
                default:postfix[j++]=infix[i];
                break;

         }
     }
     while((popped=pop())!='#')
     {
        if(popped=='(')
        {
            --top;
        }
        else postfix[j++]=popped;
     }
     postfix[j]!='\0';
     cout<<"The postfix expression :"<<postfix<<endl;
     getch();
     return 0;
 }


char top_ele()
{

    char ch;
    if(top!=-1)
    {
        ch=stack[top];

    }
    else
        ch='#';
    return ch;
}
