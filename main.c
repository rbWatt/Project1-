#include <stdio.h>
int main () 
{
char message[100], ch;
int string[100] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N','O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
int i = 0, key, n;
int operation, cypher;
printf ("cypher list\n");
printf ("1. ceaser cypher\n");
printf ("2. substitution cypher \n");
printf ("choose cypher:");
scanf ("%d", &cypher);
if (cypher == 1)
{
printf ("1. encrypt message\n");
printf ("2. decrypt message\n");
printf ("choose program: ");
scanf ("%d", &operation);
switch (operation)
{
case 1:
printf ("Enter a message to encrypt: ");
scanf ("%s", message);
while (message[i] != '\0')
{
if (message[i] >= 'a' && message[i] <= 'z')
message[i] = message[i] - 32;
i++;
}
printf ("Enter key: ");
scanf ("%d", &key);
for (i = 0; message[i] != '\0'; ++i)
{
if (message[i] >= 'A' && message[i] <= 'Z')
{
message[i] = message[i] + key;
if (message[i] > 'Z')
{
message[i] = message[i] - 'Z' + 'A' - 1;
}
}
}
printf ("Encrypted message: %s\n", message);
break;
case 2:
printf ("Enter a message to decrypt: ");
scanf ("%s", message);
while (message[i] != '\0')
{
if (message[i] >= 'a' && message[i] <= 'z')
message[i] = message[i] - 32;
i++;
}
printf ("Enter key: ");
scanf ("%d", &key);
for (i = 0; message[i] != '\0'; ++i)
{
ch = message[i];
if (message[i] >= 'A' && ch <= 'Z')
{
message[i] = message[i] - key;
if (message[i] < 'A')
{
message[i] = message[i] + 'Z' - 'A' + 1;
}
}
printf ("Decrypted message: %s\n", message);
break;
}
}
}
else
{
printf ("1. encrypt message\n");
printf ("2. decrypt message\n");
printf ("choose program: ");
scanf ("%d", &operation);
switch (operation)
{
case 1:
printf ("input what you want encrypted: ");
scanf ("%s", message);
while (message[i] != '\0')
{
if (message[i] >= 'a' && message[i] <= 'z')
message[i] = message[i] - 32;
i++;
}
for (i = 0; message[i] != '\0'; ++i)
{
n = message[i] - 65;
printf ("encrypted message: %c\n", string[n]);
}
break;
}
}
return 0;
}


 
 
