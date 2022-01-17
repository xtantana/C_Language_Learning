#include<stdio.h>
int main()
{
//int sum(int a)
//{
//	//每次进入重置
//	int c = 0;
//	static int b = 3;//修饰局部变量，延长生命周期
//	c += 1;
//	b += 2;
//	return (a + b + c);//a=2,c+=0+1,b+=3+2+2+2,
//}
//找最大值
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];//初始化为数组第一个元素，避免纯负数比较无法得到正确答案
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)//从第二个元素开始与初始化的arr[0]比较，
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d", max);
//
//	
	//int i = 0;
	//double sum = 0.0;
	//int f = 1;
	//for (i = 1; i <= 100; i++)
	//{
	//	sum +=f* 1.0 / i;
	//	f = -f;
	//}
	//printf("%f\n", sum);

	//int i;
	//int a = 2;
	//for (i = 0; i < 5; i++)
	//{
	//	printf("%d ", sum(a));
	//	
	//}
	//打印99乘法表
	//int i = 0;
	////确定要打印的行数
	//for (i = 1; i <= 9; i++)
	//{
	//	int f = 0;
	//	for (f = 1; f <= i; f++)//利用i的值控制每行的循环次数
	//	{
	//		printf("%d*%d=%-2d  ", i, f, i * f);//每循环一次打印一次
	//	}
	//	printf("\n");//内部循环结束进行换行
	//}

	//二分查找复习

	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k = 9;
	//int left = 0;
	//int zj;
	//int right = sizeof(arr) / sizeof(arr[0]);
	//while (left < right)
	//{
	//	zj = (left + right) / 2;
	//	if (arr[zj] < k)
	//		left++;
	//	else if (arr[zj] > k)
	//		right--;
	//	else
	//	{
	//		printf("%d", zj);
	//		break;
	//	}

	//}
	

	//猜数字游戏
	//1：电脑生成一个随机数
	//2：猜数字




	return 0;
}