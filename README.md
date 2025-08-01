# Array and String-Based C++ Programs  

**Name**: Pal Jain  
**PRN**: 24070123067  
**Class**: ENTC A3  
**Title**: Arrays and Strings in C++

This repository contains C++ programs that demonstrate core operations on **arrays** and **strings**. Each program is backed by an explanation, algorithm, and expected output. The goal is to develop strong foundational logic in handling data structures like arrays and strings in C++.

## Arrays in C++

# What is an Array?
An array is a data structure that can store a fixed-size sequential collection of elements of the same type. Arrays are used to store multiple values in a single variable instead of declaring separate variables for each value. In C++, arrays are declared with a specified size, and elements are accessed using indices starting from 0.

# Key Features:
Stores elements in contiguous memory locations.
Elements can be accessed randomly using indices.
Can hold primitive data types or user-defined data types.

# Types of Arrays
One-dimensional array: Linear collection of elements.
Multi-dimensional array: Arrays of arrays (e.g., 2D arrays representing matrices).

# Operations on Arrays
Accessing elements: arr[index]

# 1. Print Array in Reverse  
**Theory**: Reversing an array means displaying the elements from the last index to the first using a loop.  
**Algorithm**:
- Initialize array with values.
- Loop from last index to first.
- Print each element.
  
Output:

50

40

30

20

10

# 2. Find Minimum and Maximum in Array  
**Theory**: Traverse the array and compare each element with current `min` and `max`.  
**Algorithm**:
- Initialize `min` and `max` with `arr[0]`.
- Loop through array:
  - If current element < min → update min.
  - If current element > max → update max.
  - 
Output:

The minimum number is: 20

The maximum number is: 90


# 3. Sum of All Elements in Array  
**Theory**: Accumulate values using a loop.  
**Algorithm**:
- Initialize a `sum` variable to 0.
- Add each element to `sum` in loop.  

Output:

Total sum is: 260

# 4. Taking input and giving output as array
Algorithm:

Declare an array of fixed size.
Use a loop to take input values from the user.
Store each input value into the array.
Use another loop to print the array elements.
Code Output:

The marks of student are:
99
89
78
58
68
85
99 89 78 58 68 85 


# Program 4: Average of Array Elements
Problem Statement: Write a code to calculate average of array elements.

Code Output:

The numbers of array are:
12
24
21
28
32
20
12 24 21 28 32 20 
The sum of elements of array are:
137
The average of elements of array are:
22

# Program 5: Search for a Key in Array
Problem Statement: Write a code to store marks in an array and find key location after defining a key.

Code Output:

The marks of student are:
89
98
70
99
66
76
89 98 70 99 66 76 
key found at location: 4

# STRINGS
# What is a String?
A string is a sequence of characters, usually stored as an array of characters, terminated by a special character (like \0 in C) or managed as an object in higher-level languages.

# Key Characteristics
Immutable in some languages (e.g., Python, Java)
Mutable in others (e.g., C with character arrays)
Often implemented as arrays of characters internally

# Common Operations
Concatenation (joining two strings)
Substring extraction
Searching (finding a character or substring)
Comparison
Length calculation

# Program 1: String Input and Display
Problem Statement: Write a code which takes a string as input from user and display it out.

Algorithm:

Declare a string variable.
Prompt the user to enter a string.
Read the string using cin.
Print the string.
Code Output:

These are the  various ways in which we can display a string
Enter the string:
C++
C++
C++
C++


# Program 2: String Concatenation
Problem Statement: Write a code to take two strings and concatenate them.

Algorithm:

Declare two string variables.
Take input for both strings using cin.
Concatenate the strings using + operator.
Display the concatenated result.

Code Output:

Enter the string:
Pal
Enter the string:
Jain
The concatenated string is: Pal Jain

Explanation:
Takes two strings and joins them using + operator.

# Program 3: Reverse a String
Problem Statement: Write a code which reverses a string.

Code Output:

Enter a string:
Hello
olleH

Explanation:

Traverses the string backward using loop to reverse.

# Program 4: Palindrome Check
Problem Statement: Write a code to check whether a string is palindrome or not.

Code Output:

Enter the string:
racecar
It is a palindrome.

Explanation:

Compares characters from both ends inward.
If mismatch occurs, it breaks and reports it's not a palindrome.


# CONCLUSION
In this experiment, we explored the concepts of arrays and strings in C++ through various hands-on programs. Arrays help in managing fixed-size data collections, and we implemented functionalities like input/output, reversal, summation, and searching. Strings provide a flexible way to handle character data, where we applied operations such as input/output, concatenation, reversal, and palindrome checking. Understanding and implementing these basic operations build a strong foundation for handling more complex data structures and algorithms in future programming challenges.
