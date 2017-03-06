---
layout: course
courseid: 146-s17
title: Homework 5
mathjax: true
navorder: 0
---

# Description

The goal of this assignment is to master the following concepts:

- use the PriorityQueue ADT to design algorithms and data structures
- Breadth-First search algorithm
- Dijkstra's algorithm
- Prim-Dijkstra-Jarnik algorithm
- Kruskal's algorithm
- for each of these algorithms
    - explain and implement the algorithm
    - explain what problem it solves
    - explain the running time and its dependence on the data structure implementation (for Dijkstra and PDJ)

# Submission

You will package your assignment as a __single PDF file__ and submit it on Canvas.

For suggestions on how to make a pdf file, please refer to [Homework 1 - Submission](homework01.html#Submission).

# Exercises (not to be submitted)

The following exercises cover required knowledge for this course. They should be solved but solutions to these will not be collected.


![](hw10-0a.png)

__(a)__ Illustrate the execution of breadth-first search on the graph above, treating it as an unweighted graph (all edges have a weight of 1), and with vertex $$e$$ as the source.

__(b)__ Illustrate the execution of Dijkstra's algorithm on the graph above, together with $$e$$ as the source.

__(c)__ Illustrate the execution of the Prim Dijkstra-Jarnik algorithm on the graph above, starting at $$e$$.

__(d)__ Illustrate the execution of Kruskal's algorithm on the graph above.

__(e)__ Implement Dijkstra's algorithm in Java.

# Problems to submitted

### Problem 1: analysis of Dijkstra's algorithm under different implementations of a priority queue

Suppose we wish to compute shortest paths in a complete directed graph (a directed graph in which there exists an edge in each direction between every two vertices), with positive edge weights (so that Dijkstra's algorithm may be used). But rather than using a complicated priority queue data structure, we use an unsorted list $L$ of the vertices that have not yet been processed. That is, the simplified version of Dijkstra's algorithm performs the following steps:

```
initialize the dist and prev information used in the original Dijkstra's algorithm

initialize L to be a list of all the vertices in the graph

while L is not empty {
    look at all of the vertices in L to find the vertex v with
    the minimum value of dist.get(v)

    remove v from L

    for each edge v->w
        relax(v->w)
}
```

You may assume that looking at all vertices in $$L$$ takes time proportional to the number of vertices examined, and that removing v from $$L$$ takes constant time.

__(a)__ What is the running time of this algorithm, using $O$-notation, as a function of the number $$n$$ of vertices in the input graph?

__(b)__ Would this algorithm be a better or worse choice than the more usual form of Dijkstra's algorithm using a binary heap (whose operations are $$O(\log n)$$), for this type of graph? Explain your answer.


### Problem 2: correctness of Dijkstra's algorithm

Give an example of an weighted directed graph, $G$, with negative-weight edges but no negative-weight cycle, such that Dijkstra's algorithm incorrectly computes the shortest-path distances from some start vertex $$v$$.

### Problem 3: design a data structure using a priority queue ADT as a building block

Describe a method for maintaining the median of an initially empty set, $S$, subject to an operation, $\mathsf{insert}(x)$, which inserts the value $x$, and an operation, $\mathsf{median}()$, which returns the median in $S$. Each of these methods should run in at most $O(\log n)$ time, where $n$ is the number of values in $S$.

### Problem 4: minimum spanning trees are not shortest path trees

Give an example of a weighted, connected, undirected graph, $$G$$, such that the minimum spanning tree for $$G$$ is different from every shortest-path tree rooted at a vertex of $$G$$.

### Problem 5: building a backtracking solution

Write an algorithm in code or pseudocode for solving the longest common subsequence problem introduced in class (T 2/21: backtracking), but instead of returning the length of the subsequence, return an actual subsequence of that length.

# Hints

### Problem 3

<span class="hint">use one or more known data structures as a black box (this means, use their API, without worrying about how they work internally.)</span>

<span class="hint">use a min-priority queue and a max-priority queue as building blocks. A min-priority queue has an $$\mathsf{extractMin}()$$ but no $$\mathsf{extractMax}()$$ method and a max-priority queue </span>

<span class="hint">add items smaller than current median to min-heap</span>

<span class="hint">how can you maintain a roughly equal number of elements in each?</span>


### Problem 5

<span class="hint">use the same technique as we did in class to keep track of shortest paths in Dijkstra.</span>

