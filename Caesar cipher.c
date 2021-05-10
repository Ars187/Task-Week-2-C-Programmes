#include<stdio.h>
#include<stdlib.h>
void encrypt(char* str,int key)
{
	char chr;
	int i;
	for(i=0;str[i]!='\0';++i){
		chr=str[i];
		if(chr>='a' && chr<='z'){
			chr=chr+key;
			if(chr>'z'){
				chr=chr-'z'+'a'-1;
			}
			str[i] = chr;
		}
		else if(chr>='A' && chr<='Z'){
			chr=chr+key;
			if(chr>'Z'){
				chr=chr-'Z'+'A'- 1;
			}
			str[i] = chr;
		}
	}
	printf("Encrypted message: %s\n", str);
}

void decrypt(char* str,int key)
{
	char chr;
	int i;
	for(i=0;str[i]!='\0';++i){
		chr=str[i];
		if(chr>='a' && chr<='z'){
			chr=chr-key;
			if(chr<'a'){
				chr=chr+'z'-'a'+1;
			}
			str[i] = chr;
		}
		else if(chr>='A' && chr<='Z'){
			chr=chr-key;
			if(chr<'A'){
				chr=chr+'Z'-'A'+ 1;
			}
			str[i] = chr;
		}
	}
	printf("Decrypted message: %s\n", str);
}
 
int main()
{
	int ch,key;
	char str[100];
	printf("Enter a string to encrypt: ");
	gets(str);
	printf("Enter key: ");
	scanf("%d", &key);
	while(1)
    {
		printf("1. Encryption\n2. Decryption\n3. Exit\n");
        printf("\nEnter You Choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
			case 1: encrypt(str,key);
                    break;
            case 2: decrypt(str,key);
                    break;
            case 3: exit(0);
            default: printf("\nInvalid choice\n");
        }
    }
    printf("\n");
    return 0;
}
