#include <stdio.h>

int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);
int mod(int x, int y);

/**
 * add - Adds two numbers
 * @x: Number
 * @y: Number
 * Return: Return function
 */
int add(int x, int y)
{
        return (x + y);
}

/**
 * sub - Subtracts two numbers
 * @x: Number
 * @y: Number
 * Return: Return function
 */
int sub(int x, int y)
{
        return (x - y);
}

/**
 * mul - Multiply two numbers
 * @x: Number
 * @y: Number
 * Return: Return function
 */
int mul(int x, int y)
{
        return (x * y);
}

/**
 * div - Divide two numbers
 * @x: Number
 * @y: Number
 * Return: Return function
 */
int div(int x, int y)
{
        return (x / y);
}

/**
 * mod - Modulos of two number
 * @x: Number
 * @y: Number
 * Return: Return function
 */
int mod(int x, int y)
{
        return (x % y);
}
