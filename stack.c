#include <stdio.h>
#define STACK_SIZE 3
int stack[3];
int k = 0;
int i = 0,a = 0;
// Описание функции push
void push(int value)
{
if (k != STACK_SIZE)
{
stack[k] = value;
k++;
}

else 
{
error(&a);
}

}
// Описание функции pop
int pop(void)
{
if (k != 0)
{
int temp = stack[k-1];
stack[k-1] = NULL;
k--;
return temp;
}

else 
{
error(&a);
}
}

int error(int *x)
{
*x=*x+1; 
}

void print_stack(void)
{
	for (i = 0; i < STACK_SIZE; i++)
	{
		printf("%d ", stack[i]);
	}
}
int main()
{
	for (i = 0; i < 5; i++ )
	{
		push(3);
		if (a == 1)
		{
			printf("Oshibka");
			a=0;
		}
		else
		{
			print_stack();
		}
	}
	

for (i = 0; i < 5; i++ )
	{
		pop();
		if (a == 1)
		{
			printf("Oshibka");
			a=0;
		}
		else
		{
			print_stack();
		}
	}
return 0;
}
