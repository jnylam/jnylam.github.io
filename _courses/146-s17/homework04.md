---
layout: course
courseid: 146-s17
title: Homework 4
mathjax: true
navorder: 0
---

# Description

The goal of this assignment is to master the following skills and concepts:

- write basic backtracking solutions
- design simple algorithms and data structures using the dictionary ADT
- reason about the efficiency tradeoffs of different algorithms solving the same problem
- use dictionaries to implement memoization
- represent a graph using an adjacency matrix, an adjacency list and a dictionary representation
- reason about the efficiency tradeoffs of these different graph representations

# Submission

You will package your assignment as a __single zip file__ and submit it on Canvas. The zip file should contain the following files:

* one file named `BacktrackingProblems.java` containing your solution to problem 1
* one **pdf** file containing your written solutions to problems 2 and 5

For suggestions on how to make a pdf file, please refer to [Homework 1 - Submission](homework01.html#Submission).


# Problems to be submitted

### Problem 1: five basic backtracking exercises

Complete the backtracking problems in [BacktrackingProblems.java](//github.com/jnylam/SJSU-cs146-s17/blob/master/04_Backtracking/src/cc/jennylam/cs146/BacktrackingProblems.java)

### Problem 2: design a data structure using a dictionary as a building block

 You are given a log file with billions of entries. Each entry contains an integer timestamp and a string “page”. The entries appear in increasing order of timestamps. You are asked to implement methods to analyze log data to find the most visited pages. Specifically, implement

- `void add(Entry p)` : add `p.page` to the set of visited pages. It is guaranteed that if `add(q)` is called after `add(p)` then q.timestamp >= p.timestamp
- `List<String> common(k)`: return a list of the k most common pages

__(a)__ Implement a solution which uses the sorted dictionary ATD. You may give your solution in code or in pseudocode. 

__(b)__ Assume that the sorted dictionary is implemented with a balanced binary search tree.  At the point in the log file at which r distinct pages have been encountered, how long does it take to make a call to `add()`? How long does it take to make a call to `common()`?

__(c)__ Implement a solution which uses the (non-sorted) dictionary ADT.

__(d)__ Assume that the dictionary is implemented with a hash table (a dictionary implementation in which all operations take O(1) time).  At the point in the log file at which r distinct pages have been encountered, how long does it take to make a call to `add()`? How long does it take to make a call to `common()`?

__(e)__ Under what conditions is the solution in __(a)-(b)__ preferable to the solution in __(c)-(d)__? Justify your anwer. (Hint: there are various things to consider. How often does one method need to be called over the other for the balanced binary search tree solution to be considered the more efficient solution? How likely is it to encounter the same page again in the log?)

### Problem 3: memoization

Recall that the Fibonacci numbers are defined as follows:

$$\text{fib}(n) = \begin{cases}
1 & \text{if } n = 0 \text{ or } 1\\
\text{fib}(n - 1) + \text{fib}(n - 2) & \text{else}
\end{cases}$$

Consider the following naive implementation for computing the $$n$$-th Fibonacci number.

```
int fib(n) {
    if (n == 0 or n == 1)
        return 1;
    return fib(n - 1) + fib(n - 2);
}
```

__(a)__ Draw the recursion tree corresponding to a call to $$\text{fib}(5)$$, which computes the 5-th Fibonacci number.

__(b)__ Possibly with the help of this tree, explain why the naive implementation is not an efficient implementation. In other words, where is there potential savings?

__(c)__ Propose an algorithm in code or pseudocode to compute the $$n$$-th Fibonacci number in $$\Theta(n)$$ time. Draw a recursion tree corresponding to a call to your solution to compute the 5-th Fibonacci number.

__(d)__ Propose a second solution in which you start with the naive implementation above, and add to it memoization code to store previously computed values in a dictionary. (Help: review the lecture notes on memoization.) Draw a recursion tree corresponding to a call to your second solution to compute the 5-th Fibonacci number.


### Problem 4: graph representation

__(a)__ Recall that __an adjacency matrix__ is a matrix whose rows and columns are indexed by the vertices, with a 1 in row i and column j if there is an edge from vertex i to vertex j.

   Draw the graph whose adjacency matrix is below, using circles for the vertices and arrows for the edges. Label each vertex with the number of its row and column.

$$\begin{pmatrix}
0 & 1 & 1 & 0 \\
1 & 0 & 0 & 0 \\
0 & 1 & 0 & 1 \\
1 & 0 & 1 & 0
\end{pmatrix}$$

__(b)__ An __adjacency list__ is an array indexed by the vertices. Each array cell points to a linked list of neighbor of that vertex). How many linked list nodes would be needed to represent the graph from part __(a)__?


__(c)__ In the __dictionary representation__, a graph is a dictionary whose keys are vertices and whose values are lists of the outgoing neighbors of each vertex. Read the documentation for the Java [Map interface](https://docs.oracle.com/javase/8/docs/api/java/util/Map.html) and write Java code that produces the dictionary representation for the same graph. In this code, use the number i to represent the vertex whose adjacencies are given by the i-th row of the matrix. Use the Java Collections idiom for instantiating a collections:

```
InterfaceType<T> dataStructure = new ImplementationType<>();
```
For example, for instantiating a list of integers:
```
List<Integer> list = new ArrayList<>();
```
You may use any valid implementation of the Map interface to instantiate the map, but you may only use methods of the Map interface to interact with it.

### Problem 5: tradeoffs of graph representations

Would you use the adjacency list structure or the adjacency matrix structure in each of the following cases? Justify your choice.

__(a)__ The graph has 10,000 vertices and 20,000 edges, and it is important to use as little space as possible.

__(b)__ The graph has 10,000 vertices and 20,000,000 edges, and it is important to use as little space as possible.

__(c)__ You need to answer the query `areAdjacent` as fast as possible, no matter how much space you use.

# Problems not to be submitted

### more practice with basic backtracking...

under the Recursion-2 problem set at [Codingbat.com](//codingbat.com)

# Acknowledgements
Problem 2 is adapted from a problem in "Elements of Programming Interviews", Aziz an Lee.
