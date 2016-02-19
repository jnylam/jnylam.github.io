---
layout: course
title: "Homework 5"
courseid: 55
navorder: 3
mathjax: true
---

Due date: Wednesday 2/24/2016 in class  
Instructions: please turn in each part stapled separately. Label each part with

* your name,
* homework number,
* part and
* instructor name.

Please do not use paper torn off of a notebook.

## Part 1


### Problem 1

$$3 + 3 \cdot 5 + 3 \cdot 5^2 + \cdots + 3 \cdot 5^n$$

__a)__ Rewrite the expression above using summation notation.  
__b)__ Find a formula for this expression using the geometric formula.  
__c)__ Use proof by induction to show that your answer to part b) is correct.

### Problem 2

$$\frac{1}{1\cdot 2} + \frac{1}{2 \cdot 3} + \cdots + \frac{1}{n(n+1)}$$

Find a formula for this expression by examining the values of this expression for small values of $$n$$. Use mathematical induction to prove your result.

### Problem 3

Show by mathematical induction that if $h > -1$, then

$$1 + nh \leq (1+h)^n$$

for all $$n \in \mathbf{N}$$. This is called __Bernouilli's inequality__.

### Problem 4

For which nonnegative integers $$n$$ is $$2n + 3 \leq 2^n$$? Prove your answer using mathematical induction.

### Problem 5


Show that

$$\sum_{s \in P(\{1, 2, \dots, n\})} \frac{1}{\prod_{x \in s}x} = n.$$


### Problem 6

Let $$T: \mathbf{N} \to \mathbf{R}$$ be defined recursively by

$$T(n) = T(\lfloor n/2\rfloor) + n$$

Prove that $$T(n) \leq 2n$$. (Hint: use the fact that $$\lfloor n/2 \rfloor \leq n$$.)

### Problem 7

Let $$\text{fib}(n)$$ be the $$n$$-th Fibonacci number:

$$\text{fib}(n) = \begin{cases}
1 & \text{if } n = 0 \text{ or } 1\\
\text{fib}(n - 1) + \text{fib}(n - 2) & \text{else}
\end{cases}$$

Show that $$\sum_{k = 0}^n \left(\text{fib}(k)\right)^2 = \text{fib}(n)\text{fib}(n+1)$$ for all positive integers $$n$$.  

### Problem 8

Show that $$\text{fib}(n) \leq 2^n$$ for all $$n \in \mathbf{N}.$$  

### Problem 9

Show that for all $$n \in \mathbf{N}$$,

$$\text{fib}(n) \geq \frac{1}{\sqrt{5}}\left(\frac{1+ \sqrt{5}}{2}\right)^n.$$

Note: the number $$\displaystyle\varphi = \frac{1 + \sqrt{5}}{2}$$ is known as the __golden ratio__.

### Problem 10

Give a recursive definition of ...

__a)__ the sequence defined by $$a_n = 10^n$$ where $$n \in \mathbf{N}$$.  
__b)__ the sequence defined by $$b_n = n(n+1)$$ where $$n \in \mathbf{N}$$.  
