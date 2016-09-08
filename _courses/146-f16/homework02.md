---
layout: course
courseid: 146-f16
title: Homework 2
mathjax: true
navorder: 0
---

__Note:__ This assignment is entirely written. There are two parts to this assignment, which you can work on both parts in parallel. Some of the problems in part 2 can be challenging, so you should start thinking about them even before you are done solving part 1.

## Part 1: math review

### Problem 1
Show that for any two bases $$a$$ and $$b$$, we have that $$\log_a n$$ is $$O(\log_b n)$$.

__The lesson:__ The base of the logarithm does not affect O-notation.

### Problem 2

Is $$3^n$$ $$O(2^n)$$? Justify your answer.

### Problem 3

Show that $$3^{\log_4n} = n^{\log_43}$$ using log rules.

### Problem 4

Find a function that is simultaneously $$O(2^n)$$ and $$\Omega(n^2)$$. (Hint: the statement $$f$$ is $$\Omega(g(n))$$ is equivalent to the statement $$g$$ is $$O(f(n))$$)

### Problem  5

If $$f(n)$$ is $$O(g(n))$$, is it necessarily true that $$2^{f(n)}$$ is $$O(2^{g(n)})$$? Justify your answer.

### Problem  6

Explain why the statement "The running time of algorithm $$A$$ is at least $$O(n^2)$$" is meaningless.

### Problem 7

Recall the formula for a geometric sum:

$$\displaystyle \sum_{i =0}^n a^i = \frac{1 - a^{n+1}}{1 - a}$$.

Find the values of the following sums

__a)__ $$\displaystyle\sum_{n = 0}^8 (-3)^n$$

__b)__ $$\displaystyle\sum_{t = 0}^8 (2 \cdot 3^t + 3 \cdot 2^t)$$

__c)__ $$\displaystyle\sum_{s = 0}^8 (2^{s+1} - 2^s)$$

__d)__ Based on the formula for a geometric sum, for what range of values of $$a>0$$ does the sum diverge as $$n \rightarrow \infty$$ and for what range does the sum converge? What does it converge to?

### Problem 8

Order by $$\Theta$$-notation, and indicate those have the same asymptotic growth rate (i.e., that are $$\Theta$$ of each other): $$e^n$$, $$n$$, $$2^n$$, $$n \log n$$, $$\log n$$, $$n^2$$, $$n^4$$, $$n \log_{10} n$$, $$\sqrt{n}$$, $$\sqrt[36]{n}$$, $$2^{n^2}$$, $$\log \sqrt{n}$$, $$(\log n)^2$$, $$\log n^2$$.

__Note:__ intuitively, "$$f$$ is $$\Theta(g)$$" roughly means "$$f = g$$", the same way that "$$f$$ is $$O(g)$$" roughly means "$$f \leq g$$".

Formally, "$$f$$ is $$\Theta(g)$$" means "$$f$$ is $$O(g)$$" and "$$g$$ is $$O(f)$$".

__Extra credit:__ also order $$\log \log n$$,  $$n / (\log \log n)$$, [$$\log^* n$$](https://en.wikipedia.org/wiki/Iterated_logarithm) (you can also find an explanation in the textbook)

### Problem 9
Give a big-$$O$$ estimate for each of the following functions. For the function $$g$$ in your estimate that $$f(n)$$ is $$O(g(n))$$ use as simple of a function $$g$$ as possible, and of the smallest order.

__a)__ $$5n^3 - 7n^2 + 88$$  
__b)__ $$ (n\log n + n^2)(n^3 + 2)$$  
__c)__ $$\log(n^3 + 1) + (\log n)^2$$  
__d)__ $$(n \log n + 1)^2 + (\log n + 1)(n^2 + 1)$$  
__e)__ $$n^{2n} + n^{n^2}$$  
__f)__ $$(n! + 2^n)(n^3 + \log(n^2 + 1))$$  
__g)__ $$n \cdot (5/4)^{\log_4n + 1}$$

__Hint__: you can simplify __g)__ to $$O(n^?)$$ where ? is something for you to determine.

## Part 2: Recursion and divide-and-conquer algorithms

### Problem 10

Solve the following recurrence relations and give a $$\Theta$$-bound for each.

__a)__ $$T(n) = 2 T(n/3) + 1$$

__b)__ $$T(n) = 5 T(n/4) + n$$

__c)__ $$T(n) = 7 T(n/7) + n$$

__d)__ $$T(n) = 9T(n/3) + n^2$$

__e)__ $$T(n) = 8 T(n/2) + n^3$$

__f)__ $$ T(n) = T(n-1) + 2$$

__g)__ $$T(n) = T(n-1) + n^c$$, where $$c\geq 1$$ is a constant

__h)__ $$T(n) = T(n-1) + c^n$$, where $$c > 1$$ is a constant

### Problem 11

Suppose we change the definition of the maximum-subarray problem to allow the result to be an empty subarray, where the sum of the values of an empty subarray is 0. How would you change any of the algorithms that do not allow empty subarrays to permit an empty subarray to be the result?


### Problem 12

How many lines, as a function of $$n$$ (in $$\Theta(\cdot)$$ form), does the following program print? Write a recurrence and solve it.

```python
def f(n):  
    if n > 1:
        print "still going"
        f(n/2)
        f(n/2)
```

#### Problem 13

You are given an array of $$n$$ elements, and you notice that some of the elements are duplicates; that is, they appear more than once in the array. Show how to remove all duplicates from the array in time $$O(n \log n)$$.


### Problem 14 (extra credit challenge problem)

Given a sorted array of distinct integers $$A[1,\dots, n]$$, you want to find out whether there is an index $$i$$ for which $$A[i] = i$$. Give a divide-and-conquer algorithm that runs in $$O(\log n)$$.

### Problem 15 (extra credit challenge problem)

You are given two sorted lists of size $$n$$ and $$n$$. Give an $$O(\log n)$$ time algorithm for computing the $$k$$-th smallest element in the union of the two lists.


## Rubric

This assignment is worth 20 points:

* 10 points for reasonable attempt on all problems. This means all answers must be justified. Getting the "right answer" doesn't count without a reasonable explanation as to how you got it. The solutions must be entirely written by yourself (that is, no copying).
* 8 points for correctness on 4 problems, randomly chosen by the grader.
* 2 points for presentation and legibility.

Bonus: 1 point for the extra credit problem (must be turned in with the rest of this assignment).
