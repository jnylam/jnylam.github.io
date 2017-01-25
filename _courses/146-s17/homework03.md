---
layout: course
courseid: 146-s17
title: Homework 3
mathjax: true
navorder: 0
---

## Part 1 (programming): practice recursion on CodingBat

### How to get started

(skip if you have already done it for Homework 1)

1. Create an account on [codingbat.com](//codingbat.com).
2. Under __Prefs__, scroll down the page and enter the teacher's email account: __jnylam@gmail.com__. This is how the professor will be able to see your progress and give you credit. So you don't need to submit anything for this part of the homework. Just solve the problems.

### Tips

(reminders from Homework 1)

Tip #1: don't solve all the problems in one sitting. Wait a day or two and then come back for more. Studies have shown that spaced practice is better for long-term memory than drill practice.

Tip #2: it's tempting, especially when you can get immediate feedback on whether you got it right, to keep fixing your solution until all tests pass. This is bad programming and won't help you during exams and coding interviews. Instead, be thoughtful about how you are going about solving the problem, and try to solve the problems in the fewest number of attempts.

### The actual assignment

Solve five __Recursion-2__ problems.

## Part 2 (written): dynamic programming

In each of the following problems, define a subproblem in such a way that the original problem can be defined in terms of the subproblem.

__You do not need to write code or pseudocode.__ You will be asked to do that on the next assignment.

### Problem 1: making change

You have a 20 dollar bill and want to buy &#36;17.52 worth of groceries. What is the fewest number of coins and bills the cashier can hand back to you?

More generally,

* the input consists of a `value`, which is the amount that needs to be made change for, and a list of `denominations = [d0, d1, d2, ..., dn]`;
* the output is the minimum number of coins and/or bills needed to make change.

In the example above, `value` is 248 cents and `denominations` is the sequence 1, 5, 10, 25, 100, 500, 1000, 2000, 10000.

### Problem 2: longest increasing subsequence

In the sequence 1, -2, 5, 3, 4, 8, 2, what is the longest increasing subsequence? (values are skippable)

More generally,

* the input is `sequence = [x0, x1, x2, ..., xn]`;
* the output is the length of the longest increasing subsequence.

### Problem 3: longest common subsequence

What is the longest "subword" common to the words EXPONENTIAL and POLYNOMIAL?

More generally,

* the input is two sequences `seq1 = [x0, x1, ..., xn]` and `seq2 = [y0, y1, ..., yn]`;
* the output is the length of the longest common subsequence.

### Problem 4: maximum subarray sum (bonus)

What is the contiguous subarray of [13, -3, -25, 20, 3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7] that has a maximum sum?

This is one of the problems for which we provided a divide-and-conquer algorithm. Try to express this problem in terms of subproblems.

More generally,

* the input is `seq = [x0, x1, ..., xn]`;
* the output is the value of the largest sum of any contiguous subarray of `seq`.

### Submission

Solutions should be turned in on Canvas as a __single PDF file__. Here are some options for how to do this:

You have the option of handwriting your solutions on paper, scanning them, and converting them to PDF. Please do not send the images.

__If you use a phone or tablet__ to scan your handwritten solutions, [here are some tips on how to this well](http://www.howtogeek.com/209951/the-best-ways-to-scan-a-document-using-your-phone-or-tablet/).

You also have the option of typing your solutions up in your favorite word processor. Export or print your document as a PDF file and submit that. Please do not a submit .docx file.

Finally, you have the option of preparing a professional-looking document using LaTeX. This is what authors use to write textbooks and research papers. If you choose this option, here are some pointers to get you started.

* [Getting LaTeX](https://www.latex-project.org/get/)
* [LaTeX homework template](http://www.jennylam.cc/assets/template.zip): this is a good place to start learning LaTeX. Feel free to modify this document as you need.
* [Any of the many good LaTeX tutorials/cheatsheets/beginner's guides online](https://lmddgtfy.net/?q=Latex%20quickstart).


## Rubric

This assignment is worth 20 points:

* 10 points for reasonable attempt on 5 programming problems from Recursion-2.
* 2.5 points per written problem for a correct solution.
* 1.5 points for a correctly submitted assignment, that is, as a single PDF file that is legible (if you choose to take pictures, make sure the text is in focus, please check on a computer screen before submitting), properly oriented, etc.
* 1 point for presentation and neatness.
* 1 point for the extra credit problem if solved correctly.
