# include <stdio.h>

//there are four operation that are within this program, they are in pairs ceaser cypher and the substitution cypher.
//While they go deeper into two operations the decryption and encryption.
//To navigate to each operation the integer placed before the cypher/operation must be entered. 

int main () 
{
  char d;                                            //this is the character variable used for decryption by substitution
  char message[27];                                  //This is the string that is initialised through ASCII
  char string[27];                                   //This is the string that is initialised locally, is the key for substitution cypher.
  int operation, cypher;                              //These are integers used access the four operations.
  int i , key, n ;                                     //these are variables used in the operation and cypher.
  printf ("cypher list\n");
  printf ("1. ceaser cypher\n");
  printf ("2. substitution cypher \n");
  printf ("choose cypher:");
  scanf ("%d", &cypher);                              //This determines the cypher used using the if statement.
  if (cypher == 1)
  {
    printf ("1. encrypt message\n");
    printf ("2. decrypt message\n");
    printf ("choose operation: ");
    scanf ("%d", &operation);                         //This determines the operation of the cypher either encrypt or decrypt using a if statement.
    if (operation==1)
    {
      //The following operation takes input thats 
      //not coded the character then evenly rotate by 
      //a certain amount described by the key then outputs
      //the coded corresponding characters.
      printf("Enter a message to encrypt: ");
	  scanf(" %[^\n]s", message);                     //takes input including whitespaces for operation
	  printf("Enter key: ");                          
	  scanf("%d", &key);                             
	  for(i = 0; message[i] != '\0'; ++i)             //the condition for the 'for' loop is that i works only when there is an input shown by message[i] != '\0'.
	  {
	   	if(message[i] >= 'a' && message[i] <= 'z')    //this if statements works with all the input values on the ASCII table between 'a' and 'z'.
	  	{
	  	  message[i] = message[i] + key - 32;         //this mathematic operation takes the lower case input makes it into upper case and rotates the characters around the alphabet.
	   	  if(message[i] > 'Z')                        //this if statements allows the characters roatate from the ends of the alphabet string e.g. for A -> Z
	   	  {
	  	    message[i] = message[i] - 'Z' + 'A' - 1;  //this is the maths when a letter is rotate around beyond Z making it comeback to A
	  	  }	
	  	}
	  	else if(message[i] >= 'A' && message[i] <= 'Z') //this if statements works with all the input values on the ASCII table between 'A' and 'Z'.
  	  	{
          message[i] = message[i] + key;                //this mathematic operation rotates each letter character around the alphabet string. 
          if(message[i] > 'Z')                          //when the character rotates beyond the end of the alphabet string (beyond 'Z')it is returned to 'A'.       
       	  {
	   	    message[i] = message[i] - 'Z' + 'A' - 1;   // similar to before.
          }
	  	}
	  }
      printf("Encrypted message: %s", message);        // this prints out the characters that have been mathematically manipulated through the for statement
    }
     //The following operation takes input thats 
     //coded the character then evenly rotate by 
     //a certain amount described by the negative key then outputs
     //the not coded corresponding characters.
    else
    {
    printf("Enter a message to decrypt: ");
	scanf(" %[^\n]s",message);                         //similar to line 31
	printf("Enter key: ");
	scanf("%d", &key);
	for(i = 0; message[i] != '\0'; ++i)                // similar to line 34
	{		
	  if(message[i] >= 'a' && message[i] <= 'z')       // similar to line 36
	  {
	    message[i] = message[i] - key-32;              // note the only difference between this maths operation to last one is the key is treated as negative.
		if(message[i] < 'A')
		{
		  message[i] = message[i] + 'Z' - 'A' + 1;     // similar to line 41
	    }	
      }  
	  else if(message[i] >= 'A' && message[i] <= 'Z')  //similar to before 44
	  {
	    message[i] = message[i] - key;			       // again the key value is treated negatively so it does opposite operate to encrypt 'decrypt'
		if(message[i] < 'A')
		{
		  message[i] = message[i] + 'Z' - 'A' + 1;     //similar to before 49
		}
	  } 
	}
    printf("Decrypted message: %s", message);          //similar to before 53
    }
  }
  else
  {
    printf ("enter key: ");                              
    scanf ("%s", string);                              // this is used to initialise the key(the substituted values) which is a string of the alphabet
    printf ("1. encrypt message\n");
    printf ("2. decrypt message\n");
    printf ("choose operation: ");
    scanf ("%d", &operation);                          //similar to line 23
    if(operation==1)
    {
      //this encrypts the message in the substitution cypher
      //by using the input string and connecting them
      //to ASCII values then returning them to 
      //local character array to be outputted 
      //this can read whitespaces as input 
      //but cannot produce them as output
      printf ("Enter message to encrypted: ");
      scanf (" %[^\n]s", message);                     //similar to line 31 
      for(i=0;message[i] != '\0';++i)
      {
        if (message[i] >= 'a' && message[i] <= 'z')    //similar to line 36
        {
          message[i] = message[i] - 32;                //this operation uses the ASCII values to return lower case input as upper case.
          n = message[i] - 65;                         //this mathematical operation returns the ascii value alphabet to integer value beginning from 0 (within the integer variable 'n'). 
          printf("%c", string[n]);                     //using the integers variable the key (string[27])is accessed, and outputs the substituted characters.
        }
        else if(message[i] >= 'A' && message[i] <= 'Z') //similar to line 44
        {
          n = message[i] - 65;                         //similar to line 104
          printf("%c", string[n]);                     //similar to line 105
        }
      }
    }  

    else 
    {
      // this is the substitution decryption,
      // it takes the input for the local string.
      // while returning the real characters using the ASCII table.
      // disadvantage the output occurs in singular character 
      // not producing a solid string, there not accessing spaces
      //The input can only be upper case.
      //
      for(i=0; string[i]!='\0';i++)                     
      {
        printf("type in single character(must be upper case): ");
        scanf("%s", &d);                                //this takes the character input and stores it in a character variable.
        for (i=0;string[i]!='\0';i++)
        {
          if(string[i]==d)                              //this breaks upon the condition if the local array (key) is similar to the input value. 
          break;
        }
        if (d>='A' && d<='Z')                           //the if statement occurs for all the character input within A and Z.
        {
          d = i + 65;                                   //this takes the integer elements of the local array and returns it the the character valiable
          printf("character = %c\n ", d);         //this prints out the character variable ASCII value and its corresponding entered position in input
        }
      }
    }
  }
  return 0;
}


 
 
