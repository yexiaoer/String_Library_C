/*
Programmer: Wenxiu Ye
Data: 4/21/2015
Name of the file: mystring.h
Bytecount: 518 bytes
*/

//method from teh mystring class
char* getStr();
char* strcat(char* src1, char* src2);
int strchr(char* str, int c);
int strcmp(char* str1, char* str2);
char* strcpy(char* src);
char* strncpy(char* src, int n);
int strlen(char* str);
int strpbrk(char* str1, char* str2);
int strstr(char* haystack, char* needle);
char* struppercase(char* src);
char* strlowercase(char* src);
int stoi(char* num);
int checkinput(char* line);