/*
Programmer: Wenxiu Ye
Data: 4/21/2015
Name of the file: teststring.c
Bytecount: 3,028 bytes
*/

#include <stdio.h>
#define STRINGLEN 30
#include "mystring.h"

int main()
{
    //the loop stop when the user type quit
    while(1)
    {
		char *method = getStr();
		char *string1;
        char *string2;
        char *string3;
		char *num;
		//use the method strcmp to compare the input
		if(strcmp(method, "quit") == 1)
			break;
		else if(!((strcmp(method, "strcat") == 1) || (strcmp(method, "strchr") == 1) || (strcmp(method, "strcmp") == 1) || (strcmp(method, "strcpy") == 1) || (strcmp(method, "strncpy") == 1) || (strcmp(method, "strlen") == 1) || (strcmp(method, "strpbrk") == 1) || (strcmp(method, "strstr") == 1) || (strcmp(method, "struppercase") == 1) || (strcmp(method, "strlowercase") == 1)))
			printf("Unknown function\n"); 
		else
		{
			if(strcmp(method, "strcat") == 1)
            {
                string1 = getStr();
                string2 = getStr();
                printf("%s\n", strcat(string1, string2));
            }
            else if(strcmp(method, "strchr") == 1)
            {
                string1 = getStr();
                string2 = getStr();
                int c = *string2;
                printf("%d \n", strchr(string1, c));
            }
            else if(strcmp(method, "strcmp") == 1)
            {
                string1 = getStr();
                string2 = getStr();
                printf("%d\n", strcmp(string1, string2));
            }
            else if(strcmp(method, "strcpy")==1)
            {
                string1 = getStr();
                printf("%s\n", strcpy(string1));

            }
            else if(strcmp(method, "strncpy")==1)
            {
                string1 = getStr();
                string2 = getStr();
                int num;
                if(checkinput(string2) == 1)
                        printf("Wrong Input!\n");
                else
                {
                    num = stoi(string2);
                    printf("%s\n", strncpy(string1, num));
                }
            }
            else if(strcmp(method, "strlen")==1)
            {
                string1 = getStr();
                printf("%d\n", strlen(string1));
            }
            else if(strcmp(method, "strpbrk")==1)
            {
                string1 = getStr();
                string2 = getStr();
                printf("%d\n", strpbrk(string1, string2));
            }
            else if(strcmp(method, "strstr")==1)
            {
                string1 = getStr();
                string2 = getStr();
                printf("%d\n", strstr(string1, string2));
            }
            else if(strcmp(method, "struppercase")==1)
            {
                string1 = getStr();
                printf("%s\n", struppercase(string1));
            }
            else if(strcmp(method, "strlowercase")==1)
            {
                string1 = getStr();
                printf("%s\n", strlowercase(string1));
            }
           }
	}
}
