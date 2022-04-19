#include "main.h"                                                                                                                     
/**                                                                             
 * _strlen - length of the string                                 
 * @s: returns pointer value                                                    
 * return : value                                                     
 */                                                                             

int _strlen(char *s)                                                           
{                                                      
int a;                                                                          

a = 0;                                                                          while (s[a] != '\0')                                                         
{                                                                               a++                                                                                                                                   
}                                                                               

return (a);
}

