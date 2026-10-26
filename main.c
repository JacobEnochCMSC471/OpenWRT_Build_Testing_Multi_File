#include "add.h"
#include "mul.h"
#include "sub.h"
#include <stdio.h>

int main(void)
{
	int var1 = 2;
	int var2 = 4;
	int add_v, sub_v, mul_v;
	
	add_v = add(var1, var2);
	printf("%d\n", add_v);
	
	sub_v = sub(var1, var2);
	printf("%d\n", sub_v);
	
	mul_v = mul(var1, var2);
	printf("%d\n", mul_v);
	
	
	return add_v + sub_v + mul_v;
}
	
