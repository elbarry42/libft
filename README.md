# Libft – My First Project at 42 Lyon 🎓

Welcome to **Libft!** 🎉 My very first project at **42 Lyon**, where I recreate a standard C library from scratch. 🔧

---

## 📝 Project Description

**Libft** is a custom C library that gathers essential utility functions for strings, memory management, and data conversion — functions that will be reused throughout many future 42 projects.

---

## 📚 Main Features

### 🔹 Part 1 – Standard C Library Functions

* **Memory management:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memccpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
* **String manipulation:** `ft_strlen`, `ft_strdup`, `ft_strcpy`, `ft_strncpy`, `ft_strcat`, `ft_strncat`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strstr`, `ft_strnstr`, `ft_strcmp`, `ft_strncmp`
* **Conversions:** `ft_atoi`
* **Character tests:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
* **Character transformations:** `ft_toupper`, `ft_tolower`

### 🔹 Part 2 – Additional Functions

* **Dynamic memory:** `ft_memalloc`, `ft_memdel`
* **Dynamic strings:** `ft_strnew`, `ft_strdel`, `ft_strclr`
* **String iteration:** `ft_striter`, `ft_striteri`, `ft_strmap`, `ft_strmapi`
* **Comparison & modification:** `ft_strequ`, `ft_strnequ`, `ft_strsub`, `ft_strjoin`, `ft_strtrim`, `ft_strsplit`
* **Conversion:** `ft_itoa`
* **Output:** `ft_putchar`, `ft_putstr`, `ft_putendl`, `ft_putnbr` (and their `_fd` versions)

### 🔹 Bonus Part – Linked Lists

* `ft_lstnew`, `ft_lstdelone`, `ft_lstdel`, `ft_lstadd`, `ft_lstiter`, `ft_lstmap`

---

## 🛠️ Usage

### Compilation

The library is compiled into a **libft.a** file using the provided Makefile.

```bash
# Compile the library
make  

# Remove object files
make clean  

# Remove object files and the library
make fclean  

# Recompile everything
make re  
```

### Example of Use

```c
#include "libft.h"

int main(void)
{
    char *str = "Hello, 42!";
    int len = ft_strlen(str);
    printf("String length is: %d\n", len);
    return (0);
}
```

---

## 🚀 Learning Goals

This project helped me to:
✅ Strengthen my understanding of the **C language**.
✅ Master **pointers** and **memory management**.
✅ Use **Makefiles** to automate compilation.
✅ Build a **reusable and clean codebase** for future 42 projects.

---

## 🤝 Contribution

This project is part of my journey at **42 Lyon**.
Suggestions and discussions are always welcome! 😊

---

## 🛡️ License

This project follows the **42 School license**.
Free to use and modify for educational purposes.

---

✨ **Thank you for visiting my Libft project!** 🚀
