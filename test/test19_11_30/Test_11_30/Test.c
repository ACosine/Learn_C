#include<stdio.h>
#include<assert.h>
/******************************冒泡排序选择最大的（由小到大排列）********************************************/
void Sort(int ar[], int n)    
{
	for (int i = 0; i<n - 1; ++i)                  //趟数
	{
		for (int j = 0; j<n - i - 1; ++j)            //每走一趟，遍历的元素少一个
		{
			if (ar[j] < ar[j + 1])               //前面的元素要是比后面的元素大，则进行交换
			{
				int tmp = ar[j];
				ar[j] = ar[j + 1];
				ar[j + 1] = tmp;
			}
		}
	}
}
void main()
{

	int ar[] = { 0 };
	printf("please input number ar[5]:");
	for (int i = 0; i < 5; ++i)
		{
			scanf("%d", &ar[i]);		
		}	
	Sort(ar, 5);
		for (int i = 0; i<5; ++i)
		{
			printf("%d ", ar[i]);
		}
}
/**********************************小写字母转换成大写字母********************************************/
//char *toupper(char *str,int n)    
//{
//	assert(str != NULL);
//	{
//		int n = strlen(str);
//		for (int i = 0; i < n-1; ++i)
//		{
//			if (str[i] >= 'a'&&str[i] <= 'z')
//			str[i] -= 32;
//		}
//		return str;
//	}
//}
//
//int main()
//{
//	char *res;
//	char str[100] = { 0 };
//	while (1)
//	{
//		gets(str);
//		res = toupper(str);
//		printf("res=%s\n", res);
//	}
//	return 0;
//}

/**********************************大小端检测********************************************/
//小端：数据的低位存储在内存的低地址处
//大端：数据的高位存储在内存的低地址处
//整型i = 0x 00 00 00 01
//小端字节序存储模式 内存中 01 00 00 00
//大端字节序存储模式 内存中 00 00 00 01
//对整型iq取地址，强制转换成char*，再解引用，取其低8位，若返回1小端，非1即大端。
//int check_sys()         
//{
//	int i = 1;  
//	return (*(char*)&i);   //1小端，非1大端
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)  
//		printf("小端\n");
//	else
//		printf("大端\n");
//	
//	return 0;
//}