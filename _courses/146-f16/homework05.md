---
layout: course
courseid: 146-f16
title: Homework 5
mathjax: true
navorder: 0
---

### Problem 1: find the convex hull

__(a)__ Draw the convex hull of the following set of points:

$$\{(2,2), (4,4), (6,4), (8,1), (8,7), (9,3), (1,5), (5,4)\}.$$

__(b)__ Suppose that we run Graham's scan on this set of points. Describe the sequence of pushes and pops that are applied to the stack. Your answer should have the format: push (x1, y1), push (x4, y4), pop, push (x3, y3)...

### Problem 2: heap

Is there a (min-)heap $T$ storing seven distinct elements such that a preorder traversal of $T$ yields the elements of $T$ in sorted order?

### Problem 3: median data structure

Describe a method for maintaining the median of an initially empty set, $S$, subject to an operation, $\mathsf{insert}(x)$, which inserts the value $x$, and an operation, $\mathsf{median}()$, which returns the median in $S$. Each of these methods should run in at most $O(\log n)$ time, where $n$ is the number of values in $S$.

Hint 1: <span class="hint">use one or more known data structures as a black box (this means, use their API, without worrying about how they work internally.)</span>

Hint 2: <span class="hint">use a min-heap and a max-heap as black boxes</span>

Hint 3: <span class="hint">add items smaller than current median to min-heap</span>

Hint 4: <span class="hint">how can you maintain a roughly equal number of elements in each?</span>

## Extra credit: programming a binary search tree

Complete the implementation of the binary search tree started in class.

[BST starter code](https://glot.io/snippets/ej354dtkn2)


## Submission

Solutions to the written problems should be turned in on Canvas as a __single PDF file__.

The extra credit assignment should be turned in separately. Save the code to a single file named `main.py` and turn that in on Canvas under "Homework 5 extra credit".

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

* 6 points per problem, 3 for a reasonable attempt on it and 3 for correctness.
* 1 point for a correctly submitted assignment, that is, as a single PDF file that is legible (if you choose to take pictures, make sure the text is in focus, please check on a computer screen before submitting), properly oriented, etc.
* 1 point for presentation and neatness.
* 1 point for the extra credit problem if the code in the `main` function passes without errors, and the output is sorted. This code must still be correct when the input lists in `main` changes.
