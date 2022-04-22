#include <stdio.h>


void insertion(int len, int arr[])
{

  
  for(int i = 1; i < len; i++)
  {
    int key = arr[i];
    int j = i -1;
    while(j>=0 && key < arr[j])
    {
       arr[j+1] = arr[j];
       j-=1;
    }	    
    arr[j+1] = key;    

  }

}
void print_array(int len, int arr[])
{
  for(int i = 0; i < len ; i++)
  {

    printf("%d ", arr[i]);
   }	 

    printf("\n");
}

int main()
{
  printf("hello\n");
  int len = 6;
  int arr[] = { 9,7,3,6,4,0 };
  print_array(len, arr);
  insertion(len, arr);
  print_array(len, arr);
  return 0;
}
