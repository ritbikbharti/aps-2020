#include<stdio.h>
#include<string.h>

char *FirstWord(char *line)
		{
			char *word = strtok(line," ");
			return word;
		}

int main()
{
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		char str[100];
		char temp[100];
		scanf("%[^\n]%*c",str);

		char substr[]=" not ";
		char substr1[]=" not";
		char substr2[]="not ";
		char substr3[]="not";

		if (strstr(str,substr))
            printf("Real Fancy\n");

    	else if (strstr(str,substr1))
    	{
    		char* token = strtok(str," "); 
    		while (1)
    		{
        		token = strtok(NULL," ");
        		if(token==NULL)
        			break;
        		strcpy(temp,token);
   			}
   			if(strcmp(temp,substr3)==0)
   				printf("Real Fancy\n");
    		else
    			printf("regularly fancy\n");
    	}

    	else if (strstr(str,substr2))
    	{
    		char *ptr = FirstWord(str);
    		if(strcmp(ptr,substr3)==0)
    			printf("Real Fancy\n");
    		else
    			printf("regularly fancy\n");
    	}

    	else if (strcmp(str,substr3)==0)
    		printf("Real Fancy\n");

    	else
    		printf("regularly fancy\n");
	}

	return 0;
}