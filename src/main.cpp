#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char moji[256];
  int len;
  
  printf("Enter a word,prefering 'World', '織田信長', or 'codecheck'.");  
  fgets(moji,256,stdin);
  
  len=strlen(moji)-1;
  
  if(len==0){
    printf("Hello!");
  }
  else{
  printf("Hello %s",moji);
  }
    
  return 0;
}
