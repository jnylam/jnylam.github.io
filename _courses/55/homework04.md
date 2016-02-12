---
layout: course
title: "Homework 4"
courseid: 55
navorder: 0
mathjax: true
---

Due date: Wednesday 2/17/2016 in class  
Instructions: please turn in each part stapled separately. Label each part with

* your name,
* homework number,
* part and
* instructor name.

Please do not use paper torn off of a notebook.

## Part 1

### Problem 1

Evaluate the following expressions. (Show your work.)

__a)__ $$\displaystyle\sum_{k = 100}^{200} k$$  
__b)__ $$\displaystyle\sum_{k = 99}^{200} k^3\qquad$$  Hint: use the fact that $$\displaystyle\sum_{k=1}^nk^3 = \frac{n^2(n+1)^2}{4}$$.  
__c)__ $$\displaystyle\prod_{i=5}^8i$$  
__d)__ $$\displaystyle\prod_{j=0}^{100} (-1)^j$$

### Problem 2

__Definition:__ A set $$S$$ is defined to be __countable__ if and only if there exists a surjection from $$\mathbf{N}$$ onto $$S$$.

Determine whether the following sets are countable, and explain your result.

__a)__ $$\mathbf{Z}^- = \{ n \in \mathbf{Z} \mid n < 0 \}$$  
__b)__ $$7\mathbf{Z} = \{ n \in \mathbf{Z} \mid \exists k (7k = n)\}$$  
__c)__ $$P(\mathbf{N})$$ (The power set of $$\mathbf{N}$$.)


### Problem 3
Show that the union of two countable sets is countable.

## Part 2

### Problem 4
Recall that

* $$f(n)$$ is $$\Omega(g(n))$$ means that $$g(n)$$ is $$O(f(n))$$, and that
* $$f(n)$$ is $$\Theta(g(n))$$ means that $$f(n)$$ is $$O(g(n))$$ and $$f(n)$$ is $$\Omega(g(n))$$.

Show the following statements are true.

__a)__ $$f(n) = 2n^2 + n^3 \log n$$ is $$O(n^4)$$  
__b)__ $$f(n) = 10$$ is $$O(1)$$  
__c)__ $$f(n) = \frac{1}{n}$$ is $$O(1)$$  
__d)__ $$f(n) = \sqrt{n}$$ is $$O(n)$$  
__e)__ $$f(n) = \log_{10}n$$ is $$\Theta(\log_2n)$$  
__f)__ $$f(n) = 2^n$$ is $$O(5^n)$$  
__g)__ $$f(n) = 2^n$$ is not $$\Omega(5^n)$$

### Problem 5

__a)__ Show the following is true: If $$f, g,$$ and $$h$$ are functions such that $$f(n)$$ is $$O(g(n))$$ and $$g(x)$$ is $$O(h(n))$$, then $$f(n)$$ is $$O(h(n))$$.  
__b)__ Show the following is not always true: If $$f(n)$$ is $$O(g(n))$$, then $$2^{f(n)}$$ is $$O(2^{g(n)})$$.

### Problem 6
Give a big-$$O$$ estimate for each of the following functions. For the function $$g$$ in your estimate that $$f(n)$$ is $$O(g(n))$$ use as simple of a function $$g$$ as possible, and of the smallest order.

__a)__ $$5n^3 - 7n^2 + 88$$  
__b)__ $$ (n\log n + n^2)(n^3 + 2)$$  
__c)__ <ins>$$\log(n^3 + 1) + (\log n)^2$$ </ins>    
__d)__ $$(n \log n + 1)^2 + (\log n + 1)(n^2 + 1)$$  
__e)__ $$n^{2n} + n^{n^2}$$  
__f)__ $$(n! + 2^n)(n^3 + \log(n^2 + 1))$$  
