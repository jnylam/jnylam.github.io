---
layout: course
courseid: 149-f16
title: Homework 3
mathjax: true
navorder: 3
---

The goal of this assignment is to gain a better understanding of memory management. Specifically, you will practice translating virtual addresses into physical ones in Part 1, predict the behavior of a free memory manager in Part 2, and read about the design of a real-world memory allocator from its designer in Part 3.

This assignment can be done alone or in groups of two.

Read on slab allocation
simulation: paging-linear-translate
simulation

### Part 1: address translation

Do the homework on paging at the end of Chapter 18, answering questions <del>1-8</del> <ins>1-4</ins>.

* [Chapter 18](http://www.cs.wisc.edu/~remzi/OSTEP/vm-paging.pdf)
* [Video](http://youtu.be/AhfSDqud3j4)
* [Code](http://pages.cs.wisc.edu/~remzi/OSTEP/Homework/HW-Paging-LinearTranslate.tgz)

### Part 2: free memory management

Do the homework on malloc at the end of Chapter 17, answering questions <del>1-4</del> <ins>1-7</ins>.

* [Chapter 17](http://www.cs.wisc.edu/~remzi/OSTEP/vm-freespace.pdf)
* [Code](http://pages.cs.wisc.edu/~remzi/OSTEP/Homework/HW-Freespace.tgz)

### Part 3: slab allocator

Read the paper: [The Slab Allocator:
An Object-Caching Kernel Memory Allocator](http://www.cs.dartmouth.edu/~sergey/cs258/2010/bonwick94.pdf), Jeff Bonwick.

Answer the following questions:

__1.__ Compared to the buddy allocator, is the slab allocator more likely to lead to internal fragmentation? Explain your reasoning.

__2.__ Compared to the buddy allocator, is the slab allocator more likely to lead to external fragmentation? Explain your reasoning.

__3.__ One of the weaknesses of slab allocation is a phenomenon called calcification: once all free slabs have been assigned to one cache or another, it is difficult to adjust the sizes of the caches. Explain why this could be the case. Hint: what must happen for a slab assigned to a cache to become free again?

## Deliverables

__Due date__: see Canvas.

Submit a single `.pdf` file containing your answers to all questions above.

If you are working in a group of two, include both of your names at the beginning of the document. Only one of you should submit the assignment to Canvas.

## Rubric

This assignment is out of 10 points.

* 3 points per part: half points for reasonable attempt, full points for a correct solution (Part 1 and 2) or a solution with a reasonable justification (Part 3).
* 1 point for a professional presentation: correctly following the submission guidelines, presentation, writing in complete sentences.

## Acknowledgements

Parts 1 and 2 are homework from the free online textbook [Operating Systems: Three Easy Pieces](http://pages.cs.wisc.edu/~remzi/OSTEP/), Arpaci-Dusseau and Arpaci-Dusseau.
