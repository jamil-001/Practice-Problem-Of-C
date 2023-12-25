#include<stdio.h>
#include<string.h>
  int main() {
  char arr[100];
  gets(arr);
  for (int i = 0; i < strlen(arr)-1; i++)
  {
   for (int j = 0; j < strlen(arr)-1-i; j++)
   {
    if (arr[j]!='+')
    {
      if (arr[j]>arr[j+2])
      {
      char temp=arr[j];
      arr[j]=arr[j+2];
      arr[j+2]=temp;
      }
    }
   }
  }
  puts(arr);
	return 0;
}
