•• Printf

In C programming language, printf() function is used to print the “character, string, float, integer, octal and hexadecimal values” onto the output screen.
We use printf() function with %d format specifier to display the value of an integer variable.
Similarly %c is used to display character, %f for float variable, %s for string variable, %lffor double and %x for hexadecimal variable.
To generate a newline,we use “\n” in C printf() statement.

Tasks

0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life mandatory
Write a function that produces output according to a format.

Prototype: int _printf(const char *format, ...);
•Returns: the number of characters printed (excluding the null byte used to end output to strings)

•write output to stdout, the standard output stream

•format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%
You don’t have to reproduce the buffer handling of the C library printf function
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
Repo:

GitHub repository: printf

1. Education is when you read the fine print. Experience is what you get if you don't mandatory
Handle the following conversion specifiers:

d
i
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
Repo:

GitHub repository: printf

2. Just because it's in print doesn't mean it's the gospel mandatory
Create a man page for your function.

Repo:

GitHub repository: printf
File: man_3_printf