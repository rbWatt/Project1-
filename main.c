#include<stdio.h>
 
int main()
{
	char message[100], ch;
	int i, key;
	int program, m;
	
	printf("ceaser cypher encryption = 1\n");
	printf("substitution cypher encryption = 2\n");
	printf("ceaser cypher decryption = 3\n");
	printf("substitution cypher decryption = 4\n");
	
	printf("choose program: "); 
	scanf("%d", m);  //to choose which operation to complete
	 
	program = m ;
	
	if ( program = 1){           //ceaser cypher loop
	
	printf("Enter a message to encrypt: ");
	scanf("%[^\n]c", message);
	printf("Enter key: ");
	scanf("%d", &key);
	
	for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch + key;
			
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}
			
			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch + key;
			
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}
			
			message[i] = ch;
		}
	}
	
	printf("Encrypted message: %s", message);
	}
	
	return 0;
}