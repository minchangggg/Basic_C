### MEMORY LAYOUT OF C PROGRAM 
<img src="https://github.com/minchangggg/Basic_C/assets/125820144/bf240676-debf-45d2-abdd-08e3dcd73283" alt="hehe" width="20" /> ```How C program structure the memory area?```   https://www.scaler.com/topics/c/memory-layout-in-c/
<img src="https://scaler.com/topics/images/Diagram-for-memory-structure-of-C.webp" alt="meme" width="500" /> 

**1, Text segment -> Code segment** 

+ Contains executable instructions 
+ Sharable                         
+ Read-only                        

**2, Initialized Data segment -> Data Segment**

| Global variables & Static variables | Initialized (≠0) by programmer |

Ex:
#include<stdio.h>

// global variables stored in the read-write part of initialized data segment 
 
int global_var = 50;

char* hello = "Hello World";

// global variables stored in the read-only part of initialized data segment 

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
                                                                        
**4, Heap -> Dynamic Memory Allocation**

+ malloc/ calloc/ realloc/ free
+ new/ delete
> Forget to deallocate memory in Heap -> cause Memory leak

**5, Stack -> Automatic Variable Storage**

<img src="https://scaler.com/topics/images/stack-segment.webp" alt="meme" width="300" /> 

| LIFO structure (Last In First Out)

| Grows in the direction opposite to heap

| Function frame (Stack segment stores the value of local variables and values of parameters passed to a function along with some additional information like the instruction's return address, which is to be executed after a function call )



**CONCLUSION**

***

### Flowchart In C Program
```Here are some conventional symbols for a basic flowchart```

<img src="https://assets-global.website-files.com/6184b461a39ff1011f8c0582/620287eaa88698331bc3940e_61de99e8171cc6468145551d_flowchart-symbols-800.png" alt="meme" width="300" /> 

```Flowchart Guidelines```
> Step 1: Start the program.
>
> Step 2: Begin Process 1 of the program.
>
> Step 3: Check some conditions and take a Decision (“yes” or “no”).
>
> Step 4: If the decision is “yes”, proceed to Process 3. If the decision is “no”, proceed to Process 2 and return to Step 2.
> 
> Step 5: End of the program.

<img src="https://assets-global.website-files.com/6184b461a39ff1011f8c0582/625d09569181da46d5a8ff53_New%20Flowchart%20(4).png" alt="meme" width="300" /> 

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

<img src="https://assets-global.website-files.com/6184b461a39ff1011f8c0582/620239fdd8763fe2a551f490_If-else%20Flowchart.png" alt="meme" width="300" /> 

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

```switch(expression) {                  ```

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
> for loop
>
> while loop
> 
> do-while loop

**1, for loop**

a, Syntax

```for (initialization ; condition ; increment / decrement) {   ```

```  //...                                                      ```

```}                                                            ```

b, Flowchart

<img src="https://assets-global.website-files.com/6184b461a39ff1011f8c0582/623c0c5447c67e81d4ac3f35_for-loop-flowchart.png" alt="meme" width="300" /> 

c, Example

**2, while loop**

<img src="https://assets-global.website-files.com/6184b461a39ff1011f8c0582/623c0c66fad507a80764a3f5_while-loop-flowchart.png" alt="meme" width="300" /> 

**3, do-while loop**

<img src="https://assets-global.website-files.com/6184b461a39ff1011f8c0582/623c0c5447c67e81d4ac3f35_for-loop-flowchart.png" alt="meme" width="300" /> 

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
