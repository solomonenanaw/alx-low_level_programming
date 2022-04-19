#include "main.h"                                                                                                                     
/**
 * _strlen - length of the string 
 * @s : a pointer to an int that will be chaged/update
 * return : void it means the answer is true 
 */                                                                                                                                   
int _strlen(char *s)                                                            {                                                                              
int a;     

a = 0;
while (s[a] != '\0')                  
{                                                                               a++                                                                                                                                   
}                                                                                                                                     
return (a);                                                                                                                             
}     
