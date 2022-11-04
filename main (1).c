/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#define Stack_size 5
int st[5], top = -1, item;

void push()
{
	if(top==Stack_size - 1)
		printf("Stack Overflow \n");
	else
	{
		top++;
		st[top] = item;
	}
}

int pop()
{
	int delitem;
		if(top==-1)
			printf("Stack Underflow \n");
		else
		{
			delitem = st[top];
			top--;
			printf("The element deleted is %d \n",delitem);
			return delitem;
		}
}

void display()
{
	int i;
	if(top == -1)
		printf("Stack is empty\n");
    for(i=0; i <=top;i++)
        printf("%d \n", st[i]);
}

int main()
{   int n,r;
    while(1)
    {
        printf("Enter the option you want to choose \n 1. To insert a element \n 2. To remove an element \n 3. To display the elements \n 4. Exit\n ");
        scanf("%d",&n);
        switch(n)
        {
            case 1:printf("Enter the element you want to add\n");
                   scanf("%d",&r);
                   item = r;
                    push();
                    break;
            case 2:pop();
                    break;
            case 3: display();
                    break;
            default:exit(0);
                    break;
        }
    }
}
