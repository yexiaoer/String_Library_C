/*
Programmer: Wenxiu Ye
Data: 4/21/2015
Name of the file: mystring.c
Bytecount: 5,373 bytes
*/
#include <stdio.h>
#include <stdlib.h>
#define STRINGLEN 30
/*Get a string read from standard 
input and store it in str.*/
char* getStr()
{
        //Pointer s, malloc() initialized the size for the pointer
        char *s = (char *) malloc(STRINGLEN);
        int pos = 0;
        int c = getchar();
        while(c != '\n')
        {
            *(s+pos) = c;
            pos++;
            c = getchar();
        }
        *(s+pos) = '\0';
        return s;
}

/* Append the string src to the end 
of the string dest and stores the 
result in string dest.*/
char* strcat(char* src1, char* src2)
{
    //Pointer s, malloc() initialized the size for the pointer
    char *s = (char *) malloc(STRINGLEN);
    int count = 0;
    //copy all the characters from src1
    while(*src1 != '\0')
    {
        *(s+count) = *src1;
        src1++;
        count++;
    }
    //copy all the characters from src1
    while(*src2 != '\0')
    {
        *(s+count) = *src2;
        src2++;
        count++;
    }
    *(s+count) = '\0';
    return s;
}

/*Search for the first occurrence of the 
character c (an unsigned char) in the 
string str. If not found, return -1. 
Otherwise, return the index where 
the character is found.*/
int strchr(char* str, int c)
{
    char *ip = str;
    while(*ip != '\0')
    {
        if(*ip ==  c)
            return ip - str;
        ip++;
    }
    return -1;
}

/*Compare two strings. Return 1 if they
 are equal and -1 otherwise.*/
int strcmp(char* str1, char* str2)
{
    for(; *str1 == *str2; str1++, str2++)
    {
        if(*str1 == '\0')
            return 1;
    }
    return -1;
}

/*Copy the string src to dest.*/
char* strcpy(char* src)
{
    char *s = (char *) malloc(STRINGLEN);
    int count = 0;

    while(*src != '\0')
    {
            *(s+count) = *src;
            count++;
            src++;
    }
    return s;
}

/*Copy up to n characters from the string src to dest.*/
 char* strncpy(char* src, int n)
{ 
    int count;
    char *s = (char *) malloc(STRINGLEN);
    //stop when count equal to n so it copy up to n character
    for(count = 0; count < n; count++)
    {
        *(s+count) = *src;
        src++;
    }
    count++;
    *(s+count) = '\0';
    return s;
}

/*Compute the length of the string str up to but not
 including the terminating null character.*/
int strlen(char* str)
{
    //create a pointer and pointed to str and loop through until it find \0
    char *ip = str;
    while(*ip != '\0')
    {
        ip++;
    }
    return ip - str;
}

/*Find the first character in the string str1 
that matches any character specified in str2.
If this character is not found, return -1. 
Otherwise, return the index of this 
character in the string str1.*/
int strpbrk(char* str1, char* str2)
{
    //Pointer s, malloc() initialized the size for the pointer
    char *temp = (char *) malloc(STRINGLEN);
    int pos = 0;
    while(*str1 != '\0')
    {
        *temp = *str2;
        while(*temp != '\0')
        {
            if(*temp == *str1)
                return pos;
            temp++;
        }
        str1++;
        pos++;
    }
    return -1;
}   

/*Find the first occurrence of the entire 
string needle (not including the terminating 
null character) which appears in the string 
haystack. If not found, return -1. Otherwise, 
return the index in the string haystack
where the first occurrence starts. */
int strstr(char* haystack, char* needle)
{
	int i, j, k;
    for(i = 0; *(haystack+i) != '\0'; i++)
    {
        //for loop use to compare all the remaning characters in haystack to needle
        for(j = i, k = 0; *(needle+k) != '\0' && *(haystack+j) == *(needle+k); j++, k++);
        if(k > 0 && *(needle+k) == '\0')
            return i;
    }
    return -1;
}

/*Convert a given string src to its upper-case
 form and store the result in the string dest.*/
char* struppercase(char* src)
{
    //Pointer s, malloc() initialized the size for the pointer
    char *s = (char *) malloc(STRINGLEN);
    int pos = 0;
    while(*src != '\0')
    {
        int c = *src;
        //only change the character between a to z    
        if(c >= 'a' && c <= 'z')
            *(s+pos) = c - 32;
        else
            *(s+pos) = *src;
            pos++;
            src++;
    }
    *(s+pos) = '\0';
    return s;
}

/*Convert a given string src to its lower-case 
form and store the result in the string dest*/
char* strlowercase(char* src)
{
    //Pointer s, malloc() initialized the size for the pointer
    char *s = (char *) malloc(STRINGLEN);
    int pos = 0;
    while(*src != '\0')
    {
        int c = *src;
        //only change the character between A to Z    
        if(c >= 'A' && c <= 'Z')
            *(s+pos) = c + 32;
        else
            *(s+pos) = *src;
            pos++;
            src++;
    }
    *(s+pos) = '\0';
    return s;
}

/*convert string to integer*/
int stoi(char* num)
{
    int n = 0;
    while(*num != '\0')
    {
        n*=10;
        int c = * num;
        n += (c - 48);
        num++;

    }
    return n;

}

/*check if the input is number or not*/
int checkinput(char* line)
{
    int count, true;
    while(*line != '\0')
    {
        int c = (*line) - 48;
        if(c < 0 || c > 9)
            true = 1;
        line++;
    }
    return true;  
}
