#include<stdio.h>
#define length 10
void sort(int *array,int len );
void display(int *array);
void swap(int *a,int *b) ;

int main()
{
  int array[10] = {46851,16351,130650,1642,31464661,105316,161606,364761,45,666};
  sort(array, 10);
  display(array);
}

void sort(int *array, int len)//O(n^2)
{
  int i,j,temp;
 
    for (i = 0 ; i < len - 1 ; i++) 
    {
        int min = i;                  // 记录最小值，第一个元素默认最小
        for (j = i + 1; j < len; j++)     // 访问未排序的元素
        {
            if (array[j] < array[min])    // 找到目前最小值
            {
                min = j;    // 记录最小值
            }
        }
        if(min != i)
        {
            temp=array[min];  // 交换两个变量
            array[min]=array[i];
            array[i]=temp;
        }
        /* swap(&a[min], &a[i]);  */   // 使用自定义函数交換
    }
}

void swap(int *a,int *b) // 交换两个变量
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void display(int *array)
{
  for(int i =0;i <10; i++)
    {
      printf("%d\n", array[i]);
    }
}
