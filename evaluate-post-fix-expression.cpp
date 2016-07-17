//Program:  Write a C program to evaluate a postfix expression. 
//Author:Takdir Bartaula
//Date:2016/07/17
//Refrence:Data structure using C and C++ page (page #100)

#include<stdio.h>
#include<conio.h>
#define MAX 20

typedef struct{
	int exp[MAX];
	int top;
}stack;
void initial(stack*);
int empty(stack*);
int full(stack*);
void push(stack*,int);
int pop(stack*);
float operation(char,int,int);
int checkdigit(char);
 int main()
{
	stack s;
	char p;
	int op1,op2,value;
	initial(&s);
	printf("Enter an expression");
	while(p=getchar()!='\n')
	{
		if(checkdigit(p))
		{
			push(&s,p-48);
		}
		else
		{
			op2=pop(&s);
			op1=pop(&s);
			value=operation(p,op1,op2);
			push(&s,value);
		}
	}
	value=pop(&s);
	printf("Answer is %d",value);
}
void initial(stack*s)
{
	s->top=-1;
}
int empty(stack*s)
{
	if(s->top==-1)
	{
		printf("Stack is empty");
		return(1);
	}
	else
	return(0);
}
int full(stack*s)
{
	if(s->top==MAX-1)
	{
		printf("Your stack is full");
		return(1);
	}
	else
	return(0);
}
void push(stack*s,int p)
{
	s->exp[++(s->top)]=p;
}
int pop(stack*s)
{
	return s->exp[s->top--];
}
int checkdigit(char p)
{
	return(p>='0'&&p<='9');
}
float operation(char p,int op1,int op2)
{
	if(p=='+')
	{
		return(op1+op2);
	}
	if(p=='-')
	{
		return(op1-op2);
	}
	if(p=='*')
	{
		return(op1*op2);
	}
	if(p=='/')
	{
		return(op1/op2);
	}
	if(p=='%')
	{
		return(op1%op2);
	}
}
