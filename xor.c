
/* xor.c */

#define KEY 'X';
#define CLEARTEXT 'A';

#include <stdio.h>

void printchar (char c, char *text)
{
 printf("%s = '%c' (0x%x)\n", text, c, c); // % c = actual character, %x = hexadecimal
 return;
}

int main()
{
 char cleartext, key, ciphertext, newcleartext;

 cleartext = CLEARTEXT;
 printchar(cleartext, "cleartext");

 key = KEY;
 printchar(key, "key");

 ciphertext = cleartext ^ key; /* ^ = XOR */
 printchar(ciphertext, "ciphertext");

 newcleartext = ciphertext ^ key;
 printchar(newcleartext, "newcleartext");

 return 0;
}
