#include <stdio.h>

////创建二维数组
//
//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			arr[i][j] = i * 4 + j+1;
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			// printf("arr[%d][%d] = %d ", i, j, arr[i][j]);   //打印值
//			printf("&arr[%d][%d] =%p\n",i,j, &arr[i][j]);   //打印地址
//			// 二维数组在内存中是连续存储的
//		}
//	}
//	return 0;
//}

////int main()
////{
////	int arr[] = { 1,7,3,5,4,6,0,8 };
////	printf("%p\n", arr);
////	printf("%p\n", arr+1);
////	printf("%d\n", *(arr + 1));
////	printf("%p\n", &arr[0]);
////	printf("%p\n", &arr[0]+1);
////	printf("%p\n", &arr);
////	printf("%p\n", &arr + 1);
////	return 0;
////}
////int main()
////{
////	int arr[10] = { 1,2,3,4,5 };
////	printf("%p\n", arr);
////	printf("%p\n", &arr[0]);
////	printf("%d\n", *arr);
////	printf("%d\n", sizeof(arr));     
////	// arr 和 &arr[0]都是指首元素的地址
////	// *arr是对首元素的地址解引用得到首元素
////	//1. sizeof(数组名)，计算整个数组的大小，sizeof内部单独放一个数组名，数组名表示整个数组。
////	//2. & 数组名，取出的是数组的地址。 & 数组名，数组名表示整个数组。
////	//3. 除此1,2两种情况之外，所有的数组名都表示数组首元素的地址。
////	return 0;
////}


//// 冒泡排序
//
//void bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,1,4,6,3,7,2,5};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//sizeof 和 strlen区别

//#include <string.h>
//int main()
//{
//	char arr1[] = "abc";
//	// 'a' 'b' 'c' '\0'
//	char arr2[] = { 'a','b','c' };
//	// 'a' 'b' 'c'
//	printf("%d\n", sizeof(arr1));  // 4(一共四个字符，每个字符占1个字节)
//	printf("%d\n", sizeof(arr2));  // 3(一共三个字符)
//	// sizeof操作符以字节形式给出了其操作数的存储大小
//	printf("%d\n", strlen(arr1));  // 3
//	printf("%d\n", strlen(arr2));  // 随机值 （没有'\0'）
//	// strlen以 '\0'为截止点，计算长度
//	return 0;
//}


