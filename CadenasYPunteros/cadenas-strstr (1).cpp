
/* strstr example */
#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] ="This is a simple string";
  char * pch;
  pch = strstr (str,"simple");
  //strncpy (pch,"sample",6);
  //puts (str);
  
  printf("\nPosicion : %s", pch);
  return 0;
}
