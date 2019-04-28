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
      
      
     printf("Enter a message to encrypt: ");
	scanf(" %[^\n]s", message);
	printf("Enter key: ");
	scanf("%d", &key);
	
	for(i = 0; message[i] != '\0'; ++i){
		
		if(message[i] >= 'a' && message[i] <= 'z'){
			message[i] = message[i] + key - 32;
			
			if(message[i] > 'Z'){
				message[i] = message[i] - 'Z' + 'A' - 1;
			}
			
			
		}
		else if(message[i] >= 'A' && message[i] <= 'Z'){
			message[i] = message[i] + key;
			
			if(message[i] > 'Z'){
				message[i] = message[i] - 'Z' + 'A' - 1;
			}
			
		
		}
	}
	
	printf("Encrypted message: %s", message);
	
  }

      else
      {
      printf("Enter a message to decrypt: ");
	scanf(" %[^\n]s",message);
	printf("Enter key: ");
	scanf("%d", &key);
	
	for(i = 0; message[i] != '\0'; ++i){
		
		if(message[i] >= 'a' && message[i] <= 'z'){
			message[i] = message[i] - key-32;
			
			if(message[i] < 'A'){
				message[i] = message[i] + 'Z' - 'A' + 1;
			}
			
		}
		else if(message[i] >= 'A' && message[i] <= 'Z'){
			message[i] = message[i] - key;
			
			if(message[i] < 'A'){
				message[i] = message[i] + 'Z' - 'A' + 1;
			}
			

		}
	}
	
	printf("Decrypted message: %s", message);
        
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
      scanf (" %[^\n]", message);
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


 
 
