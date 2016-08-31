---
layout: course
courseid: 146-f16
title: Homework 1
mathjax: true
navorder: 0
---

## Part 1 (programming): practice recursion on CodingBat

### How to get started

1. Create an account on [codingbat.com](//codingbat.com).
2. Under __Prefs__, scroll down the page and enter the teacher's email account: __jnylam@gmail.com__. This is how the professor will be able to see your progress and give you credit. So you don't need to submit anything for this part of the homework. Just solve the problems.

### The actual assignment

Solve as many __Recursion-1__ problems as you wish, choosing the ones you find interesting or challenging. Solve 10 for full credit by the homework due date.

### Tips

Tip #1: don't solve all the problems in one sitting. Wait a day or two and then come back for more. Studies have shown that spaced practice is better for long-term memory than drill practice.

Tip #2: it's tempting, especially when you can get immediate feedback on whether you got it right, to keep fixing your solution until all tests pass. This is bad programming and won't help you during exams and coding interviews. Instead, be thoughtful about how you are going about solving the problem, and try to solve the problems in the fewest number of attempts.

## Part 2 (written): review proof by induction

### Submission

Solutions should be turned in on Canvas as a __single PDF file__. Here are some options for how to do this:

You have the option of handwriting your solutions on paper, scanning them, and converting them to PDF. Please do not send the images.

You also have the option of typing your solutions up in your favorite word processor. Export or print your document as a PDF file and submit that. Please do not a submit .docx file.

Finally, you have the option of preparing a professional-looking document using LaTeX. This is what authors use to write textbooks and research papers. If you choose this option, here are some pointers to get you started.

* [Getting LaTeX](https://www.latex-project.org/get/)
* [LaTeX homework template](http://www.jennylam.cc/assets/template.zip): this is a good place to start learning LaTeX. Feel free to modify this document as you need.
* [Any of the many good LaTeX tutorials/cheatsheets/beginner's guides online](https://lmddgtfy.net/?q=Latex%20quickstart).

### Warmup example

As we mentioned in class, here is how you would prove that

$$ \sum_{i = 1}^n i^2 = \frac{1}{6}n(n+1)(2n+1)$$.

__Proof.__

__Base case__: this is when n = 1. The left hand side is equal to 1, and the right hand side is equal to $$(1/6)(1)(2)(3)$$ which is equal to 1. So the LHS = the RHS, which means the base case is satisfied.

__Induction step__: assume that the formula works for $$n$$, $$n - 1$$, $$n - 2$$, ... down to when we plug 1 for in for $$n$$ (these  assumptions are called the induction hypothesis). Our goal is to show that the formula works for value $$n +1$$ in the formula, using nothing more than one of our assumptions and valid algebraic manipulation (which you've learned in a previous math class). This is how it goes:

$$\sum_{i = 1}^{n+1} i^2 = \sum_{i = 1}^n i^2 \ + \ (n+1)^2$$

$$ = \frac{1}{6}n(n+1)(2n+1) + (n+1)^2 $$

$$= \frac{1}{6}(n+1)(n(2n+1)+6(n+1)) $$

$$= \frac{1}{6}(n+1)(2n^2 + 7n + 6) $$

$$= \frac{1}{6}(n+1)(n+2)(2n+3) $$

$$= \frac{1}{6}(n+1)(n+2)(2(n+1)+1)$$

Since we proved the formula for $$n+1$$, this concludes the proof.


### Warmup 1 (optional)

Prove by induction that

$$\sum_{i = 1}^n (2i - 1) = n^2$$

### Warmup 2 (optional)

Prove by induction that

$$\sum_{i = 1}^m (3i - 2) = \frac{m(3m+1)}{2}$$

### Warmup 3 (optional)

Prove by induction that

$$\sum_{k = 1}^n (4k - 3) = n(2n - 1)$$

### Warmup 4 (optional)

Prove by induction that

$$\sum_{j = 1}^k (3j) = \frac{(3k)(k+1)}{2}$$

### Warmup 5 (optional)

Prove by induction that

$$\sum_{j = 1}^r 5j = \frac{5r(r+1)}{2}$$


### Problem 1
Prove the following formula by induction.

$$ \sum_{i = 1}^n i \times (i!) = (n+1)! - 1$$

### Problem 2

Prove the following formula by induction.

$$\frac{1}{1\cdot 2} + \frac{1}{2 \cdot 3} + \cdots + \frac{1}{n(n+1)}$$

Find a formula for this expression by examining the values of this expression for small values of $$n$$. Use mathematical induction to prove your result.

### Problem 3

Show by mathematical induction that if $h > -1$, then

$$1 + nh \leq (1+h)^n$$

for all $$n \in \mathbf{N}$$. This is called __Bernouilli's inequality__.

### Problem 4

For which nonnegative integers $$n$$ is $$2n + 3 \leq 2^n$$? Prove your answer using mathematical induction.

### Problem 5

Let $$T: \mathbf{N} \to \mathbf{R}$$ be defined recursively by $$T(0) = 0$$ and

$$T(n) = T(\lfloor n/2\rfloor) + n$$

Prove that $$T(n) \leq 2n$$. (Hint: use the fact that $$\lfloor n \rfloor \leq n$$.)

### Problem 6

Let $$\text{fib}(n)$$ be the $$n$$-th Fibonacci number:

$$\text{fib}(n) = \begin{cases}
1 & \text{if } n = 0 \text{ or } 1\\
\text{fib}(n - 1) + \text{fib}(n - 2) & \text{else}
\end{cases}$$

Show that $$\sum_{k = 0}^n \left(\text{fib}(k)\right)^2 = \text{fib}(n)\text{fib}(n+1)$$ for all positive integers $$n$$.  

### Problem 7

Show that $$\text{fib}(n) \leq 2^n$$ for all $$n \in \mathbf{N}.$$  

### Problem 8 (extra credit)

Recall that $$\displaystyle \prod_{x \in \varnothing} x = 1$$ and define the powerset $$P(A)$$ of a set $$A$$ as

$$P(A) = \{ S \mid S \subseteq A \}.$$

Show that

$$\sum_{s \in P(\{1, 2, \dots, n\})} \frac{1}{\prod_{x \in s}x} = n + 1.$$

## Getting help

Since it's Labor Day on Monday, there's no office hours or class. If you have questions or need help, a good place to do this is on Piazza.


## Rubric

This assignment is worth 20 points:

* 5 points for reasonable attempt on 10 programming problems from Recursion-1.
* 5 points (0.5 per problem) for correctly solved programming problems.
* 6 points for reasonable attempt on all 7  written problems. This means all answers must be justified. Getting the "right answer" doesn't count without a reasonable explanation as to how you got it. The solutions must be entirely written by yourself (that is, no copying).
* 4 points for correctness on 2 of the written problems, randomly chosen by the grader.

Warmup: You can submit the warmup problems for feedback as well, but those won't count towards the grade. Those are meant as easier practice problems if you are having trouble with the main problems.

Bonus: 0.5 point extra credit for each additional Recursion-1 problem towards homework recorded at the end of the semester. So you can keep coming back before each exam and practice some more. The last day to get points for this will be on the day before the final exam.
