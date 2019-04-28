#include <stdio.h>

//there are four operation that are within this program, they are in pairs ceaser cypher and the substitution cypher.
//While they go deeper into two operations the decryption and encryption.
//To navigate to each operation the integer placed before the cypher/operation must be entered. 

int main () 
{
  char message[100];                                  //This is the string that is initialised through ASCII
  char string[100];                                   //This is the string that is initialised locally, is the key for substitution cypher.
  int operation, cypher;                              //These are integers used access the four operations.
  int i , key, n;                                     //these are variables used in the operation and cypher.
  printf ("cypher list\n");
  printf ("1. ceaser cypher\n");
  printf ("2. substitution cypher \n");
  printf ("choose cypher:");
  scanf ("%d", &cypher);                              //This determines the cypher used using the if statement.
  if (cypher == 1)
  {
    printf ("1. encrypt message\n");
    printf ("2. decrypt message\n");
    printf ("choose program: ");
    scanf ("%d", &operation);                         //This determines the operation of the cypher either encrypt or decrypt using a if statement.
    if (operation==1)
    {
      //The following operation takes input thats 
      //not coded the character then evenly rotate by 
      //a certain amount described by the key then outputs
      //the coded corresponding characters.
      
      
      printf ("Enter a message to encrypt: ");
      scanf ("%[^\n]s", message);
      while (message[i] != '\0')                      //This while loop depends on the definition that it has to operate with a character as it will terminate with the null which is a 0 or 'nothing value'.
      {
        //this minor operation converts 
        //lower case to upper case.
        if (message[i] >= 'a' && message[i] <= 'z')   //This 'if'loop statement corresponds to any lower case value within the ASCII table.
        message[i] = message[i] - 32;                 //Because the corresponding capital letters are 32 values lower than lower case letter'c maths is used on the ASCII values.
        i++;                                          //this is used to repeat loop until every lower case character is changed to upper case.
      }
      printf ("Enter key: ");
      scanf ("%d", &key);
      for (i = 0; message[i] != '\0'; ++i)            //In this for loop i is re initialised so every character in the string can be included in null occurse (when no more characters occur).
      {
        if (message[i] >= 'A' && message[i] <= 'Z')   //The if loop activates only when the values in the ASCII table between and including A and Z occur.
        {
          message[i] = message[i] + key;              //This maths adds the constant key to each character in order to give the coded character.
          
          //minor function allows complete rotation 
          //around the ends of the alphabet.
          if (message[i] > 'Z')
          {
            message[i] = message[i] - 'Z' + 'A' - 1;
          }
        }
      }
      printf ("Encrypted message: %s\n", message);
  }

      else
      {
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
        if (message[i] >= 'A' && message[i] <= 'Z')
        {
          message[i] = message[i] - key;
          if (message[i] < 'A')
          {
            message[i] = message[i] + 'Z' - 'A' + 1;
          }
        }
        printf ("Decrypted message: %s\n", message);
        
      }
    }
  }
  else
  {
    printf ("enter key: ");
    scanf ("%s", string);
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
      }
      printf ("encrypted message: %s\n", string);
      break;
      case 2:
      break;
    }
  }
  return 0;
}


 
 
