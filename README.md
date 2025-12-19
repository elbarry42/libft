*This project was completed as part of the 42 curriculum by elbarry.*

# Libft 🎓

Welcome to **Libft**, my first project at **42 Lyon**.  
The goal of this project is to build a personal C library by reimplementing standard C functions and creating reusable tools for future projects.

<div align="center">

![42 Badge](https://github.com/elbarry42/elbarry42/blob/main/42_badges/libftm.png)

</div>

---

## 📝 Project Description

**Libft** is a custom static C library that reimplements essential functions from the C standard library, along with additional utility functions and linked list tools.

This project focuses on understanding:
- how standard C functions work internally,
- memory allocation and deallocation,
- pointer manipulation,
- clean code structure and reuse.

The compiled library (`libft.a`) will be reused throughout the entire 42 curriculum.

---

## 📚 Library Content

### 🔹 Part 1 – Standard C Library Functions

Reimplementation of standard libc functions with identical behavior:

- Character tests:  
  `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- Case conversion:  
  `ft_toupper`, `ft_tolower`
- String & memory handling:  
  `ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`,  
  `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`,  
  `ft_memchr`, `ft_memcmp`, `ft_strnstr`
- Conversion & allocation:  
  `ft_atoi`, `ft_calloc`, `ft_strdup`

---

### 🔹 Part 2 – Additional Functions

Additional utility functions extending the standard library:

- String manipulation:  
  `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`
- Conversions:  
  `ft_itoa`
- Iteration with function pointers:  
  `ft_strmapi`, `ft_striteri`
- File descriptor output:  
  `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

All functions properly handle memory allocation errors.

---

### 🔹 Part 3 – Linked Lists

Implementation of a linked list API using the following structure:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
````

Implemented functions:

* `ft_lstnew`
* `ft_lstadd_front`
* `ft_lstsize`
* `ft_lstlast`
* `ft_lstadd_back`
* `ft_lstdelone`
* `ft_lstclear`
* `ft_lstiter`
* `ft_lstmap`

Special care was taken to ensure proper memory management, especially in failure cases.

---

## ⚙️ Compilation & Usage

The project includes a Makefile that compiles the source files into a static library called **libft.a**.

```bash
# Compile mandatory parts (Part 1 & 2)
make

# Compile all parts (including Part 3)
make bonus

# Remove object files
make clean

# Remove object files and the library
make fclean

# Recompile everything
make re
```

---

### 💡 Example

```c
#include "libft.h"

int main(void)
{
	char *str = "Hello, 42!";
	int len = ft_strlen(str);

	printf("String length: %d\n", len);
	return (0);
}
```

---

## 🎯 Learning Outcomes

Through this project, I learned to:

* Deepen my understanding of the **C language**
* Manage memory safely using `malloc` and `free`
* Work with **pointers and function pointers**
* Implement and manipulate **linked lists**
* Use **Makefiles** to automate builds
* Follow strict coding standards (**Norminette**)

---

## 🛡️ License

This project follows the **42 School License**
and is intended for educational purposes only.

---

✨ Thank you for checking out my **Libft** project!
