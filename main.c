#include <stdio.h>
 
int main()
{
	char message[100], ch;
	int i=0, key;
	int operation, cypher;
	
	printf("cypher list\n");
	printf("1. ceaser cypher\n");
	printf("2. substitution cypher \n");
	
	printf("choose cypher:");
	scanf("%d", &cypher);

	if(cypher = 1){
	    printf("1. encrypt message\n");
	    printf("2. decrypt message\n");
	    printf("choose program: "); 
	    scanf("%d", &operation) ;  
	    
	switch (operation){           
	
	case 1 :
	
	printf("Enter a message to encrypt: ");
	scanf("%s", message);
	
	  while (message[i] != '\0') {
      if (message[i] >= 'a' && message[i] <= 'z') 
         message[i] = message[i] - 32;
      
      i++;
	      
	  }
      
	printf("Enter key: ");
	scanf("%d", &key);
	
	for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		
		if(ch >= 'A' && ch <= 'Z'){
			ch = ch + key;
			
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}
			
			message[i] = ch;
		}
	}
	
	printf("Encrypted message: %s\n", message);
	break ;
	
	case 2:
		printf("Enter a message to decrypt: ");
	scanf("%s", message);
	
	  while (message[i] != '\0') {
      if (message[i] >= 'a' && message[i] <= 'z') 
         message[i] = message[i] - 32;
      
      i++;
	      
	  }
	printf("Enter key: ");
	scanf("%d", &key);
	
	for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		
	    if(ch >= 'A' && ch <= 'Z'){
			ch = ch - key;
			
			if(ch < 'A'){
				ch = ch + 'Z' - 'A' + 1;
			}
			
			message[i] = ch;
		}
	}
	
	printf("Decrypted message: %s", message);
	break;
	    
	}

	}
	return 0 ;
}