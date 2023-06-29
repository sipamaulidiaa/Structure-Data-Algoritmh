#include<stdio.h>

#define MAX 5 
#define true 1 
#define false 0 

char stack[MAX];
int top;

void init(void);
int full(void);
int empty(void);
char pop(void);
void clear(void);
void push(char info);
void baca(void);

main()
{
	char elemen;
	int pilih;
	init();
	do
	{
		printf("OPERASI STACK\n");
		printf("[1] Push\n");
		printf("[2] Pop\n");
		printf("[3] Clear\n");
		printf("[4] Baca\n");
		printf("[5] Keluar\n");
		printf("Masukan pilihan : "); scanf("%d", &pilih);
		switch (pilih)
		{
		case 1: printf("PUSH : "); scanf("%s", &elemen); 
		push(elemen); break;
		case 2: elemen = pop(); printf("POP %c\n", elemen); break;
		case 3: clear(); break;
		case 4: baca(); break;
		case 5: break;
		default: printf("salah pilih...\n");
		}
	} while (pilih != 5);
}

void init(void)
{
	top = 0;
}

void push(char info)
{
	if (full() != true)
	{
		top++;
		stack[top] = info;
	}
	else printf("Stack overflow...\n");
}

char pop(void)
{
	char info;
	if (empty() != true)
	{
		info = stack[top];
		top--;
		return(info);
	}
	else printf("Stack underflow...\n");
}

void clear(void) {
	top = 0;
}

int full(void)
{
	if (top == MAX)
	{
		return(true);
	}
	else
		return(false);
}

int empty(void)
{
	if (top == 0) return(true);
	else return(false);
}

void baca(void)
{
	int i;
	printf("isi stack : ");
	if (top>0)
	{
		for (i = 1; i <= top; i++)
			printf("%c ", stack[i]);
	}
	else printf("kosong");
	printf("\n");
}
