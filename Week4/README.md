# Week 4
8 problems to solve focusing on basic problem solving skills.

## Picking Numbers
Given an array of integers, find the longest subarray where the absolute difference between any two elements is less than or equal to **1**.

## Left Rotation
A left rotation operation on an array of size **n** shifts each of the array's elements **1** unit to the left. Given an integer, **d**, rotate the array that many steps left and return the results.

## Number Line Jumps
You are choreographing a circus show with various animals. For one act, you are given two kangaroos on a number line ready to jump in the positive direction (i.e., toward positive infinity).
+ The first kangaroo starts at location **x1** and moves at a rate of **v1** meters per jump.
+ The second kangaroo starts at location **x2** and moves at a rate of **v2** meters per jump.
You have to figure out a way to get both kangaroos at the same location at the same time as part of the show. If it is possible, return YES, otherwise return NO.

## Separate the Numbers
A numeric string, ***s***, is beautiful if it can be split into a sequence of two or more positive integers, **a[1], a[2], ..., a[n]**, satisfying the following conditions:
1. **a[i] - a[i-1] = 1** for any **1 < i <= n** (i.e., each element in the sequence is **1** more than the previous element).
2. No **a[i]** contains a leading zero. For example, we can split **s = 10203** into the sequence **{1, 02, 03}**, but it is not beautiful because **02** and **03** have leading zeros.
3. The contents of the sequence cannot be rearranged. For example, we can split **s = 312** into sequence **{3, 1, 2}**, but it is not beautiful because it breaks our first constraint (i.e., 1 - 3 != 1).

Perform **q** queries where each query consists of some integer string **s**. For each query, print whether or not the string is beautiful on a new line. If it is beautiful, print YES x, where x is the first number of the increasing sequence. If there are multiple such values of **x**, choose the smallest. Otherwise, print NO.

## Closest Numbers
Sorting is useful as the first step in many different tasks. The most common task is to make finding things easier, but there are other uses as well. In this case, it will make it easier to determine which pair or pairs of elements have the smallest absolute difference between them.

## Tower Breakers
Two players are playing a game of Tower Breakers! Player **1** always move first, and both players always play optimally. The rules of the game are as follow:
+ Initially there are ***n*** towers.
+ Each tower is of height ***m***.
+ The players move in alternating turns.
+ In each turn, a player can choose a tower of height ***x*** and reduce its height to ***y***, where **1 <= y < x** and **y** evenly divides **x**.
+ If the current player is unable to make a move, they lose the game.

Given the values of **n** and **m**, determine which player will win. If the first player wins, return **1**. Otherwise, return **2**.

## Minimum Absolute Difference in an Array
The absolute difference is the positive difference between two values **a** and **b**, is written **|a - b|** or **|b - a|** and they are equeal. If **a = 3** and **b = 2**, **|3 - 2| = |2 - 3| = 1**. Given an array of integers, find the minimum absolute difference between any two elements in the array.

## Caesar Cipher
Julius Caesar protected his confidential information by encrypting it using a cipher. Caesar's cipher shifts each letter by a number of letters. If the shift takes you past the end of the alphabet, just rotate back to the front of the alphabet. In the case of a rotation by 3, w, x, y and z yould map to z, a, b, and c.