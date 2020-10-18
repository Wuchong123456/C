int main()
{
	char ch = 'w';
	char* pc = &ch;
	*pc = 'a';
	printf("%p\n", ch);
	return 0;
}

int main()
{
	int a = 10;
	int* p = &a;
	printf("%p\n", p);
	printf("%p\n", &a);
	return 0;
}

#include <stdio.h>
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

#define MAX(X,Y) (X>Y?X:Y)
int main()
{
	int a = 10;
	int b = 20;
	int max = Max(a, b);
	printf("max = %d\n", max);
	max = MAX(a, b);
	printf("max = %d\n", max);
	return 0;
}

void test()
{
	static int a = 1;
	a++;
	printf("a = %d\n", a);
}
int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}


	return 0;
}

#include <stdio.h>
void test()
{
	int a = 1;
	a++;
	printf("a = %d\n", a);
}
int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}


	return 0;
}

#include <stdio.h>
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}

int main()
{
	int a = 3;
	int b = 4;
	int max = 0;
	max = (a > b ? a : b);
	printf("%d\n", max);

	return 0;
}
int main()
{
	int a = 10;
	int b = a--;
	printf("a=%d,b=%d", a, b);
}

int main()
{
	int a = 0;
	int b = ~a;
	printf("%d\n", b);
	return 0;
}


int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int num1 = 25;
	int num2 = 30;
	int max = 0;
	max = Max(num1, num2);
	printf("%d\n", max);

	return 0;
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	while (i<10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	

	return 0;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("%d\n", sum);
	return 0;
}

int main()
{
	int line = 0;
	printf("加入比特\n");

	while (line < 20000)
	{
		printf("敲一行代码:%d\n",line);
		line++;
	}
	if (line>=20000);
	printf("好offer\n");
	
	return 0;
}

int main()
{
	int input = 0;
	printf("加入比特\n");
	printf("你要好好学习吗？（1/0）>:");
	scanf("%d", &input);
	if (input == 1)
		printf("好offer\n");
	else
		printf("卖红薯\n");

	return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
	printf("%d\n",strlen("c:\test\32\test.c"));
	return 0;
}
int main()
{
	printf("c:\\test\\32\\test.c");
	return 0;
}

int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a', 'b', 'c'};
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	return 0;
}

int main()
{
	"abc";
	char arr1[] = "abc";
	char arr2[] = { 'a', 'b', 'c' ，0};
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}

#include <stdio.h>
enum Color
{
	RED,
	YELLOW,
	BLUE,
};
int main()
{
	enum Color color= BLUE;
	color = YELLOW;

	return 0;
}

enum Sex
{
	MALE,
	FEMALE,
	SECRET,
};
int main()
{

	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);
		return 0;
}
int main()
{
#define MAX 10
	int arr[MAX] = { 0 };
	printf("d%\n", MAX);
	return 0;
}
int main()
{
const int num = 4;//const - 常属性，const修饰的常变量
	printf("%d\n", num);
	num = 8;
	printf("%d\n", num);
	return 0;
}
