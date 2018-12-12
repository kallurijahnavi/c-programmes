#include<stdio.h>
void main()
{
   printf("%s","hello");
   printf("%10s","hello");
}

o\p:
hello     hello

note: here first printf will be executed and then the second printf has 10s as a formt specifier so 5 spapces will be occupied for hello and then remaining will be empty spapces 
_____hello
