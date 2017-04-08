---
layout: course
courseid: 146-s17
title: Homework 9
mathjax: true
navorder: 0
---

# Description

The goal of this assignment is to master the following skills and concepts:

1. understand and be able to explain hash chaining
2. understand and be able to explain open addressing
3. understand and be able to explain the concept of a hash function

# Submission

You will package your assignment as 

* a __single PDF file__ OR
* a __single ZIP file__ containing a PDF for the written problems s.java files for code 

and submit it on Canvas.

For suggestions on how to make a pdf file, please refer to [Homework 1 - Submission](homework01.html#Submission).

# Exercises (not to be submitted)

The following exercises cover required knowledge for this course. They should be solved but solutions to these will not be collected.

__(a)__ [11.2-1] Suppose we use a hash function $$h$$ to hash $$n$$ distinct keys into an array $$T$$ of length $$m$$. Assuming simple uniform hashing, what is the expected number of collisions? More precisely, what is the expected cardinality of $$\{\{k, l\}: k \neq l \text{ and } h(k) = h(l)\}$$?

__(b)__ [based on 11.2-2] Consider a hash table with 9 slots, in which collisions are resolved by  chaining. Show the contents of the hash table  when the following keys are inserted: 5, 28, 19, 15, 20, 33, 12, 17, 10. Let the hash function be $$h(k) = k \mod 9$$.

__(c)__ [11.4-1] Consider inserting the keys 10, 22, 31, 4, 15, 28, 17, 88, 59 into a hash table of length $$m = 11$$ using open addressing with the auxiliary hash function $$h'(k) = k$$. Illustrate the result of inserting theses keys using linear probing, using the quadratic probing hash function $$h(k,i) = (h'(k) + c_1i + c_2i^2) \mod m$$ where $$c_1 = 1$$ and $$c_2 = 3$$, and using double hashing with $$h_1(k) = k$$ and $$h_2(k) = 1 + (k \mod (m-1))$$.

__(d)__ [based on 11.4-2] Consider a hash table in which collisions are resolved by open addressing, and in which the probing function is $$h(k, i)$$. Write pseudocode for insertion and deletion from the hash table. The deletion method should set the deleted table entry to the special value DELETED, and the insertion method should handle that special value appropriately.

# Problems to be submitted

### Problem 1: hash chaining (11.2-3)

Professor Marley hypothesizes that he can obtain substantial performance gains by modifying the chaining scheme to keep each list in sorted order. How does the professor's modification affect the running time for successful searches, unsuccessful searches, insertions, and deletions?

### Problem 2: open-addressing (11.4-3)

Consider an open-address hash table with uniform hashing. Give upper bounds on the expected number of probes in an unsuccessful search and on the expected number of probes in a successful search when the load factor is 3/4 and when it is 7/8.

### Problem 3: more divide-and-conquer

Given a sorted array of distinct integers $$A[1,\dots, n]$$, you want to find out whether there is an index $$i$$ for which $$A[i] = i$$. Give a divide-and-conquer algorithm that runs in $$O(\log n)$$.

### Problem 4: more graph algorithms

If you are not familiar with the game of MineSweeper, watch a [MineSweeper tutorial](//www.youtube.com/watch?v=Z0EAysRluJk). Download the [MineSweeper code](//github.com/jnylam/SJSU-cs146-s17/tree/master/07_Minesweeper/src/cc/jennylam/cs146) which consists of three files. Play the game a few times and notice that the sweeping functionality has not yet been implemented. Study the code and comments, and in particular `Board.java`. The goal of this problem is to complete the `Board.sweep()` method.

# Additional practice questions (not too be submitted)


  2. what is collision resolution? what are two approaches to collision resolution studied in this class?
  3. what is the simple uniform hashing assumption?
  4. in the standard notation used in class and in the textbook, what do n and m represent in the context of hash tables?
  5. what is the ultimate run-time goal that we are trying to achieve with hash tables? on what hash table operations?
  6. under what conditions can we get achieve this run-time with hash-chaining?
  7. describe insertion, search and deletion into a table where collisions are resolved with open addressing, in high-level terms and in pseudocode
  8. which operation (insertion or search) would fail if collisions are resolved with open addressing and if deleting an item simply involved setting the contents to None or null? give a small example scenario (with a probing function, table content, and a sequence of operations on the hash table) which illustrates the problem.
  9. what is a hash function?
  10. what is the purpose of a hash function?
  11. what are some examples of hash functions?
  12. what is the main desirable property of a good hash function?
