#include <stdio.h>
#include<string.h>
int main()
{
  int i,n,flag=0;   
  char array[100],word[10];
  printf("Enter a word");
  scanf("%s",word);
  n=strlen(word);
  printf("string in array is:");
  for(i=0;i<=n;i++)
  {
      array[i]=word[i];
      printf("%c",array[i]);
  }
  for(i=0;i<=n;i++)
  {
      if(array[i]!=array[n-i-1])
      {
        flag=1;
        break;
      }    
  }
  if(flag == 0)
	{
		printf("\n %s is a Palindrome String",array);
	}
	else
	{
		printf("\n %s is Not a Palindrome String",array);
	}	
	
  	return 0;
}
