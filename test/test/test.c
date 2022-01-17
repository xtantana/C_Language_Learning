#include<stdio.h>
#include<string.h>
struct Book
{
	char name[20];
	short price;
};
int main()
{
	struct Book b1 = { "C语言程序设计",55 };
	printf("书名：%s\n", b1.name);
	printf("价格：%d\n", b1.price);
	return 0;
}
//int main()
//{
//	printf("%d\n", sizeof (char*));
//	printf("%d\n", sizeof (int*));
//	printf("%d\n", sizeof (short*));
//	printf("%d\n", sizeof (double*));
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%p\n", p);
//	printf("%p\n", &a);
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}
//函数的实现
//int MAX(x,y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////宏的定义
//#define max(x,y) (x>y?x:y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int num= MAX(a, b);
//	printf("max=%d\n", num);
//	num = max(a, b);
//	printf("max=%d\n", num);
//	return 0;
//}
//int main()
//{
//	extern int g_val;
//	printf("%d", g_val);
//	return 0;
//}
//void ab()
//{
//	static int a = 1;//static 修饰局部变量生命周期变长（使用的周期）
//	a++;					  修饰全局变量改变作用域（使用的范围）
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		ab();
//		i++;
//	}
//}

//int add(int y, int x)
//{
//	int z;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum=add(a, b);
//	printf("%d\n", sum);
//	
//	return 0;
//}