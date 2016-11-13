---
layout: course
courseid: 146-f16
title: Homework 9
mathjax: true
navorder: 0
---

### Problem 1

Suppose we wish to compute shortest paths in a complete directed graph (a directed graph in which there exists an edge in each direction between every two vertices), with positive edge weights (so that Dijkstra's algorithm may be used). But rather than using a complicated priority queue data structure, we use an unsorted list $L$ of the vertices that have not yet been processed. That is, the simplified version of Dijkstra's algorithm performs the following steps:

```
initialize the dist and prev information used in the original Dijkstra's algorithm

initialize L to be a list of all the vertices in the graph

while L is not empty:
    look at all of the vertices in L to find the vertex v with
    the minimum value of dist[v]

    remove v from L:

    for each edge v->w
        relax(v->w)
```

You may assume that looking at all vertices in $$L$$ takes time proportional to the number of vertices examined, and that removing v from $$L$$ takes constant time.

__(a)__ What is the running time of this algorithm, using $O$-notation, as a function of the number $$n$$ of vertices in the input graph?

__(b)__ Would this algorithm be a better or worse choice than the more usual form of Dijkstra's algorithm using a binary heap, for this type of graph? Explain your answer.


### Problem 2

Write an efficient algorithm for solving the make-change problem  introduced in [homework 3](homework03.html), this time returning a fewest set of coins that makes change for the given amount, using the given set of denominations. What is the running time of your algorithm?


### Problem 3

Give an example of an weighted directed graph, $G$, with negative-weight edges but no negative-weight cycle, such that Dijkstra's algorithm incorrectly computes the shortest-path distances from some start vertex $$v$$.

### Problem 4

Suppose that a directed graph $G$ has the property that every shortest path from the starting vertex s to every other vertex has at most four edges. What would this fact imply about the running time of the Bellman-Ford algorithm for finding shortest paths starting from $$s$$ in $$G$$?


## Submission

Problems 1 to 4 should be submitted on Canvas as a __single PDF file__.

At the top of your file, include:

* your name
* CS 146
* the class section
* Homework [number]

Give credit to those who have helped you by including

* the name of any classmates you collaborated with
* the name of any other person you received help from
* a reference to any other source you may have used to in order to solve problems on this assignment.

All solutions must be written by yourself. Plagiarized work will not receive any credit. Repeated occurrences will result in a report to the department.

---
Options for making PDFs:

You have the option of handwriting your solutions on paper, scanning them, and converting them to PDF. Please do not send the images.
__If you use a phone or tablet__ to scan your handwritten solutions, [here are some tips on how to this well](http://www.howtogeek.com/209951/the-best-ways-to-scan-a-document-using-your-phone-or-tablet/).

You also have the option of typing your solutions up in your favorite word processor. Export or print your document as a PDF file and submit that. Please do not a submit .docx file.

Finally, you have the option of preparing a professional-looking document using LaTeX. This is what authors use to write textbooks and research papers. If you choose this option, here are some pointers to get you started.

* [Getting LaTeX](https://www.latex-project.org/get/)
* [LaTeX homework template](http://www.jennylam.cc/assets/template.zip): this is a good place to start learning LaTeX. Feel free to modify this document as you need.
* [Any of the many good LaTeX tutorials/cheatsheets/beginner's guides online](https://lmddgtfy.net/?q=Latex%20quickstart).


## Rubric

This assignment is worth 20 points:

* 4.5 points per problem, 2.5 for a reasonable attempt on it and 2 for correctness.
* 1 point for a correctly submitted assignment, that is, as a single PDF file that is legible (if you choose to take pictures, make sure the text is in focus, please check on a computer screen before submitting), properly oriented, etc.
* 1 point for presentation and neatness.
