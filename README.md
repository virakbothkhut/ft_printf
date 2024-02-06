# ft_printf
You will discover a popular and versatile C function: printf(). This exercise is a great opportunity to improve your programming skills. It is of moderate difficulty. You will discover variadic functions in C. The key to a successful ft_printf is a well-structured and extensible code.

## Flag:

'-' : Left alignment within the specified width.

'+' : Always display a sign (+ or -) for numeric values.

' ' (space): Display space instead of + sign for positive numbers.

'0' : Fill the result with zeros (instead of spaces) until the minimum width is reached.

'#' : Used for "alternate form". For example, for the o specifier, it adds a zero before the number. For x and X adds 0x or 0X respectively.

## Specifies 
%d or %i : Signed integer 

%u : Unsigned integer 

%o : Integer in octal 

%x : Integer in hexadecimal (lowcase)

%X : Integer in hexadecimal (with capital letters)

%f : A decimal floating point number

%F : Same as %f, but outputs INF and NAN in purpose.

%e or %E: A floating-point number in the format %f or %e depending on the value. 

%c : One character 

%s : Character string 

%p : Pointer (memory address)

%n : Prints nothing, but records the number of characters typed to date in the appropriate int variable 

%% : Displays the percent symbol

Additionally, length modifiers can be used (for example l, ll, h, hh, z, t, j, etc),which specify what type of data is expected in the argument

The period (.) in the context printf() function is used to indicate the precision of the output value, and is often called the "precision specifier".

However, it is not a flag in the traditional sense of the word in the printf() context. Instead, it precedes a value that determines the precision of the output.

For types f, e and E, precision specifies that number of digits after the decimal point.

For type g or G, precision specifies the maximum number of significant digits.

For integer types (d, i, o, x, X), the precisions specifies the minimum number of digits to be output. If the actual number of digits is less than the specified precision, the result is padded with zero.

The dot(.) and the "specified precision specifier" are closely related, but they are not the same thing:

Dot(.): this symbols serves an indicator that the following parameter will indicate precision. It tells the printf() function that the next digit or *character determines the precision of the output for the corresponding argument.

Specified precision specifier: This is the actual value specified immediately after the period. It can be a number (for example, 2) or a* character, whcih tells printf() that the actual precision will be passed as a additional argument at runtime 

(which case the precision is retrieved from the argument list).

