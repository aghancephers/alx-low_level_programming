#include "main.h"

int check_palindrome(char *s, int start, int end);
int string_length(char *s);

/**
*is_palindrome - checks if a string is a palindrome
*@s: string to check
*
*Return: 1 if palindrome, 0 if not
*/
int is_palindrome(char *s)
{
int len = string_length(s);
if (len <= 1)
return (1);
return (check_palindrome(s, 0, len - 1));
}

/**
*string_length - returns the length of a string
*@s: string to calculate the length of
*
*Return: length of the string
*/
int string_length(char *s)
{
if (*s == '\0')
return (0);
return (1 + string_length(s + 1));
}

/**
*check_palindrome - checks if a string is a palindrome
*@s: string to check
*@start: start of string
*@end: end of string
*
*Return: 1 if palindrome, 0 if not
*/
int check_palindrome(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (check_palindrome(s, start + 1, end - 1));
}
