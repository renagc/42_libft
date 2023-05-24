# libft

Main objective of this project is to write my own c library: a collection of functions that will be a useful tool for your cursus.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Requirements](#requirements)

## Introduction

The Libft project is the first project of 42 Lisbon. It involves coding a C library that contains various general-purpose functions that will be useful for future C school assignments. The library, named "libft.a," consists of two parts: libc functions and additional functions.

## Features

The functions reproduced in this projects have the same prototypes and behaviors as the original ones but with a prefix of "ft_" added to their names. For example, the function "strlen" becomes "ft_strlen." The functions needed to implement include character checking functions (isalpha, isdigit, etc.), string functions (strlen, memset, memcpy, etc.), and conversion functions (toupper, tolower, atoi, etc.). Also implemented two functions (calloc and strdup) that required the use of malloc.
Some of additional functions include ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_itoa, ft_strmapi, ft_striteri, ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, and ft_putnbr_fd. These functions involve string manipulation, memory allocation, and file descriptor operations.
The project has a bonus part that include functions like ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast, ft_lstadd_back, ft_lstdelone, and ft_lstclear. These functions allow you to create, modify, and delete nodes in a linked list.

## Requirements

The project has technical considerations such as not allowing global variables, using static helper functions if necessary, placing all files at the root of the repository, and compiling with specific flags. The project must be written in C and follow the Norm, which is a set of coding style rules. It should also handle memory properly, avoiding leaks and unexpected errors. The Makefile for the project must include specific rules and flags.
