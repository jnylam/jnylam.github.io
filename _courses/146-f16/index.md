---
layout: course
courseid: 146-f16
title: Schedule
navorder: 2
---

<a name="schedule"></a>

This schedule is tentative and subject to change during the semester. Changes will be reflected on this page as well as announced during lecture. Students should consult this schedule regularly for the most up-to-date information.

Lecture|Date|Topic|Reading/homework
-------|----|-----|-------
1 | W 8/24 | [Introduction](introduction.html)<br>[Profile and assessment quiz](quiz.pdf) | 1.1, 1.2 (skim) <br> 3.1 (O and &Theta;)
2 | M 8/29 | Recursion: simplify-and-delegate | Ch 2
3 | W 8/31 | Recursion:  Towers of Hanoi, mergesort<br> Review: summation notation, induction | 4.1
 | M 9/5 | _Labor day_ | [Homework 1](homework01.html) due <del>Tuesday 9/6</del><br> <ins>Friday 9/9</ins> at 11:59 pm
4 | W 9/7 | Recursion: recurrence equations<br> Review: logarithms, O-notation | 4.3
5 | M 9/12 | Recursion: divide-and-conquer<br> Review: worse case time complexity | 33.4
6 | W 9/14 | Recursion: backtracking | [Erickson notes](http://jeffe.cs.illinois.edu/teaching/algorithms/notes/03-backtracking.pdf) (just 3.1, 3.3, 3.6)
| F 9/16 | | [Homework 2](homework02.html) due Fri 9/16 11:59pm
7 | M 9/19 | Recursion: dynamic programming | 15.1
8 | W 9/21 | Recursion: dynamic programming |
9 | M 9/26 | [Data structures: roadmap](#data-structures-roadmap)<br> Data structures: stacks, space complexity of recursive algorithms, <br>find the convex hull | 10.1, 10.2 (skim)<br> 33.3 (Graham scan)
10 | W 9/28 | Data structures: priority queues, heaps, selection and heapsort<br>[Heapsort code](//glot.io/snippets/eivlf8mhce) | Ch 6 and/or <br>[Binary heaps](https://www.youtube.com/playlist?list=PLSVu1-lON6Lwqj5nDqg8YyD7f4tjLMMBN)  (videos 1-4) - Prof Taylor
| F 9/30 | | [Homework 3](homework03.html) due Fri 9/30 11:59pm<br>[Homework 4](homework04.html) due Fri 9/30 11:59pm
11 | M 10/3 | __Exam 1__
12 | W 10/5 | Data structures: dictionaries, BSTs<br>[BST starter  code](https://glot.io/snippets/ej354dtkn2)| 12
13 | M 10/10 | Data structures: red-black trees | 13
14 | W 10/12 | Randomization: hashing |
| F 10/14 | | [Homework 5](homework05.html) due F 10/14 at 11:59pm
15 | M 10/17 | Randomization: randomized quicksort
16 | W 10/19 | Randomization: treaps, skiplists
17 | M 10/24 | Graphs: DFS, topological sort, strongly connected components
18 | W 10/26 | Graphs: shortest path problem, Bellman-Ford
19 | M 10/31 | Graphs: BFS, Dijkstra
20 | W 11/2 | __Exam 2__
21 | M 11/7 | Graphs: minimum spanning trees
22 | W 11/9 | Hardness: sorting and search lower bounds
23 | M 11/14 | Hardness: radix and bucket sort
24 | W 11/16 | Hardness: NP-completeness
25 | M 11/21 | Hardness: approximation algorithms
26 | W 11/23 | Hardness: approximation algorithms
27 | M 11/28 | __Exam 3__
29 | W 11/30 | Recursion: fast exponential-time algorithms
30 | M 12/5 | Data structures: segment intersection, dynamic order statistics
31 | W 12/7 | Randomization: bloom filter, string matching, tries
32 | M 12/12 | Graphs: all-pairs shortest path
| | __Section 7 final exam__ F 12/16 2:45PM&ndash;5:00PM, MH 422<br />
| | __Section 8 final exam__ W 12/14 9:45AM&ndash;12:00PM, MH 422


----

# Data structures: roadmap

abstract data type (ADT) | interface (API) | implementations
-------------------------|-----------------|----------------
stack | push()<br>pop() | linked list<br>contiguous array<br>dynamic array
queue | queue()<br>dequeue() | linked list<br>contiguous array<br>dynamic array
priority queue | insert(priority, obj)<br>get_min() | binary heap<br>d-ary heap (d=2,4,8,...)<br>fibonacci heaps
__dictionary__<br>aka map<br>aka associative array | set(key, value)<br>get(key)=value<br>is key in dictionary? | __hash table__<br>binary search tree
set | add(key)<br> is key in set? | dictionary<br> bit vector
graph | add(node)<br>add_edge(n1, n2)<br>__neighbors(node)__<br> is n1 a neighbor of n2? | dictionary<br>adjacency matrix<br>adjacency list

Various remarks:

1. __dynamic arrays__ are known as _vectors_ in C++, _arraylists_ in Java and simply  arrays in Python.
2. __binary search trees__ (AVL, red-black, splay trees) allow us to do more than dictionary searches, as the keys are sorted. The API of binary search trees can be extended with: `previous()` and `next()`. Binary search trees can also be viewed as a generalization of dynamic arrays in that the data is sorted (by key) but it also strikes a balance between fast insertion and fast lookup.
3. Our emphasis in this class will be on __stacks__ (today), __priority queues__ (next time), and spend most of our time on __dictionaries and graphs__, although we will not avoid the other data structures if they come up. Dictionaries are by far the most important data structures. Since hash tables are the most common implementation of dictionaries, the two terms tend to be used interchangeably.
