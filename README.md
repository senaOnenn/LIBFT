# 📚 Libft - My Own C Library

Libft is the foundational project of the 42 curriculum. The goal is to recreate a set of standard C library functions, as well as additional utility functions, to be used in all future C projects at 42.

## 🛠️ Project Overview
Since 42 students are generally not allowed to use standard libraries, we develop our own `libft.a` (a static library). This project involves implementing over 40 functions that handle string manipulation, memory management, and linked list operations.

## 🚀 Key Categories

### 1. Libc Functions
Re-implementation of essential functions from `<string.h>`, `<ctype.h>`, and `<stdlib.h>`:
*   **Memory:** `memset`, `bzero`, `memcpy`, `memmove`, `memchr`, `memcmp`, `calloc`.
*   **Strings:** `strlen`, `strlcpy`, `strlcat`, `strchr`, `strrchr`, `strnstr`, `strncmp`.
*   **Conversion:** `atoi`, `itoa`.
*   **Character Checks:** `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`.

### 2. Additional Functions
Non-standard functions that are highly useful for C programming:
*   `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`.
*   `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.


## 🔧 Technical Skills
*   **Static Library Creation:** Using `ar` and `ranlib` to create `.a` files.
*   **Memory Management:** Deep understanding of `malloc` and `free` to prevent leaks.
*   **Makefile Automation:** Advanced Makefile rules including `all`, `clean`, `fclean`, `re`, and `bonus`.

## 📂 Project Structure
*   `libft.h`: The header file containing all function prototypes and the `t_list` structure.
*   `ft_*.c`: Individual C source files for each function.
*   `Makefile`: Efficient build system with automatic dependency management.

## 💻 Installation & Usage

1.  **Clone the repository:**
    ```bash
    git clone [https://github.com/senaOnenn/libft.git](https://github.com/senaOnenn/libft.git)
    cd libft
    
2.  **Compile the library:**

    ```bash
    make
This will generate the libft.a file.

Include it in your project:
Compile your project files with libft.a:

    ```bash
    gcc your_file.c -L. -lft -o your_program
Developed as part of the 42 Türkiye Software Engineering Program
