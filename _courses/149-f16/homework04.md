---
layout: course
courseid: 149-f16
title: Homework 4
mathjax: true
navorder: 3
---

The goal of this assignment is to gain a better understanding of replacement policies and the impact of locality of reference.

As before, you may choose to work alone or with a single partner.

# Part 1: competitive analysis of paging algorithms

### Problem 1

In class, we have shown that LRU is $$k$$-competitive, where $$k$$ is the number of pages that can fit in the cache. In other words, we showed that for all input sequences  of requests, the number of misses incurred by LRU is always less than or equal to $$k$$ times the number of misses incurred by the optimal page replacement policy OPT.

Study this proof and prove FIFO is also $$k$$-competitive.

### Problem 2

In class, we have shown that LFU is not competitive. In other words, having fixed the cache size $$k$$, we can show that for any integer $$N$$, there exists an input sequence of requests on which the number of misses incurred by LFU is $$N$$ times greater than the number of misses incurred by the optimal page replacement algorithm OPT.

Study this proof and prove that LIFO is also not competitive.

# Part 2: paging simulation

You are running a process that consists of 10 pages numbered 0 through 9. Physical memory has 4 page frames. There are always 10 page frames available on disk. When the process starts, none of its pages are in memory. The process makes random references to its pages. Due to __temporal locality of reference__, after referencing a page $$i$$, there is a 70% probability that the next reference will be to page $$i$$, and a 10% probability that the reference after that will be to page $$i$$.

For example, if the input sequence so far is: page 1, page 5, page 3, the next page is page 3 with probability 70%, page 5 with probability 10% and any other page with probability 20/8 = 2.5%.

One possible way of generating this input sequence is by selecting a random value $$r$$ between 0 and 1 (or 0 and 10). If $$r< 0.7$$, choose the previously referenced page, if $$0.7 < r \leq 0.8$$, choose the page referenced before that one, otherwise, randomly choose one of the remaining ones with equal probability.

Simulate the following page replacement policies: __FIFO, LRU, LFU, MFU__, and __random pick__ page replacement algorithms. Run each algorithm 5 times, 100 page references each time, to compute an average hit ratio of pages already in memory. For each reference, print the page numbers of the pages in memory and which page (if any) needed to be paged in and which page was evicted.

# Part 3: report

Write a short report analyzing your data and derive a conclusion based on this analysis.

## Deliverables

__Due date__: see Canvas.

A single `.zip` file containing:

* the source files that compiles without errors
* a `.txt` file containing the data from your experiment
* your `.pdf` file containing:
  * your name and your partner's name if any, your ID numbers
  * answers to Part 1 questions
  * your report

If you are working in a group of two, only one of you should submit the assignment to Canvas.

## Rubric

This assignment is out of 10 points.

* 1 point: zip file contains expected content
* 1 point: code cleanly compiles
* 1 point: sequence of page references exhibits locality of reference
* 2.5 points: each page replacement policy is correctly implemented
* 1 point: data is collected for each experiment
* 1 point: report conclusion follows from results
* 1 point: correctness of solution to problem 1
* 1 point: correctness of solution to problem 2
* 0.5 points: professional presentation, written in complete sentences

## Acknowledgements

Part 2 of this assignment is based on a project in the Operating Systems course taught by Ron Mak.
