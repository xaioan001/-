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
//\32--32是2个8进制数字，作为ASCII码值，对应的字符
//32-->10进制26->作为ASCII码值代表的字符
//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//}
//单目操作符   一个操作数   ！ 
//双目操作符   两个操作数   a+b   +双
////三目操作符   三个操作数
//int main()
//{
//	int a = 0;
//	int b = ~a;//b是有符号的整形，
//	//~--- 安位取反
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//源码  反码  补码
//	//负数在内存中存储的时候，存储的是二进制补码
//	//打印的是源码
//	printf("%d\n", b);
//	return 0;
//}
//typedef    类型定义   类型重定
//void test()
//{
//	static int a = 1;//a是一个静态的局部变量
//	//static  修饰局部变量
//	//局部变量的生命周期变长
//	//static修饰全局变量
//	改变了变量的作用域-- 
// 让静态的全局变量只能在自己所在的源文件内部
// 使用  出了源文件就没法再使用了
//static  修饰函数
// static 修饰函数改变了函数的连接属性
// 外部连接属性->内部连接属性
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




//define   可以定义宏常量
//#define MAX
//#define可以定义宏-带参数
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
//	struct book b1 = {"c 语 言 程 序 设 计" ,55};
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
//    //若left小于等于right，说明区间中元素不为0
//    while (left <= right) {
//        //更新查找下标middle的值
//        middle = (left + right) / 2;
//        //此时target可能会在[left,middle-1]区间中
//        if (nums[middle] > target) {
//            right = middle - 1;
//        }
//        //此时target可能会在[middle+1,right]区间中
//        else if (nums[middle] < target) {
//            left = middle + 1;
//        }
//        //当前下标元素等于target值时，返回middle
//        else if (nums[middle] == target) {
//            return middle;
//        }
//    }
//    //若未找到target元素，返回-1
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
//            printf("恭喜！你猜对了！%d\n");
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
//    printf("恭喜!你猜对了! %d \n");
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
//    printf("恭喜!你猜对了! %d \n");
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
    printf("恭喜!你猜对了! %d \n");
    return result;
}