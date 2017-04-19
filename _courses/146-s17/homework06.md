---
layout: course
courseid: 146-s17
title: Homework 6
mathjax: true
navorder: 0
---

# Description

The goal of this assignment is to master the following skills and concepts:

- use the PriorityQueue ADT to design algorithms and data structures
- explain the single source shortest path problem and the minimum spanning tree problem
- augment a backtracking algorithm with code to build and return a found solution (not covered on Exam 2)
- analyze divide-and-conquer algorithms

# Submission

You will package your assignment as 

* a __single PDF file__ OR
* a __single ZIP file__ containing a PDF for the written problems and .java files for code 

and submit it on Canvas.

For suggestions on how to make a pdf file, please refer to [Homework 1 - Submission](homework01.html#Submission).

### Problem 1: design a data structure using a priority queue ADT as a building block

Describe a method for maintaining the median of an initially empty set, $S$, subject to an operation, $\mathsf{insert}(x)$, which inserts the value $x$, and an operation, $\mathsf{median}()$, which returns the median in $S$. Each of these methods should run in at most $O(\log n)$ time, where $n$ is the number of values in $S$.

### Problem 2: minimum spanning trees are not shortest path trees

Give an example of a weighted, connected, undirected graph, $$G$$, such that the minimum spanning tree for $$G$$ is different from every shortest-path tree rooted at a vertex of $$G$$.

### Problem 3: building a backtracking solution

__(a)__ Write an algorithm in code or pseudocode for solving the longest <del>common</del> <ins>increasing</ins> subsequence problem introduced in class (T 2/21: backtracking), but instead of returning the length of the subsequence, return an actual subsequence of that length.

__(b)__ Write an algorithm in code or pseudocode for solving the [maximumSubsetSum problem](https://github.com/jnylam/SJSU-cs146-s17/blob/master/04_Backtracking/src/cc/jennylam/cs146/BacktrackingProblems.java) from Homework 4, but instead of returning the maximum sum, return an actual subset of the input numbers (as a list or other appropriate data structure) that achieves this maximum value.

### Problem 4: analyze a divide-and-conquer algorithm

How many lines, as a function of $$n$$ (in $$\Theta(\cdot)$$ form), does the following program print? Use the recursion-tree method to solve this problem.

```java
void f(n) {
    if (n > 1) {
        print("still going");
        f(n/3);
        f(n/3);
    }
}
```


# Hints

### Problem 1

<span class="hint">use one or more known data structures as a black box (this means, use their API, without worrying about how they work internally.)</span>

<span class="hint">use a min-priority queue and a max-priority queue as building blocks. A min-priority queue has an $$\mathsf{extractMin}()$$ but no $$\mathsf{extractMax}()$$ method and a max-priority queue </span>

<span class="hint">add items smaller than current median to min-heap</span>

<span class="hint">how can you maintain a roughly equal number of elements in each?</span>


### Problem 3

<span class="hint">The approach is the same as in the previous version of these problems. The only difference is that we are now returning lists rather than a measure of the quality of the solution (length or sum), and incrementally building on those lists.</span>

