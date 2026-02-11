#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	//数组的创建：
//	// 
//	//type name[大小]；
//	int math[10];
//	char ch[5];
//	float weght[3];
//	这里的int char 等是数组元素的类型  不是数组类型。
//	return 0;
//}

//int main() {
//	int arr[10] = { 0 };
//	printf("%zu\n", sizeof(arr));
//	printf("%zu\n", sizeof(int[10]));
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("&arr[%d] = %p\n", i, &arr[i]);//查看数组元素地址是否连续。 
//		//%p用来表示地址
//	}
//	printf("%zu\n", sizeof(arr));
//	printf("%zu\n", sizeof(arr[0]));
//	printf("%zu\n", sizeof(arr)/sizeof(arr[0]));
//	int a;
//	scanf("%d", &a);
//	printf("%d", a);



//二维数组：将一维数组作为二维数组的 一个元素。
//下标从零开始。

//int main()
//{
//	int arr1[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	int i, j;
//	for (i = 1; i <= 3; i++) //产生行号
//	{
//		for (j = 1; j <= 5; j++) //产生列号
//		{
//			printf("%d ", arr1[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//错误：数组的下标从零开始。：
//从零开始的数组初始化以及打印

//int main()
//{
//	int arr1[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	int i, j;
//	for (i = 0; i < 3; i++) //产生行号
//	{
//		for (j = 0; j < 5; j++) //产生列号
//		{
//			printf("%d ", arr1[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr2[3][5] = { 0 };
//	for (int i = 0; i < 3; i++) 
//	{
//		for (int j = 0; j < 5; j++) 
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", arr2[i][j]);
//		}
//		printf("\n");
//	}
//	//换行输出：
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d ", arr2[j][i]);
//		}
//		printf("\n");
//	}
//		return 0;
//}
//二维数组存储地址也是连续的

//变长数组：VLA
int main()
{
	int n;
	scanf("%d", &n);
	int arr2[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr2[i]);
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", arr2[i]);
	}
	return 0;
}