# 🚀 String Length Counter in C

A simple **C program** that counts the number of characters in a user-input string using `strlen()`.

## ✨ Features

- ✅ Uses `fgets()` for safe string input handling.
- ✅ Removes the extra newline character (`\n`).
- ✅ Displays the total number of characters.

## 🛠️ How to Run

1️⃣ **Clone this repository**

```bash
git clone https://github.com/yourusername/string-length-counter.git
```

2️⃣ **Navigate to the project folder**

```bash
cd string-length-counter
```

3️⃣ **Compile the code**

```bash
gcc string_counter.c -o string_counter
```

4️⃣ **Run the program**

```bash
./string_counter
```

## 📜 Code Overview

```c
#include <stdio.h>
#include <string.h>

int main() { 
    char string[100];
    int length;

    printf("Type the string to count:\n");
    fgets(string, sizeof(string), stdin);

    length = strlen(string) - 1;

    printf("The number of characters in the string is: %d\n", length);
    return 0;
}
```

## 📷 Example Output

```
Type the string to count:
Hello, GitHub!
The number of characters in the string is: 13
```

