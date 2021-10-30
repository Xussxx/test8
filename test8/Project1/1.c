#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//自定义函数is_prime(此函数专门求素数)
//int is_prime(int n) {
//	int j = 0;
//	for ( j = 2; j <= sqrt(n); j++)
//	{
//		if ( n % j == 0)//n能被j整除说明不是素数
//			return 0;
//	}
//	return 1;
//}

//自定义函数is_leap_year，判断是否为闰年
//int is_leap_year(int y) {
//	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
//		return 1;
//}

//自定义函数binary_search
//int arr[]本质上是一个指针
//int binary_search(int arr[],int k,int sz) {
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)//left<=right =不能被省略，如果被省略则找不到该数字 
//	{
//		int mid = (left + right) / 2;//求中间元素的代码这不能放到循环外，必须在循环内
//		if (arr[mid] < k) {
//			left = mid + 1;
//		}
//		else if(arr[mid]>k){
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;//找到并返回
//		}
//	}
//	return -1;//找不到
//}

//自定义函数add
void add(int* p) {
	(*p)++;
}

int main() {
	//判断100-200之间的素数
	/*int i = 0;
	for (i = 100; i <= 200;i++) {
		if (is_prime(i) == 1)
			printf("%d ",i);
	}*/

	//判断1000年-2000年的闰年
	/*int year = 0;
	for ( year = 1000; year <= 2000; year++)
	{
		if (is_leap_year(year) == 1)
			printf("%d ",year);
	}*/

	//写一个函数，实现整形有序数组的二分查找
	//int arr[] = {1,2,3,4,5,6,7,8,9};
	//int k = 7;
	//int sz = sizeof(arr) / sizeof(arr[0]);//求出数组元素个数
	//int ret = binary_search(arr, k,sz);//arr传递过去的是元素的首地址
	//if (ret == -1)
	//	printf("没有找到该数字\n");
	//else
	//	printf("找到了该数字，数组下标为：%d\n",ret);

	//写一个函数，每调用一次这个函数，就会将num值增加1
	int num = 0;
	add(&num);
	printf("num= %d\n",num);
	add(&num);
	printf("num= %d\n", num);
	add(&num);
	printf("num= %d\n", num);
	return 0;
}