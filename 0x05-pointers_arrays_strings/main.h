#ifndef main_h
#define main_h
/**
 * main - Prototype defined for declaring execution
 * _putchar - input description
 * @*n: reset to pointer
 * @c: input output
 * @*a: input output
 * @*b: input output
 * @*s: input output
 * @*str: input output
 * @*src: input output
 * @*dest: input output
 * @s: input output
 * Return: On success 1.
 */

int _putchar(char c);
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

#endif
