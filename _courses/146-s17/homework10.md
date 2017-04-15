---
layout: course
courseid: 146-s17
title: Homework 10
mathjax: true
navorder: 0
---

# Description

The goal of this assignment is to master the following skills and concepts:

1. solve problems recursively and implement them using dynamic programming
2. analyze the time and space complexity of an implementation which uses dynamic programming

# Submission

You will package your assignment as a __single ZIP file__ and submit it on Canvas. The package should include a pdf file for the written portion of your work and .java files for the code.

For suggestions on how to make a pdf file, please refer to [Homework 1 - Submission](homework01.html#Submission).

# Problems to be submitted

### Problem 1

In the lecture on [dynamic programming (part 1)](dp1.pdf), we give a version of the Floyd-Warshall algorithm that uses a 3-dimensional array. Notice that the values `dist[-][-][k]` in the table only ever depend on values of the form `dist[-][-][k-1]`, and not on any smaller values of the 3rd index. 

__(a)__ Using this observation, propose a minor modification to this algorithm which uses two 2-dimensional arrays instead. Give your answer in code or pseudocode.

__(b)__ How are the time and space complexities affected by this modification? If there is a change, what is the new complexity?

### Problem 2

Recall the longest increasing subsequence problem discussed in class ([the dictionary ADT](dictionary.pdf)), in which the input is a `sequence = [x0, x1, x2, ..., xn]` of integers, and the problem (or output) is to find the length of the longest increasing subsequence.

__(a)__ Express the problem in terms of subproblems and include the base case. (An example of how to do this is given in the notes for the recursive solution for the all-pairs shortest paths problem.)

__(b)__ In preparation for a dynamic programming solution, describe:

* the number of dimensions needed by a table which will be used t  record the solutions to the subproblems
* for each dimension of the table, what the index represents, and what its range of values is

__(c)__ In Java, give a dynamic programming solution to the problem (include the solution as a java file).

__(d)__ What is the time complexity and space complexity of this solution? Justify your answer.


