#include <stdio.h>
#include <string.h>
int main()
{
	char key[100],str[100];
	printf("Enter string: ");
	fgets(str,sizeof(str),stdin);
	printf("Enter key: ");
	fgets(key,sizeof(key),stdin);
	int len=strlen(str);
	for (int i=0;i<len;++i)
	{
		str[i]=str[i]^key[i%strlen(key)];
	}
	printf("%s",str);
	return 0;
}

