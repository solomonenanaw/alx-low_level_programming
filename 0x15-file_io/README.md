Write a function that reads a text file and prints it to the POSIX standard output.

Create a function that creates a file

Write a function that appends text at the end of a file.

Write a program that copies the content of a file to another file.
/* Bonus question
Write a program that displays the information contained in the ELF header at the start of an ELF file.

Usage: elf_header elf_filename
Displayed information: (no less, no more, do not include trailing whitespace)
Magic
Class
Data
Version
OS/ABI
ABI Version
Type
Entry point address
Format: the same as readelf -h (version 2.26.1)
If the file is not an ELF file, or on error, exit with status code 98 and display a comprehensive error message to stderr
You are allowed to use lseek once
You are allowed to use read a maximum of 2 times at runtime
You are allowed to have as many functions as you want in your source file
You are allowed to use printf */
