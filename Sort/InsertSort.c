#include<stdio.h>

void sort(int *array);
void display(int *array);

int main()
{
  int array[10] = {46851,16351,130650,1642,31464661,105316,161606,364761,45,666};
  sort(array);
  display(array);
}

void sort(int *array)//O(n^2)
{
  int key;
  for(int i = 0;i<10;i++)//做10次插入操作，每次做插入操作时，key前面的数据已经是有序的了
    {
      key = array[i];//作为将要插入数据的信标
      int j = i -1;//插入数据左边的一位
      while((j>=0)&& (key < array[j]))//要点：先比，再移，后插，同时由key<array[j]通过判断可以，同等数据不执行交换，所以也是稳定排序
        {
          array[j+1] = array[j];
          j--;
        }
        array[j+1] = key;
    }
}

void display(int *array)
{
  for(int i =0;i <10; i++)
    {
      printf("%d\n", array[i]);
    }
}
