# Libft Project - 42

Welcome to the **Libft** project, a foundational project at 42 that involves recreating several standard functions from the C library (libc).

## Table of Contents

- [Introduction](#introduction)
- [Functions](#functions)
  - [libc Functions](#libc-functions)
  - [Additional Functions](#additional-functions)
  - [Bonus Functions](#bonus-functions)
- [Compilation](#compilation)
- [Usage](#usage)
- [Contributors](#contributors)

## Introduction

The Libft project is designed to familiarize you with C programming. You will recreate a set of standard C library functions, along with a few additional functions commonly used in 42 projects.

## Functions

The functions you need to recreate are divided into several categories:

### libc Functions

- `memset`
- `bzero`
- `memcpy`
- `memccpy`
- `memmove`
- `memchr`
- `memcmp`
- `strlen`
- `strdup`
- `strcpy`
- `strncpy`
- `strcat`
- `strncat`
- `strlcat`
- `strchr`
- `strrchr`
- `strstr`
- `strnstr`
- `strcmp`
- `strncmp`
- `atoi`
- `isalpha`
- `isdigit`
- `isalnum`
- `isascii`
- `isprint`
- `toupper`
- `tolower`

### Additional Functions

- `ft_memalloc`
- `ft_memdel`
- `ft_strnew`
- `ft_strdel`
- `ft_strclr`
- `ft_striter`
- `ft_striteri`
- `ft_strmap`
- `ft_strmapi`
- `ft_strequ`
- `ft_strnequ`
- `ft_strsub`
- `ft_strjoin`
- `ft_strtrim`
- `ft_strsplit`
- `ft_itoa`
- `ft_putchar`
- `ft_putstr`
- `ft_putendl`
- `ft_putnbr`
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

### Bonus Functions

- `ft_lstnew`
- `ft_lstdelone`
- `ft_lstdel`
- `ft_lstadd`
- `ft_lstiter`
- `ft_lstmap`

## Compilation

To compile the library, use the provided Makefile. In the terminal, run:

```sh
make
```

## Usage
To use this library in your projects, include libft.h in your source files and compile your project with libft.a:
```c
#include "libft.h"
```

Then, during compilation:
```sh
gcc -o my_program my_program.c -L. -lft
```

## Contributors
pschemit
