---
layout: course
courseid: 146-s17
title: Homework 3
mathjax: true
navorder: 0
---

# Description

The goal of this assignment is to understand one of the major themes in this class, which is the difference between an abstract data type (ADT) and implementations of that abstract data type.

Specifically, this assignment focuses on the SortedSet ADT and the following skills:

* use the SortedSet ADT to design an algorithm
* analyze the time complexity of algorithms 
* implement and analyze the binary search tree implementation of the SortedSet ADT
* implement and analyze the skiplist implementation of the SortedSet ADT

# Submission

You will package your assignment as a __single zip file__ and submit it on Canvas. The zip file should contain the following files:

* one **pdf** file containing your written solutions to problems 1 and 4
* one **jar** file containing your source code for problems 2, 3 and 4

For suggestions on how to make a pdf file, please refer to [Homework 1 - Submission](homework01.html#Submission).


# Problems to be submitted

### Problem 1: use the SortedSet ADT to design an algorithm

Given three numbers, x, y, and z, define

    distance(x, y, z) = max( |x - y|,  |x - z|,  |y - z| )

__(a)__ Design an algorithm that takes three sorted arrays A, B, C of integers and returns a triple (A[i], B[j], C[k]) such that the distance(A[i], B[j], C[k]) is minimum. Your algorithm should run in $$O(n_A + n_B + n_C)$$ where $$n_A$$ is the length of A, $$n_B$$ is the length of B and $$n_C$$ is the length of C.

__(b)__ Generalize the algorithm to the problem finding the minimum distance in m arrays, where m is a fixed positive integer. (Part (a) would be the special case where m = 3.) Your algorithm should use the Sorted Set ADT rather than a concrete data structure. Suggestion: review your notes on the Sorted Set ADT and the [SortedSet.java](//github.com/jnylam/SJSU-cs146-s17/blob/master/03_SortedSet/src/cc/jennylam/cs146/SortedSet.java) interface before working on this part and the next two parts.

__(c)__ Analyze the running time of the algorithm in part (b) in terms of number of calls to the number of calls to each SortedSet ADT method.

__(d)__ Using your answer to part (c), what is the running time of the algorithm in part (b) if the SortedSet ADT is chosen to be:

* a sorted linked-list?
* a (non-balanced) binary search tree?
* a balanced binary search tree?
* a skiplist?

### Problem 2: binary search tree implementation

Complete the implementation of the following methods in [BinarySearchTee.java](//github.com/jnylam/SJSU-cs146-s17/blob/master/03_SortedSet/src/cc/jennylam/cs146/BinarySearchTree.java) (without looking it up :) ):

* `BinarySearchTree.min()`
* `BinarySearchTree.find()`
* `BinarySeachTree.successor()`
* `BinarySeachTree.remove()`

Suggestion: review your notes on binary search trees to understand how each of these methods work . You can use the SorteSetRepl to interact with the data structure once fully implemented. Word of warning: the REPL is not a substitute for test code. You should write your own test code to make sure your implementation is correct.

### Problem 3: skiplist implementation

Complete the implementation of the following methods in [SkipList.java](//github.com/jnylam/SJSU-cs146-s17/blob/master/03_SortedSet/src/cc/jennylam/cs146/SkipList.java) (also without looking it up :):

* `SkipList.find()`

Suggestion: review your notes on skiplists to understand how each of these methods work and study the provided skiplist code. Again, you can use the SortedSetRepl to interact with the skiplist once fully implemented, but you should not rely on it to test for correctness. Do write your own test code.

### Problem 4: skiplist analysis

In this problem, you will perform an experiment to gain insight into the time complexity of skiplists.

__(a)__ What is the expected number of levels that a skiplist with n elements will have? Justify your reasoning.

__(b)__ Run the [SortedSetRepl.java](//github.com/jnylam/SJSU-cs146-s17/blob/master/03_SortedSet/src/cc/jennylam/cs146/SortedSetRepl.java) to insert five elements into a skiplist. How many levels are there in the skiplist? Perform this experiment several times (using the same five elements, in the same order) and record the number of levels each time. How well do these results match up with the predictions made in part (a)? Justify your answer.

__(c)__ Write code to perform the following experiment: generate a list of 100 integers, which we call the input list. Starting from an empty skiplist, insert all elements of the input list in order, and record the final number of levels. Repeat this process several times using the same input list. How well do these results match up with the predictions made in part (a)? Justify your answer.

__(d)__ Repeat the experiment of part (c) with longer and longer input lists (say 1000 integers, 2000 intgers), with as large of inputs as your machine can handle. How well do these results match up with the predictions in part (a)? Describe your observations and explain what it means for a running time to be $$O(\log n)$$ with high probability. A plot of your data may be used to support your answer.

# Acknowledgements
Problem 1 is adapted from a problem in "Elements of Programming Interviews", Aziz an Lee.
