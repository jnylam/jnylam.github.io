---
layout: course
courseid: 146-s17
title: Schedule
navorder: 2
---

<a name="schedule"></a>

This schedule is tentative and subject to change during the semester. Changes will be reflected on this page as well as announced during lecture. Students should consult this schedule regularly for the most up-to-date information.

Date|Topic|Reading/homework
----|-----|-------
Th 1/26 | Introduction [[slides](intro.pdf)] | 1.1, 1.2 (skim)
T 1/31 | Recursion: simplify-and-delegate [[slides](recursion1.pdf)] | Ch 2
Th 2/2 | Analyzing run time<br> Review: worse case time complexity | 3.1 (O and &Theta;)
T 2/7 | _Last day to drop_<br>Recursion: Towers of Hanoi, backtracking | [Erickson notes](http://jeffe.cs.illinois.edu/teaching/algorithms/notes/03-backtracking.pdf) (just 3.1, 3.3, 3.6)
Th 2/9 | Recursion: mergesort, recurrence equations | 4.3
T 2/14 | Recursion: divide-and-conquer algorithms | 33.4
Th 2/16  | _Last day to add_<br>Recursion: dynamic programming | 15.1
T 2/21 | Recursion: dynamic programming |
Th 2/23 | [Data structures: roadmap](#data-structures-roadmap)<br> Data structures: stacks, space complexity of recursive algorithms, <br>find the convex hull | 10.1, 10.2 (skim)<br> 33.3 (Graham scan)
T 2/28 | Data structures: priority queues, heaps, selection and heapsort | Ch 6 and/or <br>[Binary heaps](https://www.youtube.com/playlist?list=PLSVu1-lON6Lwqj5nDqg8YyD7f4tjLMMBN)  (videos 1-4) - Prof Taylor
Th 3/2 | Data structures: dictionaries, BSTs | 12
T 3/7 | __Exam 1__
Th 3/9 | Data structures: red-black trees | 13
T 3/14 | Randomization: hashing 1: hash tables, hash chaining, hash functions | 11.1-11.3
Th 3/16 | Randomization: hashing 2: table resizing (section 8 only), open addressing | 11.4
T 3/21 | Randomization: deterministic and randomized quicksort<br>Review of basic probability, expectation, indicator variables | 7.1-7.3
Th 3/23 | Randomization: skiplists
T 3/28 | _Spring recess_ |
Th 3/30 | _Spring recess_ |
T 4/4 | Randomization: analysis of randomized quicksort<br>[Proof using indicator variables](quicksort.html) | 7.4
Th 4/6 | Graphs: representation, DFS, strongly connected components | 22.1, 22.3
T 4/11 | Graphs: Tarjan's algorithm for strongly connected components | 22.5
Th 4/13 | Graphs: BFS, single-source shortest path problem, Dijkstra | 22.2, 24.3
T 4/18 | Graphs: Bellman-Ford algorithm | 24.1-24.2
Th 4/20 | Graphs: minimum spanning trees | 23.1-23.2
T 4/25 | __Exam 2__
Th 4/27 | Hardness: sorting and search lower bounds | 8.1
T 5/2 | Hardness: radix sort,  | 8.3
Th 5/4 | Hardness: NP-completeness | Ch 34 (skim)
T 5/9 | Hardness: approximation algorithms | Ch 35 (skim)
Th 5/11 | flex day
T 5/16 | Review |
T 5/23 | __Section 5 final exam__ T 5/23  7:15AM&ndash;9:30AM, MH 222<br />
W 5/24 | __Section 6 final exam__ W 5/24  9:45AM&ndash;12:00PM, MH 225

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
