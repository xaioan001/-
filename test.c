#include <stdio.h>
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}
/*nt global = 2020;
void test()
{
	printf("test()--%d\n", global);
}
int main()
{
	test();
	printf("%d\n", global);
	return 0;  
}*/
/* int main()
{
	printf("%c\n", '\'');
	printf("%s\n", "\"");
	return 0;
  }*/
//printf("%d\n",strlen("c:\test\32\test.c));
//\32--32��2��8�������֣���ΪASCII��ֵ����Ӧ���ַ�
//32-->10����26->��ΪASCII��ֵ������ַ�
//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//}
//��Ŀ������   һ��������   �� 
//˫Ŀ������   ����������   a+b   +˫
////��Ŀ������   ����������
//int main()
//{
//	int a = 0;
//	int b = ~a;//b���з��ŵ����Σ�
//	//~--- ��λȡ��
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//Դ��  ����  ����
//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����Ʋ���
//	//��ӡ����Դ��
//	printf("%d\n", b);
//	return 0;
//}
//typedef    ���Ͷ���   �����ض�
//void test()
//{
//	static int a = 1;//a��һ����̬�ľֲ�����
//	//static  ���ξֲ�����
//	//�ֲ��������������ڱ䳤
//	//static����ȫ�ֱ���
//	�ı��˱�����������-- 
// �þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�
// ʹ��  ����Դ�ļ���û����ʹ����
//static  ���κ���
// static ���κ����ı��˺�������������
// �ⲿ��������->�ڲ���������
//	a++;
//	printf("a=%d\n", a);
//
//}
//int main()
//{
//	
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//
//	}
//	return 0;
//}
//extern int Add(int, int);
//




//define   ���Զ���곣��
//#define MAX
//#define���Զ����-������
//int main()
//{
//	int arr[3][2] = { 0 };
//	printf("%p\n", arr);
////	printf("%p\n", arr[0]);
////	return 0;
//////}
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int* p = &a;
//	printf("%p\n", p);
//}
//struct book
//{
//	char name[20];
//	int  price;
//};
//int main()
//{
//	struct book b1 = {"c �� �� �� �� �� ��" ,55};
//	struct book* pb = &b1;
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//
//
//	return 0;
//
////}
//int search(int* nums, int numsSize, int target)
//{
//    int left, right, mid;
//    left = 0;
//    right = numsSize - 1;
//    mid = 0;
//    while (left <= right)
//    {
//        mid = (right + left) / 2;
//        if (nums[mid] > target){
//            right = mid - 1;
//        }
//        else if(nums[mid] < target){
//            left = mid + 1;
//        }
//        else if(nums[mid] == target){
//            return mid;
//        }
//    }
//    return -1;
//}
//
//int search(int* nums, int numsSize, int target) {
//    int left = 0;
//    int right = numsSize - 1;
//    int middle = 0;
//    //��leftС�ڵ���right��˵��������Ԫ�ز�Ϊ0
//    while (left <= right) {
//        //���²����±�middle��ֵ
//        middle = (left + right) / 2;
//        //��ʱtarget���ܻ���[left,middle-1]������
//        if (nums[middle] > target) {
//            right = middle - 1;
//        }
//        //��ʱtarget���ܻ���[middle+1,right]������
//        else if (nums[middle] < target) {
//            left = middle + 1;
//        }
//        //��ǰ�±�Ԫ�ص���targetֵʱ������middle
//        else if (nums[middle] == target) {
//            return middle;
//        }
//    }
//    //��δ�ҵ�targetԪ�أ�����-1
//    return -1;
//}
//int guessNumber(int n) {
//    int right, left, num;
//    right = n;
//    left = 1;
//    while (left < right)
//    {
//        int guess(int num);
//        num = (right - left) / 2 + left;
//        if (num > n)
//        {
//            num = right - 1;
//            return 1;
//        }
//        else if (num < n)
//        {
//            num = left + 1;
//            return -1;
//        }
//        else if (num == n)
//        {
//            printf("��ϲ����¶��ˣ�%d\n");
//            return 0;
//        }
//    }
//    return 0;
//}
//int guessNumber(int n)
//{
//    int right, left, mid;
//    right = n;
//    left = 1;
//    int mid = (right - left) / 2 + left;
//    int result = guessNumber(mid);
//    while (result != 0)
//    {
//        if (result < 0)
//        {
//            right = mid - 1;
//        }
//        else if (result > 0)
//      {
//           left = mid + 1;
//      }
//    }
//    printf("��ϲ!��¶���! %d \n");
//    return result;
////}
//int guessNumber(int n)
//{
//    int right, left, mid;
//    right = n;
//    left = 1;
//    int mid = (right - left) / 2 + left;
//    int result = guessNumber( mid);
//    while (result != 0)
//    {
//        if (result < 0)
//        {
//            right = mid - 1;
//        }
//        else if (result > 0)
//        {
//            left = mid + 1;
//        }
//    }
//    printf("��ϲ!��¶���! %d \n");
//    return result;
//}

int guessNumber(int n)
{
    int right, left, mid;
    right = n;
    left = 1;
    int mid = (right + left) / 2 + left;
    int result = guessNumber(mid);
    while (result != 0)
    {
        if (result < 0)
        {
            right = mid - 1;
        }
        else if (result > 0)
        {
            left = mid + 1;
        }
        mid = (left + right) / 2;
        result = guess;
    }
    printf("��ϲ!��¶���! %d \n");
    return result;
}