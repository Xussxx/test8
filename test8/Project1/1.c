#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//�Զ��庯��is_prime(�˺���ר��������)
//int is_prime(int n) {
//	int j = 0;
//	for ( j = 2; j <= sqrt(n); j++)
//	{
//		if ( n % j == 0)//n�ܱ�j����˵����������
//			return 0;
//	}
//	return 1;
//}

//�Զ��庯��is_leap_year���ж��Ƿ�Ϊ����
//int is_leap_year(int y) {
//	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
//		return 1;
//}

//�Զ��庯��binary_search
//int arr[]��������һ��ָ��
//int binary_search(int arr[],int k,int sz) {
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)//left<=right =���ܱ�ʡ�ԣ������ʡ�����Ҳ��������� 
//	{
//		int mid = (left + right) / 2;//���м�Ԫ�صĴ����ⲻ�ܷŵ�ѭ���⣬������ѭ����
//		if (arr[mid] < k) {
//			left = mid + 1;
//		}
//		else if(arr[mid]>k){
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;//�ҵ�������
//		}
//	}
//	return -1;//�Ҳ���
//}

//�Զ��庯��add
void add(int* p) {
	(*p)++;
}

int main() {
	//�ж�100-200֮�������
	/*int i = 0;
	for (i = 100; i <= 200;i++) {
		if (is_prime(i) == 1)
			printf("%d ",i);
	}*/

	//�ж�1000��-2000�������
	/*int year = 0;
	for ( year = 1000; year <= 2000; year++)
	{
		if (is_leap_year(year) == 1)
			printf("%d ",year);
	}*/

	//дһ��������ʵ��������������Ķ��ֲ���
	//int arr[] = {1,2,3,4,5,6,7,8,9};
	//int k = 7;
	//int sz = sizeof(arr) / sizeof(arr[0]);//�������Ԫ�ظ���
	//int ret = binary_search(arr, k,sz);//arr���ݹ�ȥ����Ԫ�ص��׵�ַ
	//if (ret == -1)
	//	printf("û���ҵ�������\n");
	//else
	//	printf("�ҵ��˸����֣������±�Ϊ��%d\n",ret);

	//дһ��������ÿ����һ������������ͻὫnumֵ����1
	int num = 0;
	add(&num);
	printf("num= %d\n",num);
	add(&num);
	printf("num= %d\n", num);
	add(&num);
	printf("num= %d\n", num);
	return 0;
}