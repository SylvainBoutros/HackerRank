# Week 3
8 problems to solve focusing on basic problem solving skills.

## Permuting Two Arrays
There are two **n**-element arrays of integers, ***A*** and ***B***. Permute them into some ***A'*** and ***B'*** such that the relation ***A'[i] + B'[i] >= k*** holds for all **i** where **0 <= i < n**.
There will be **q** queries consisting of ***A, B,*** and ***k***. For each query, return YES if some permutation ***A', B'*** satisfying the relation exists. Otherwise, return NO.

## Subarray Division 2
Two children, Lily and Ron, want to share a chocolate bar. Each of the squares has an integer on it.
Lily decides to share a contiguous segment of the bar selected such that:
- The length of the segment matches Ron's birth month, and,
- The sum of the integers on the squares is equal to his birth day.

Determine how many ways she can divide the chocolate.

## XOR Strings 3
In this challenge, the task is to debug the existing code to successfully execute all provided test files.
Given two strings consisting of digits 0 and 1 only, find the XOR of the two strings.

Debug the given function strings_xor to find the XOR of the two given strings appropriately.

## Sales by Match
There is a large pile of socks that must be paired by color. Given an array of integers representing the color of each sock, determine how many pairs of socks with matching colors there are.

## Migration Birds
Given an array of bird sightings where every element represents a bird type id, determine the id of the most frequently sighted type. If more than 1 type has been spotted that maximum amount, return the smallest of their ids.

## Maximum Perimeter Triangle
Given an array of stick lengths, use **3** of them to construct a [non-degenerate triangle](https://en.wikipedia.org/wiki/Degeneracy_(mathematics)#Triangle) with the maximum possible perimeter. Return an array of the lengths of its sides as **3** integers in non-decreasing order.

If there are several valid triangles having the maximum perimeter:
1. Choose the one with the longest maximum side.
2. If more than one has that maximum, choose from them the one with the longest minimum side.
3. If more than one has that maximum as well, print any of them.

If no non-degenerate triangle exists, return **[-1]**.

## Zig Zag Sequence
In this challenge, the task is to debug the existing code to successfully execute all the provided test files.

Given an array of **n** distinct integers, transform the array into a zig zag sequence by permuting the array elements.
A sequence will be called a zig zag sequence if the first **k** elements in the sequence are in increasing order and the last **k** elements are in decreasing order, where **k = (n + 1) / 2**. You need to find the lexicographically smallest zig zag sequence of the given array.

## Drawing Book
A teacher asks the class to open their books to a page number. A student can either start turning pages from the front of the book or from the back of the book. They always turn pages one at a time. When they open the book page **1** is always on the right side.

When they flip page **1**, they see pages **2** and **3**. Each page except the last page will always be printed on both sides. The last page may only be printed on the front, given the length of the book is ***n*** pages long, and a student wants to turn to page **p**, what is the minimum number of pages to turn? They can start at the beginning or the end of the book.

Given ***n*** and ***p***, find and print the minumum number of pages that must be turned in order to arrive at page ***p***.