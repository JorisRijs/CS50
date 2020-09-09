# Week 1
## Subject: C

```
#include <stdio.h>

int main(void){
	printf("Hello, world\n1");
}
```

 Make use of the CS50 IDE for a standardized dev enviorment
 
 For running code a program is needed which has as input my source code and as output, machine code. This is also known as a compiler.
 
 For making a new line in C, use \n
 
 <B>Piece of code to ask for a user name and concatinate</b>
 
 ```
 #include <cs50.h>
 #include <stdio.h>
 
 int main(void){
 	string answer = get_string("What is your name?\n");
 	printf("Hello, %s\n", answer);
 }
 ```
 Make use of -lcs50 within the compiling command to link my code with the cs50 libary 
 <br>(This is only possible within the cs50 IDE)
 <br> or just use make
 
### Variables

```
	int counter = 0;
	# this creates an variable which hast the type int, with the name counter end has the value 0
	counter = counter + 1;
	# this adds the value of 1 to the variable counter, it also assumes that the variable exists
	counter++;
	counter += 1;
	# Other way to write the addition
```

### Comditions
#### If statement

```
	if (x < y){
		#thing to execute
		printf("X is less than Y\n");
	}
```
#### If else statement

```
	if (x < y){
		#thing to execute
		printf("X is less than Y\n");
	}
	else{
		printf("X is not less than Y\n");
	}
```

#### Else if statement

```
	if (x < y){
	
	}
	else if (x > y){
	
	}
	else if (x == y){
	
	}
```
The single equal sign is for assignment and dual equal signs is for equality.<br>
In the case of the else if statement above the last statement is redundant, which means that it can be converted to an else statement.

### Loops
#### While

```
	while(Boolean expression){
		#code to execute
	}
	#infinite loop
	while(True){
		printf();
	}
```

#### do while



#### For

Multiple options:

```
	int i = 0;
	while(i<50){
		printf("hello, world\n");
		i++;
	}
```
<b>Correct way to do a for loop</b>

```
	for (int i = 0;i <50;i++){
		printf("hello, world\n");
	}
```

### Data Types

- Bool
- char
- double
- float
- int
- long
- string

### included functions

- get_char
- get_double
- get_float
- get_string
- get_int
- get_long

### String placeholders

- %c char
- %f float, double
- %i int
- %li long
- %s string

### mathematic operators

- \+
- \-
- \*
- /
- %

### Logical operators

- || = or
- && = and
- ! = not
- 
