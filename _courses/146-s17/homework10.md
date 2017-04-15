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

Please submit your assignment as a __single PDF file__ on Canvas.

For suggestions on how to make a pdf file, please refer to [Homework 1 - Submission](homework01.html#Submission).

# Problems to be submitted

### Problem 1

Suppose that a directed graph $$G$$ has the property that every shortest path from the starting vertex $$s$$ to every other vertex has at most four edges. What would this fact imply about the running time of the Bellman-Ford algorithm for finding shortest paths starting from $$s$$ in $$G$$?

### Problem 2
In the lecture on [dynamic programming (part 1)](dp1.pdf), we give a version of the Floyd-Warshall algorithm that uses a 3-dimensional array. Notice that the values `dist[-][-][k]` in the table only ever depend on values of the form `dist[-][-][k-1]`, and not on any smaller values of the 3rd index. 

__(a)__ Using this observation, propose a minor modification to this algorithm which uses two 2-dimensional arrays instead. Give your answer in code or pseudocode.

__(b)__ How are the time and space complexities affected by this modification? If there is a change, what is the new complexity?
