## MEMORY LAYOUT OF C PROGRAM
How C program structure the memory area?

<img src="https://media.geeksforgeeks.org/wp-content/uploads/memoryLayoutC.jpg" alt="meme" width="250" /> 

**1, Text segment -> Code segment** 

+ Contains executable instructions 
+ Sharable                         
+ Read-only                        

**2, Initialized Data segment -> Data Segment**

| Global variables & Static variables | Initialized (≠0) by programmer |

**3,  Uninitialized Data segment -> BSS segment**

| Global variables & Static variables | Uninitialized or Initialized (=0) by programmer |

**4, Heap -> Dynamic Memory Allocation**

+ malloc/ calloc/ realloc/ free
+ new/ delete
> Forget to deallocate memory in Heap -> cause Memory leak

**5, Stack -> Automatic Variable Storage**

| LIFO structure

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
  
a, Syntax to Define Variable: biến toàn cục và biến cục bộ
- Cú pháp khai báo:
> **<kiểu dữ liệu> <danh sách biến>;**
  
b, Syntax to Define Constant:
Cách 1: Use of the ‘#define’ preprocessor
cách 2: Use of the ‘const’ Keyword

**4, Data Types**

|          Types          |                                             Description                                                          | 
| :-----------------------| :--------------------------------------------------------------------------------------------------------------- | 
| Primitive Data Types    | the most basic data types that are used for representing simple values such as integers, float, characters, etc. | 
| User Defined Data Types | defined by the user himself.                                                                                     | 
| Derived Types           | derived from the primitive or built-in datatypes are referred to as Derived Data Types.                          | 

<img src="https://media.geeksforgeeks.org/wp-content/uploads/20220808115138/DatatypesInC.jpg" alt="meme" width="400" /> 

**4, Input and Output Functions**

**scanf()**

> **scanf(“%X”, &variableOfXType);** with %X is the format specifier in C

**printf()**

> **printf(“%X”, variableOfXType);** with %X is the format specifier in C

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

### Chapter 5: VÒNG LẶP

***

### Chapter 6: TYPEDEF

*** 

### Chapter 7: STRUCT

*** 

### Chapter 8: ENUM

*** 

### Chapter 9: CON TRỎ

*** 

### Chapter 10: MẢNG
