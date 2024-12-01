#include <stdio.h>
#include <string.h>

int specialCharacters[] = { 0x2698,
                            0x25B2,
                            '*',
                            '+',
                            0x0001F464,
                            '#',
                            0x2193,
                            0x266B,
                            '!',
                            0x0001f41d,
			    '@',
                            0x2601,
                            0x0001f41d,
                            '~',
                            0x2620,
                            0x266a,
                            0x263a,
                            0x2665,
                            0x2606,
                            0x0001f984,
                            '$',
                            0x0001f4a7,
                            0x25a1,
                            0x0001f608,
                            0x0001f4a5,
                            0x2191  };

int main()  {

  char buff[512];
  int i, j;

  gets(buff);

  for ( j = strlen(buff), i = 0; i < j; i++ )  {

    printf("%c", specialCharacters[(buff[i]-97)]);
  }

  putchar(0x0A);

  return 0;
} 
