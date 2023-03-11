#include<stdio.h>

void sort(int *array, int len);
void display(int *array);
int min(int x, int y);

int main()
{
  int array[10] = {46851,16351,130650,1642,31464661,105316,161606,364761,45,666};
  sort(array, 10);
  display(array);
}


void sort(int *array, int len)//O(nlogn)
{
 int *a = array;
    int *b = (int *) malloc(len * sizeof(int));
    int seg, start;
    for (seg = 1; seg < len; seg += seg) {
        for (start = 0; start < len; start += seg * 2) {
            int low = start, mid = min(start + seg, len), high = min(start + seg * 2, len);
            int k = low;
            int start1 = low, end1 = mid;
            int start2 = mid, end2 = high;
            while (start1 < end1 && start2 < end2)
                b[k++] = a[start1] < a[start2] ? a[start1++] : a[start2++];
            while (start1 < end1)
                b[k++] = a[start1++];
            while (start2 < end2)
                b[k++] = a[start2++];
        }
        int *temp = a;
        a = b;
        b = temp;
    }
    if (a != array) {
        int i;
        for (i = 0; i < len; i++)
            b[i] = a[i];
        b = a;
    }
    free(b);

}

int min(int x, int y) {
    return x < y ? x : y;
}
void display(int *array)
{
  for(int i =0;i <10; i++)
    {
      printf("%d\n", array[i]);
    }
}