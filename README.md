### MEMORY LAYOUT OF C PROGRAM 
<img src="https://github.com/minchangggg/Basic_C/assets/125820144/5184976f-8c41-46ec-b044-072d09963084" alt="hehe" width="20" /> ```How C program structure the memory area?```

<img src="https://media.geeksforgeeks.org/wp-content/uploads/memoryLayoutC.jpg" alt="meme" width="300" /> 

**1, Text segment -> Code segment** 

+ Contains executable instructions 
+ Sharable                         
+ Read-only                        

**2, Initialized Data segment -> Data Segment**

| Global variables & Static variables | Initialized (≠0) by programmer |

Ex:
#include<stdio.h>

/* global variables stored in the read-write part of
   initialized data segment
 */
int global_var = 50;
char* hello = "Hello World";
/* global variables stored in the read-only part of
   initialized data segment
 */
const int global_var2 = 30;

int main() {
    static int a = 10; // static variable stored in initialized data segment
    // ...
    return 0;
}

**3,  Uninitialized Data segment -> BSS segment**

| Global variables & Static variables | Uninitialized or Initialized (=0) by programmer |

Ex:

```#include <stdio.h>                                                                           ```

```int global_variable; // Uninitialized global variable stored in the bss segment              ```

```int main() {                                                                                 ```

```    static int static_variable = 0; // Uninitialized static variable stored in bss segment   ```

```    // ...                                                                                   ```

```    return 0;                                                                                ```

```}                                                                                            ```


`#include <stdio.h>                                                                          

int global_variable; // Uninitialized global variable stored in the bss segment              

int main() {                                                                                 

    static int static_variable = 0; // Uninitialized static variable stored in bss segment   

    // ...                                                                                   

    return 0;                                                                                

}`                                                                            `

**4, Heap -> Dynamic Memory Allocation**

+ malloc/ calloc/ realloc/ free
+ new/ delete
> Forget to deallocate memory in Heap -> cause Memory leak

**5, Stack -> Automatic Variable Storage**

| LIFO structure

**CONCLUSION**

-
-
-
-

***

### Chapter 1: Variables and Constants
**1, How to Define Variable and Constant in C ?**

Variables are containers for storing data values, like numbers and characters.
Constants are name given to the variables whose values can’t be altered or changed.

**2, Rules for Naming Variables and Constants**

- The name of the variable must not begin with a digit.
- A variable name can consist of digits, alphabets, and even special symbols such as an underscore ( _ ).
- A variable name must not have any keywords, for instance, float, int, etc.
- There must be no spaces or blanks in the variable name.
  
**3, Syntax to Define Variables and Constants**
  
3.1, Syntax to Define Variable: biến toàn cục và biến cục bộ
- Cú pháp khai báo: ```**<kiểu dữ liệu> <danh sách biến>;**```
  
3.2, Syntax to Define Constant:
There are two simple ways in C to define constants 
- Use of the ‘#define’ preprocessor
- Use of the ‘const’ Keyword
a, The ‘#define’ preprocessor
b, The ‘const’ Keyword

**4, Data Types**

|          Types          |                                             Description                                                          | 
| :-----------------------| :--------------------------------------------------------------------------------------------------------------- | 
| Primitive Data Types    | the most basic data types that are used for representing simple values such as integers, float, characters, etc. | 
| User Defined Data Types | defined by the user himself.                                                                                     | 
| Derived Types           | derived from the primitive or built-in datatypes are referred to as Derived Data Types.                          | 

<img src="https://media.geeksforgeeks.org/wp-content/uploads/20220808115138/DatatypesInC.jpg" alt="meme" width="400" /> 

**4, Input and Output Functions**

<img src="https://github.com/minchangggg/Basic_C/assets/125820144/15f561a6-db53-4841-8622-7fd2933ce5a4" alt="meme" width="15" /> **scanf()** ``` scanf(“%X”, &variableOfXType); ``` with %X is the format specifier in C

<img src="https://github.com/minchangggg/Basic_C/assets/125820144/4f289db3-e596-4caa-8168-89c478f6d161" alt="meme" width="15" /> **printf()** ``` printf(“%X”, variableOfXType); ``` with %X is the format specifier in C

**Example**

|               |          Input                |                  Output                  | 
| :-------------| :-----------------------------| :----------------------------------------| 
| Integer       | scanf("%d", &intVariable);    | printf("%d", intVariable);               | 
| Float         | scanf("%f", &floatVariable);  | printf("%f", floatVariable);             | 
| Character     | scanf("%c", &charVariable);   | printf("%c", charVariable);              | 



***

### Chapter 2: Function

*** 

### Chapter 3: Conditional

**Conditional or Ternary Operator (?:)**

**Syntax of Conditional/Ternary Operator**

```variable = Expression1 ? Expression2 : Expression3;```

Or ```variable = (condition) ? Expression2 : Expression3;```

Or ```(condition) ? (variable = Expression2) : (variable = Expression3);```

It can be visualized into an if-else statement as: 

```if(Expression1) {```

```    variable = Expression2;```

```}```

```else {```

```    variable = Expression3;```

```}```

*** 

### Chapter 4: SWITCH CASE
**Syntax of switch Statement in C**

```switch(expression) {```

```        case value1: statement_1;     ```

```                     break;           ```

```        case value2: statement_2;     ```

```                     break;           ```

```        . . .                         ```

```        case value_n: statement_n;    ```

```                      break;          ```

```        default: default_statement;   ```

```}                                     ```

*** 

### Chapter 5: Loop control statements

***

### Chapter 6: TYPEDEF

*** 

### Chapter 7: STRUCT

*** 

### Chapter 8: ENUM

*** 

### Chapter 9: Pointer

**1, Pointers**


**2, Pointers and Arrays**


**3, Pointers and Two-dimensional Arrays**


**4, Pointer to pointer**


*** 

### Chapter 10: MẢNG
