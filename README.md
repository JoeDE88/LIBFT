***This project has been created as part of the 42 curriculum by jdiaz-ec***
# libft
---
## DESCRIPTION
### The goal of this project are:
- #### Create my own C language standard library, a collection of functions that will be a useful tool for my 42 curriculum.
- #### Understand how C functions work internally.
- #### Learn memory management.

### To do so, I had to reimplement a set of functions taken from the original libc, such as:
```c
void *memset(void *s, int c, size_t n)
```
### and develope some other functions that are not included in the libc, but will be as useful for my 42 curriculum, like:
```c
char *ft_itoa(int n);
```
### The libft is composed by:
- #### A .h file, which includes all the function prototypes.
- #### All the *.c files, which are all the function developed.
- #### A Makefile, which includes all the commands that are used to compile the program.

## INSTRUCTIONS
### To compile the library:
```bash
make
```
This will generate libft.a, which can then be used to compile any other .c file containing a main function.

### Additional rules:
```bash
make clean    # Remove object files
make fclean   # Remove object files and libft.a
make re       # Recompile everything
```

## RESOURCES

#### Reading the f****** man was the first of the used resources to understand, learn and study how these functions work, as well as their limitations and bugs.
#### When reading the manual wasn't enough or when I needed more information regarding one function or another, the 42 peer-to-peer method was a huge helpful resource, The willingness of 42 students to help and support one another is truly amazing.
#### Some other helpful resources were: stackoverflow.com, youtube.com, geekforgeeks.org
