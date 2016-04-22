---
layout: course
title: "Homework 11"
courseid: 55
navorder: 0
mathjax: true
---

Due date: Wednesday 4/27/2016 in class  
Instructions: please turn in each part stapled separately. Label each part with

* your name,
* homework number,
* part and
* instructor name.

Please do not use paper torn off of a notebook.

---

## Part 1


### Problem 1

Let $$G = (V, E)$$ be an undirected graph. Define the relation $$\leftrightarrow$$ on $$G$$ as follows: for any $$v, w \in V$$, let $$v \leftrightarrow w$$ if and only there exists a path in $$G$$ from $$v$$ to $$w$$ and a path in $$G$$ from $$w$$ to $$v$$.

Show that $$\leftrightarrow$$ is an equivalence relation on $$V$$.

Remark: the equivalence classes defined by $$\leftrightarrow$$ are called the  __connected components__ of an undirected graph.

### Problem 2

A simple graph is an undirected graph with no self-loops or multi-edges. How many connected components can a simple graph on $$n$$ vertices and $$m$$ edges have?

### Problem 3

Let $$G = (V, E)$$ be a directed graph. Define the relation $$\leftrightarrows$$ on $$G$$ as follows: for any $$v, w \in V$$, let $$v \leftrightarrows w$$ if and only there exists a path in $$G$$ from $$v$$ to $$w$$ and a path in $$G$$ from $$w$$ to $$v$$.

Show that $$\leftrightarrows$$ is an equivalence relation on $$V$$.

Remark: the equivalence classes defined by $$\leftrightarrows$$ are called the __strongly connected components__ of a digraph.

### Problem 4

Find the strongly connected components of this graph.

![](digraph.svg)

### Problem 5

An adjacency matrix is a way to represent a digraph on a computer. It is a 2-dimensional array of 1's and 0's. Specifically, let us number the vertices from $$1$$ to $$n$$. Then, there is a 1 in the $$ij$$-th entry (row $$i$$, column $$j$$) of the matrix if and only if there is an edge from vertex $$j$$ to vertex $$i$$.

__a)__ Draw the digraph whose adjacency matrix is

$$ \begin{pmatrix} 0 & 1 & 1 & 0 \\ 1 & 0 & 0 & 0 \\ 0 & 1 & 0 & 1 \\ 1 & 0 & 1 & 0 \end{pmatrix}$$

Use circles for vertices and arrows for edges.

__b)__ How would you use an adjacency matrix to represent an undirected graph? Illustrate with an example.


### Problem 6

In the low-attention-span web surfer model used to define the pagerank algorithm, suppose that the probability of getting bored and going to a uniformly random page is 0.1 and the probability of following a random link from the current page is 0.9. Given the graph represented by the same matrix as in the previous problem, starting from a state in which each vertex is equally likely, what would be the probability of being on each of the four vertices after a single time step?

### Problem 7

A row and a column can be "multiplied" together as follows:

$$\begin{pmatrix}a & b & c & d\end{pmatrix} \begin{pmatrix} e\\ f\\ g \\ h \end{pmatrix} = ae + bf + cg + dh = x$$

The result is a single number $$x$$. This operation is called the __dot product__.

You can use the dot product as a basic operation to multiply two matrices...

$$\begin{pmatrix} * & * & * & * \\ * & * & * & * \\ * & * & * & * \end{pmatrix} \begin{pmatrix} * & * \\ * & * \\ * & * \\ * & * \end{pmatrix} = \begin{pmatrix} ? & ? \\ ? & ? \\ ? & ? \end{pmatrix}$$

...by doing the "right thing" (the appropriate dot product) for each of the entries of the resulting matrix:

$$\left( \begin{array}{cccc} * & * & * & * \\ \hline a & b & c & d \\ \hline * & * & * & * \end{array}  \right)
\left(\begin{array}{c|c} * & e \\ * & f \\ * & g \\ * & h \end{array}\right) = \begin{pmatrix} ? & ? \\ ? & x \\ ? & ? \end{pmatrix}$$

and...

$$\left( \begin{array}{cccc} * & * & * & *  \\ \hline * & * & * & * \\ \hline a & b & c & d \end{array}  \right)
\left(\begin{array}{c|c} e & * \\ f & * \\ g & * \\ h & * \end{array}\right) = \begin{pmatrix} ? & ? \\ ? & ? \\ x & ? \end{pmatrix}$$

etc.

Of course, this only works if the number of columns of the left matrix matches the number of rows in the right matrix. But other than that requirement, you can multiply matrices of any dimensions. The operation we just described is the __matrix product__.

__a)__ Find the square of the adjacency matrix.  
__b)__ What does the number in the $$ij$$-th entry of the square of the adjacency matrix represent in the original graph?

Hint: (select the text to uncover) <hint>in a graph with three vertices a, b, and c, and two edges a&rarr;b and b&rarr;c, what is the result of multiplying the corresponding entries in the adjacency matrix? where in the resulting matrix is this number located? in other words, which two vertices is this number associated with? What happens if we add another vertex d and two more edges a&rarr;d and d&rarr;c to the graph?</hint>

### Problem 8

Let $$G$$ be a graph with $$n$$ vertices.

__a)__ What is the maximum number of edges that an undirected graph can have, if self-loops are not allowed?  
__b)__ What is the O-notation as of your answer to part __a)__?  
__c)__ What is maximum number of edges that a directed graph can have, if self-loops are not allowed?  
__d)__ What is the O-notation as of your answer to part __c)__?

### Problem 9

A graph with $$n$$ vertices is said to be __sparse__ if the number of edges is $$O(n)$$, and __dense__ otherwise.

On a computer, a graph can be represented as an adjacency matrix. It can also be represented as an __adjacency list__: for each vertex, we keep a list of its neighbors.

__a)__ Describe the adjacency list of the graph whose adjacency matrix is given in Problem 5.  
__b)__ How big is the adjacency list of a sparse graph? In other words, how many integers are stored in the adjacency list? Express your answer in O-notation.  
__c)__ How big is the adjacency list of a dense graph? Express your answer in O-notation.  
__d)__ How big is the adjacency matrix of a sparse graph? How about a dense graph?  
__e)__ Is there any advantage to storing a sparse graph as either an adjacency matrix or an adjacency list?  
__f)__ Given a graph stored on a computer, a basic and useful question about the graph is the __neighbor query__: given two vertices, determine whether there is an edge from the first vertex to the second vertex. In light of this fact, is there any advantage to storing a dense graph as either an adjacency matrix or an adjacency list?
