#ifndef HEADER_FILE
#define HEADER_FILE

/**
	* pointers, arrays and strings
	*/
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);

/**
	* function _putchar
	*/
int _putchar(int n);

/**
	*more pointers, arrays and strings
	*/
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);

#endif
