The printf function is one of the most well-known and frequently used in the C language to display data. It takes a string as an argument, and this string may contain placeholders (like %c for characters or %s for strings) whose original values are passed as arguments.The ft_printf function has variable arguments, and the only one that is required is the string that will be printed; everything else depends on how many placeholders are passed in this string.

• %c prints a single character.

-	%s prints a string of characters.
-	%p prints the void * pointer argument in hexadecimal.
-	%d prints a decimal (base 10) number.
-	%i prints an integer in base 10.
-	%u prints an unsigned decimal (base 10) number.
-	%x prints a number in hexadecimal (base 16).
-	%% prints a percent sign.
