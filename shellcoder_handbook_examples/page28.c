//find_start.c
#include<stdio.h>
unsigned int find_start(void)
{
	__asm__("mov %rsp, %rax");
}

int main()
{
	printf("0x%x\n",find_start());
}
