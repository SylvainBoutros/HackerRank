# Week 2 
8 problems to solve focusing on basic problem solving skills.

## Lonely Integer
Given an array of integers, where all elements but one occur twice, find the unique element.

## Grading Students
HackerLand University has the following grading policy:
- Every student receives a *grade* in the inclusive range from 0 to 100.
- Any *grade* less than **40** is a failling grade.

Sam is a professor at the university and likes to round each student's *grade* according to these rules:
- If the difference between the *grade* and the next multiple of **5** is less than **3**, round *grade* up to the next multiple of **5**.
- If the value of *grade* is less than **38**, no rounding occurs as the result will still be a failing grade.

**Example**
- ***grade* = 84** round to **85** (85 - 84 is less than 3)
- ***grade* = 29** do not round (result is less than 40)
- ***grade* = 57** do not round (60 - 57 is 3 or higher)

Given the initial value of *grade* for each of Sam's ***n*** students, write code to automate the rounding process.

## Flipping Bits
You will be given a list of 32 bit unsigned integers. Flip all the bits (**1 -> 0** and **0 -> 1**) and return the result as an unsigned integer.

## Diagonal Difference
Given a square matrix, calculate the absolute difference between the sums of its diagonals.

## Counting Sort 1
Quicksort usually has a running time of **n x log(n)**, but is there an algorithm that can sort even faster? In general, this is not possible. Most sorting algorithms are comparison sorts, i.e., they sort a list just by comparing the elements to one another. A comparison sort algorithm cannot beat **n x log(n)** (worst-case) running time, since **n x log(n)** represents the minimum number of comparisons needed to know where to place each element. For more details, you can see [these notes](http://www.cs.cmu.edu/~avrim/451f11/lectures/lect0913.pdf) (PDF).
**Alternative Sorting**
Another sorting method, the counting sort, does not require comparison. Instead, you create an integer array whose index range covers the entire range of values in your array to sort. Each time a value occurs in the original array, you increment the counter at that index. At the end, run through your counting array, printing the value of each non-zero valued index that number of times.

## Counting Valleys
An avid hiker keeps meticulous records of their hikes. During the last hike that took exactly ***steps*** steps, for every step it was noted if it was an uphill ***U***, or a downhill, ***D*** step. Hikes always start and end at sea level, and each step up or down represents a **1** unit change in altitude. We define the following terms:
- A mountain is a sequence of consecutive steps above sea level, starting with a step up from sea level and ending with a step down to sea level.
- A valley is a sequence of consecutive steps below sea level, starting with a step down from sea level and ending with a step up to sea level.

Given the sequence of up and down steps during a hike, find and print the number of valleys walked through.

## Pangrams
A pangram is a string that contains every letter of the alphabet. Given a sentence determine whether it is a pangram in the English alphabet. Ignore case. Return either ***pangram*** or ***not pangram*** as appropriate.

## Mars Exploration
A space explorer's ship crashed on Mars! They send a series of ***SOS*** messages to Earth for help.

Letters in some of the ***SOS*** messages are altered by cosmic radiation during transmission. Given the signal received by Earth as a string, ***s***, determine how many letters of the ***SOS*** message have been changed by radiation.