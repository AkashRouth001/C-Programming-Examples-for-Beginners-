# C Programming Examples for Beginners 🚀

Welcome to **C Programming Examples for Beginners**! This repository contains a collection of fundamental C programming concepts and practical examples that will help you grasp the basics of C. Whether you’re new to programming or want to refine your skills, this repository is perfect for you.

C is a powerful, general-purpose programming language that has influenced many other modern programming languages. It’s known for its efficiency and control over system resources, making it a great starting point for aspiring programmers.

Let's dive into the core concepts of C with easy-to-understand examples!

---

## Table of Contents 📚
1. [Hello World Program](#hello-world-program)
2. [Data Types & Variables](#data-types--variables)
3. [Control Structures](#control-structures)
4. [Functions](#functions)
5. [Arrays](#arrays)
6. [Pointers](#pointers)
7. [Loops](#loops)
8. [Strings](#strings)
9. [Structures](#structures)
10. [File Handling](#file-handling)

---

## 1. **Hello World Program** 💻

The classic **Hello World** program is the simplest way to get started with C. It prints "Hello, World!" to the screen.

### Example:
```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

---

## 2. **Data Types & Variables** 🔢

In C, variables are used to store data, and each variable has a data type. The basic data types include `int`, `float`, `char`, and `double`.

### Example:
```c
#include <stdio.h>

int main() {
    int age = 25;
    float height = 5.9;
    char initial = 'A';
    
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Initial: %c\n", initial);
    
    return 0;
}
```

---

## 3. **Control Structures** 🔀

Control structures such as `if`, `else`, `switch`, and `case` allow you to control the flow of execution in your program.

### Example:
```c
#include <stdio.h>

int main() {
    int number = 10;
    
    if (number > 0) {
        printf("Positive Number\n");
    } else {
        printf("Negative Number\n");
    }
    
    return 0;
}
```

---

## 4. **Functions** 🔧

Functions are used to break the program into smaller, reusable blocks of code. You can define your own functions in C.

### Example:
```c
#include <stdio.h>

void greet() {
    printf("Hello, Welcome to C Programming!\n");
}

int main() {
    greet();  // Calling the function
    return 0;
}
```

---

## 5. **Arrays** 📊

Arrays store multiple values of the same type in a single variable. They are useful for working with collections of data.

### Example:
```c
#include <stdio.h>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i + 1, numbers[i]);
    }
    return 0;
}
```

---

## 6. **Pointers** 🧭

Pointers are variables that store the memory address of another variable. They are essential for dynamic memory allocation and array manipulation.

### Example:
```c
#include <stdio.h>

int main() {
    int num = 100;
    int *ptr = &num;
    
    printf("Value: %d\n", num);
    printf("Pointer points to address: %p\n", ptr);
    printf("Dereferenced value: %d\n", *ptr);
    
    return 0;
}
```

---

## 7. **Loops** 🔄

Loops allow you to repeat a block of code multiple times. Common loops in C include `for`, `while`, and `do-while`.

### Example (For Loop):
```c
#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        printf("Iteration %d\n", i);
    }
    return 0;
}
```

---

## 8. **Strings** 🎤

Strings in C are arrays of characters terminated by a null character (`\0`). They are used to handle text.

### Example:
```c
#include <stdio.h>

int main() {
    char name[] = "Alice";
    
    printf("Name: %s\n", name);
    
    return 0;
}
```

---

## 9. **Structures** 🏗️

Structures allow you to group different data types under one name, making it easier to manage complex data.

### Example:
```c
#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person p1 = {"John", 30};
    
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    
    return 0;
}
```

---

## 10. **File Handling** 📂

C provides functions for reading from and writing to files, allowing you to store and retrieve data permanently.

### Example (Write to a file):
```c
#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "w");
    
    if (file != NULL) {
        fprintf(file, "This is a sample text.");
        fclose(file);
        printf("Data written to file successfully.\n");
    } else {
        printf("Error opening file.\n");
    }
    
    return 0;
}
```

---

## **How to Contribute** 🌱

1. Fork the repository.
2. Clone your fork to your local machine.
3. Create a new branch for your changes.
4. Add your new example or improve the existing ones.
5. Push your changes and create a pull request.

---

## **Resources** 🔗

- [C Programming Tutorials](https://www.tutorialspoint.com/cprogramming/)
- [GeeksforGeeks C Programming](https://www.geeksforgeeks.org/c-programming-language/)
- [C Programming Language Book by Brian W. Kernighan & Dennis M. Ritchie](https://www.amazon.com/C-Programming-Language-2nd/dp/0131103628)

---

### **Happy Coding!** 🎉

Dive into C programming and start building your own applications. With consistency and practice, you’ll master C in no time. Enjoy the journey! 🚀
