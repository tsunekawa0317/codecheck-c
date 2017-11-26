#include <stdio.h>

int main(void)
{
  char moji[256];
  
  printf("Enter a word,prefering 'World', '織田信長', or 'codecheck'.");  
  fgets(moji,256,stdin);
  if(moji[0]=='\n'){
    printf("Hello!");
  }
  else{
  printf("Hello %s",moji);
  }
    
  return 0;
}
