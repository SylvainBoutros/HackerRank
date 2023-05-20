# Week 5
8 problems to solve focusing on basic problem solving skills.

## Max Min
You will be given a list of integers, **arr**, and a single integer **k**. You must create an array of length **k** from elements of **arr** such that its unfairness is minimized. Call that array **arr'**. Unfairness of an array is calculated as **max(arr') - min(arr')** 
Where:
- max denotes the largest integer in **arr'**
- min denotes the smallest integer in **arr'**

## Strong Password
Louise joined a social networking site to stay in touch with her friends. The signup page required her to input a name and a password. However, the password must be strong. The website considers a password to be strong if it satisfies the following criteria:

+ Its length is at least 6.
+ It contains at least one digit.
+ It contains at least one lowercase English character.
+ It contains at least one uppercase English character.
+ It contains at least one special character. The special characters are: !@#$%^&*()-+
+ She typed a random string of length  in the password field but wasn't sure if it was strong. Given the string she typed, can you find the minimum number of characters she must add to make her password strong?
Note: Here's the set of types of characters in a form you can paste in your solution:
```
numbers = "0123456789"
lower_case = "abcdefghijklmnopqrstuvwxyz"
upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
special_characters = "!@#$%^&*()-+"
```

## Dynamic Array
+ Declare a 2-dimensional array, **arr**, of **n** empty arrays. All arrays are zero indexed.
+ Declare an integer, **lastAnswer**, and initialize it to **0**
+ There are **2** types of queries, given as an array of strings for you to parse:
    1. Query: ```1 x y```
        1. Let **idx = ((x XOR lastAnswer) % n)**
        2. Append the integer **y** to **arr[idx]**
    2. Query: ```2 x y```
        1. Let **idx = ((x XOR lastAnswer) % n)***
        2. Assign the value **arr[idx][y % size(arr[idx])]** to **lastAnswer**
        3. Store the new value of **lastAnswer** to an answers array

## Smart Number 2
In this challenge, the task is to debug the existing code to successfully execute all provided test files.

A number is called a smart number if it has an odd number of factors. Given some numbers, find whether they are smart numbers or not.

Debug the given function ```is_smart_number``` to correctly check if a given number is a smart number.

## Missing Numbers
Given two arrays of integers, find which elements in the second array are missing from the first array.

## The Full Counting Sort
Use the counting sort to order a list of strings associated with integers. If two strings are associated with the same integer, they must be printed in their original order, i.e. your sorting algorithm should be stable. There is one other twist: strings in the first half of the array are to be replaced with the character - (dash, ascii 45 decimal).

Insertion Sort and the simple version of Quicksort are stable, but the faster in-place version of Quicksort is not since it scrambles around elements while sorting.

Design your counting sort to be stable.

## Grid Challenge
Given a square grid of characters in the range ascii[a-z], rearrange elements of each row alphabetically, ascending. Determine if the columns are also in ascending alphabetical order, top to bottom. Return ```YES``` if they are or ```NO``` if they are not.

## Sansa and XOR
Sansa has an array. She wants to find the value obtained by XOR-ing the contiguous subarrays, followed by XOR-ing the values thus obtained. Determine this value.