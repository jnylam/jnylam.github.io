---
layout: course
courseid: 146-s17
title: Schedule
navorder: 2
---

<a name="schedule"></a>

This schedule is tentative and subject to change during the semester. Changes will be reflected on this page as well as announced during lecture. Students should consult this schedule regularly for the most up-to-date information.

Date|Topic|Reading|Homework
----|-----|-------|--------
Th 1/26 | Introduction [[slides](intro.pdf)] | 1.1, 1.2 (skim)
T 1/31 | Recursion: simplify-and-delegate [[slides](recursion1.pdf)] [[code](//github.com/jnylam/SJSU-cs146-s17/tree/master/01_Recursion1/src/cc/jennylam/cs146)] | Ch 2
Th 2/2 | Analysis: O-notation [[slides](o-notation.pdf)] | 3.1 (O and &Theta;)
T 2/7 | _Last day to drop_<br>Recursion: Towers of Hanoi, binary tree [[slides](recursion2.pdf)] [[code](//github.com/jnylam/SJSU-cs146-s17/tree/master/02_Recursion2/src/cc/jennylam/cs146)] | <!-- backtracking  -->
Th 2/9 | Analysis: time and space complexity [[slides](timecomplexity.pdf)]
S 2/12 | | |  [Hw 1](homework01.html) due
T 2/14 | Data structures: ordered list API<br>problem solving techniques
Th 2/16  | _Last day to add_<br>Data structures: ordered list implementations<br>skiplist, binary search tree
S 2/19 | | | [Hw 2](homework02.html) due
T 2/21 | Recursion: backtracking | [Erickson notes](http://jeffe.cs.illinois.edu/teaching/algorithms/notes/03-backtracking.pdf) (just 3.1, 3.3, 3.6)
Th 2/23 | Data structures: abstract data types, dictionary API | 12
S 2/26 | | | Hw 3 due
T 2/28 | Data structures: priority queue API (part 1)<br>breadth-first search, Dijkstra's algorithm | 22.2, 24.3
Th 3/2 | Data structures: priority queue API (part 2)<br>selection sort and heapsort, MST algorithms | 
S 3/5 | | | Hw 4 due
T 3/7 | __Exam 1__: covers hw 1-4
Th 3/9 | Data structures: red-black trees | 13
S 3/12 | | | Hw 5 due
T 3/14 | Recursion: divide-and-conquer algorithms
Th 3/16 | Analysis: recurrence equations | 4.3
S 3/19 | | | Hw 6 due
T 3/21 | Data structures: stacks API (part 1)<br>Depth-first search, Graham scan | 10.1, 10.2 (skim), 33.3
Th 3/23 | Data structures: stacks API (part 2)<br>Strongly connected components | 22.5
S 3/26 | | | Hw 7 due?
T 3/28 | _Spring recess_ | 
Th 3/30 | _Spring recess_ |
S 4/2 | | | Hw 7 due?
T 4/4 | Data structures: hashing (part 1)<br>hash tables, hash chaining, hash functions | 11.1-11.3
Th 4/6 | Data structures: hashing (part 2)<br> table resizing, open addressing | 11.4
S 4/9 | | | Hw 8 due
T 4/11 | Graphs: Bellman-Ford algorithm | 24.1-24.2
Th 4/13 | Recursion: quicksort
S 4/16 | | | Hw 9 due
T 4/18 | Hardness: sorting lower bounds | 8.1
Th 4/20 | Hardness: radix sort  | 8.3
S 4/ 23 | | | Hw 10 due
T 4/25 | __Exam 2__: covers hw 5-9
Th 4/27 | Data structures: heaps | Ch 6 and/or <br>[Binary heaps](https://www.youtube.com/playlist?list=PLSVu1-lON6Lwqj5nDqg8YyD7f4tjLMMBN)  (videos 1-4) - Prof Taylor
S 4/30 | | | Hw 11 due
T 5/2 | Recursion: dynamic programming (part 1) | 15.1
Th 5/4 | Recursion: dynamic programming (part 2)
S 5/7 | | | Hw 12 due
T 5/9 | Hardness: NP-completeness | Ch 34 (skim)
Th 5/11 | Hardness: approximation algorithms | Ch 35 (skim)
S 5/14 | | | Hw 13 due
T 5/16 | Review |
T 5/23 | __Section 5 final exam__ T 5/23  7:15AM&ndash;9:30AM, MH 222<br />
W 5/24 | __Section 6 final exam__ W 5/24  9:45AM&ndash;12:00PM, MH 225

<!-- Recursion: divide-and-conquer algorithms | 33.4
Dynamic programming: 15.1
 Data structures: stacks, space complexity of recursive algorithms, <br>find the convex hull | 10.1, 10.2 (skim)<br> 33.3 (Graham scan)
 -->

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
