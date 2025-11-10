# Libft – My First Project at 42 Lyon 🎓

Welcome to **Libft!** 🎉 My very first project at **42 Lyon**, where I built my own C library from scratch. 🔧

---

## 📝 Project Description

**Libft** is a personal C library that contains a collection of essential functions for handling strings, memory, and data conversions.
It serves as a reusable foundation for future projects at 42, helping to save time and improve code reliability.

---

## 📚 Main Features

### 🔹 Part 1 – Standard C Library Functions

Re-implemented standard functions such as:
`ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_strlen`, `ft_strlcpy`, `ft_strlcat`,
`ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_memchr`, `ft_memcmp`, `ft_strnstr`, `ft_atoi`,
`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`,
plus allocation functions: `ft_calloc`, `ft_strdup`.

---

### 🔹 Part 2 – Additional Functions

Extra utility functions not found in the standard C library:

* `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`
* `ft_strmapi`, `ft_striteri`
* File descriptor output: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

---

### 🔹 Bonus Part – Linked Lists

Once the mandatory part was complete, I implemented linked list utilities:
`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`,
`ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

---

## 🛠️ Usage

### ⚙️ Compilation

The project includes a **Makefile** that compiles the source files into a static library called **libft.a**.

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

---

### 💡 Example of Use

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

## 🚀 Learning Goals

This project helped me to: <br>
✅ Strengthen my understanding of the **C language** <br>
✅ Master **memory management** and **pointers** <br>
✅ Use **Makefiles** to automate builds <br>
✅ Build a **solid foundation** for all future 42 projects

---

## 🤝 Contribution

This project was created as part of my training at **42 Lyon**.
Suggestions and improvements are always welcome! 😊

---

## 🛡️ License

This project follows the **42 School License**.
You are free to use and modify it for educational purposes.

---

✨ **Thanks for visiting my Libft project!** 🚀
