#include<stdio.h>

void sort(int *array);
void display(int *array);

int main()
{
  int array[10] = {46851,16351,130650,1642,31464661,105316,161606,364761,45,666};
  sort(array);
  display(array);
}

void sort(int *array)
{
  for(int i = 0;i <9;i++)//比较9次
    {
      for (int j = 0;j< 9-i;j++)//没有上浮的泡泡时,比较9次,然后有几个泡泡就少比较几次
        {
          if(array[j]>array[j+1])//如果不是逆序，就不会交换，所以是稳定排序
            {
              int tmp = array[j];
              array[j] = array[j+1];
              array[j+1] = tmp;
            }
        }
    }
}

void display(int *array)
{
  for(int i =0;i <10; i++)
    {
      printf("%d\n", array[i]);
    }
}

