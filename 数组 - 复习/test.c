#include <stdio.h>

////������ά����
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
//			// printf("arr[%d][%d] = %d ", i, j, arr[i][j]);   //��ӡֵ
//			printf("&arr[%d][%d] =%p\n",i,j, &arr[i][j]);   //��ӡ��ַ
//			// ��ά�������ڴ����������洢��
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
////	// arr �� &arr[0]����ָ��Ԫ�صĵ�ַ
////	// *arr�Ƕ���Ԫ�صĵ�ַ�����õõ���Ԫ��
////	//1. sizeof(������)��������������Ĵ�С��sizeof�ڲ�������һ������������������ʾ�������顣
////	//2. & ��������ȡ����������ĵ�ַ�� & ����������������ʾ�������顣
////	//3. ����1,2�������֮�⣬���е�����������ʾ������Ԫ�صĵ�ַ��
////	return 0;
////}


//// ð������
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

//sizeof �� strlen����

//#include <string.h>
//int main()
//{
//	char arr1[] = "abc";
//	// 'a' 'b' 'c' '\0'
//	char arr2[] = { 'a','b','c' };
//	// 'a' 'b' 'c'
//	printf("%d\n", sizeof(arr1));  // 4(һ���ĸ��ַ���ÿ���ַ�ռ1���ֽ�)
//	printf("%d\n", sizeof(arr2));  // 3(һ�������ַ�)
//	// sizeof���������ֽ���ʽ��������������Ĵ洢��С
//	printf("%d\n", strlen(arr1));  // 3
//	printf("%d\n", strlen(arr2));  // ���ֵ ��û��'\0'��
//	// strlen�� '\0'Ϊ��ֹ�㣬���㳤��
//	return 0;
//}


