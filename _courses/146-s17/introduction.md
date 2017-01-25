---
layout: course
courseid: 146-s17
title: Introduction
mathjax: true
navorder: 0
---

## Overview
* syllabus and [setting up Piazza and the iClicker](syllabus.html#iclickerreef-polling)
* class introductions
* what is an algorithm?
* what is a data structure?
* profile and assessment quiz ([download it](quiz.pdf))

## What is an algorithm?

An algorithm is a procedure that solves a general, well-specified problem.

By __procedure__, we mean a finite sequence of operations described in structured English, pseudocode or real code (definition given by Erik Demaine). Informally, this can also be called, a sequence of steps, a recipe, etc.

By __general problem__, we mean that the problem is not defined on a specific input. For example, the sorting problem (sorting any list of integers or items that can be ordered) is general, given a particular input (problem instance)

By __well-specified problem__, we mean that, if we had to, we could formally define (using mathematical language) what a correct output to a problem instance should look like. Machine learning algorithms are not algorithms in this sense because they do not solve well-specified problems.

Not all algorithms are useful. To be useful, an algorithm needs to be correct, fast, use a small amount of space, and simple enough that it can be implemented correctly without too much trouble.

### Correctness

Algorithms you have encountered so far are likely to be ones that __correctly__ solve a problem on __all inputs__. However, many algorithms in practice fail to do that, and can still be useful.

A __heuristic__ gives (close to) the right answer (hopefully) most of the time, but has no known quantifiable guarantees. Those that work well often rely on the fact that they are used on particular inputs. We will not study heuristics in this class because they are not analyzable.

An __approximation algorithm__ stretches the definition of correctness by allowing the answer to always be nearly correct (with known quantifiable guarantees). For example, the Traveling Salesman Problem is notoriously difficult to solve exactly (while being efficient). However, as we will see, there are algorithms that produce a solution that is never more than twice as long as the shortest possible tour.

__Randomized algorithms__ rely on randomness (either in the input or as part of the algorithm itself) to be correct (or nearly correct) most of the time (say, with probability over 50%).

### Efficiency

An algorithm should be efficient, but there is often a tradeoff between time and space.

The bare minimum requirement for an algorithm to be practical is that it should run in a lifetime (sic) and have a memory footprint that fits on a computer. With distributed algorithms (such as distributed sorting), we could loosen that requirement to be that the algorithm should fit on the set of all algorithms today.

With such rough requirements, a standard way by which we measure efficiency is the O-notation of the worst-case runtime as a function of input size.

By __O-notation__, we do not worry about the lower order terms in the mathematical expression for the runtime. We focus on growth rate. So a runtime of $$n \log n + 2n$$ has the same growth rate as simply $$n \log n$$. We say that $$n \log n + 2n$$ is $$O(n \log n)$$.

We also do not worry about constant factors. Since a runtime of $$3n^2$$ has the same growth rate as $$n^2$$ ignoring the constant factor of 3, we say that $$3n^2$$ is $$O(n^2)$$. We will discuss O-notation in more details later in the class.

Finally, we will for the most part consider the O-notation of the runtime on the __worst-case__ input. An algorithm may run in different amounts of time on different inputs, even if the inputs are the same size (think length of a list of integers to be sorted). But an algorithm ought to run quickly regardless of the input it is given. This may not always give an accurate picture because the worst-case input might not show up in practice.

A more sophisticated analysis might consider how likely each input is and give an __expected__ runtime weighted by the likelihood of each input. However, this is a difficult, as it would require understanding how the input behaves, which is highly dependent on the application the algorithm would be used for. Furthermore, this assumes that the input itself is of a probabilistic nature.

The main appeal for using O-notation is that it simplifies the analysis of an algorithm by relieving us of the burden of worrying about details such as lower order terms and constant factors, which may be difficult to get exactly. In this class however, we will probably not run into a situation in which the constant factor will be difficult to obtain.

O-notation is not the only thing to consider. The constant factor can be important in practice. Using O-notation to compare algorithm efficiency makes sense on large inputs but not small ones.

### Ease of implementation

Many algorithms proposed in research fail to be practical despite having a small asymptotic runtime. See the blog post on [galactic algorithms](https://en.wikipedia.org/wiki/Multiplication_algorithm) for more on this.

The ease of implementation is important in practice, as algorithms with too complex of logic may take a long time to write out, or may be difficult to code up correctly.

## Examples of problems and algorithms

In this class we will study

* the sorting problem: selection sort, merge sort
* the shortest path problem: Dijkstra’s, Bellman-Ford algorithm.
* find the convex hull of a set of points: Graham, gift-wrapping.

Note that algorithms existed well before computers:

- the Euclidean algorithm for finding GCDs.
- the [multiplication algorithm](https://en.wikipedia.org/wiki/Multiplication_algorithm): as far back as Antiquity, different cultures had their own version of a multiplication algorithm

## What is a data structure?

Data structures allow data to be organized for efficient access. There are two main ways of using them:

- as part of an algorithm
- on a set of data on which the same query (question) may be issued over and over again.

An example of the latter is nearest neighbor query: given a set of points (restaurants), find the closest one to me (query point).

Abstract data structures allow for modularity in algorithm design by defining the set of operations (or API) allowed on the data structure, but without specifying an implementation. We can choose a simple one for prototyping and then later pick one with the right time/space tradeoff once the usage case is understood.

An example abstract data structure is a map or dictionary. Operations on a map include insert, delete and get. Hash tables and binary search trees are examples of implementations of a map.

Many use cases require the abstract data type to be dynamic (data may be inserted and/or deleted).

## Main themes of the course
  - recursion
  - data structures
  - randomization
  - graphs
  - hardness
