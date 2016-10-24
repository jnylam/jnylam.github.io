---
layout: course
courseid: 146-f16
title: Homework 7
mathjax: true
navorder: 0
---

### Exercises

The following exercises cover required knowledge for this course. They should be solved but solutions to these will not be collected.

__(a)__ [11.2-1] Suppose we use a hash function $$h$$ to hash $$n$$ distinct keys into an array $$T$$ of length $$m$$. Assuming simple uniform hashing, what is the expected number of collisions? More precisely, what is the expected cardinality of $$\{\{k, l\}: k \neq l \text{ and } h(k) = h(l)\}$$?

__(b)__ [based on 11.2-2] Consider a hash table with 9 slots, in which collisions are resolved by  chaining. Show the contents of the hash table  when the following keys are inserted: 5, 28, 19, 15, 20, 33, 12, 17, 10. Let the hash function be $$h(k) = k \mod 9$$.

__(c)__ [11.4-1] Consider inserting the keys 10, 22, 31, 4, 15, 28, 17, 88, 59 into a hash table of length $$m = 11$$ using open addressing with the auxiliary hash function $$h'(k) = k$$. Illustrate the result of inserting theses keys using linear probing, using the quadratic probing hash function $$h(k) = (h'(k) + c_1i + c_2i^2) \mod m$$ where $$c_1 = 1$$ and $$c_2 = 3$$, and using double hashing with $$h_1(k) = k$$ and $$h_2(k) = 1 + k\mod (m-1))$$.

__(d)__ [based on 11.4-2] Consider a hash table in which collisions are resolved by open addressing, and in which the probing function is $$h(k, i)$$. Write pseudocode for insertion and deletion from the hash table. The deletion method should set the deleted table entry to the special value DELETED, and the insertion method should handle that special value appropriately.

### Problem 1: hash chaining (11.2-3)

Professor Marley hypothesizes that he can obtain substantial performance gains by modifying the chaining scheme to keep each list in sorted order. How does the professor's modification affect the running time for successful searches, unsuccessful searches, insertions, and deletions?

### Problem 2: open-addressing (11.4-3)

Consider an open-address hash table with uniform hashing. Give upper bounds on the expected number of probes in an unsuccessful search and on the expected number of probes in a successful search when the load factor is 3/4 and when it is 7/8.

### Problem 3: modified quicksort (based on Goodrich  & Tamassia R-8.4-5)

Consider the modification of the deterministic quicksort algorithm described in class so that, instead of selecting the first element in an $$n$$-element sequence as the pivot, we choose the element at index $$\lfloor n/2 \rfloor$$, that is, an element in the middle of the sequence.

__(a)__ What is the running time of this version of quicksort on a sequence that is already sorted? Use O-notation; you do not need to explain your answer.

__(b)__ Describe an input sequence that would cause this version of quick-sort to run in $$\Theta(n^2)$$ time.


### Problem 4: duplicate elements in quicksort (based on Goodrich & Tamassia R-8.7)

Suppose that the deterministic quicksort algorithm described in class is executed on a sequence with duplicate elements. What happens in the partition step when all the elements of the input sequence are equal?

__(a)__ How many comparisons are done on quicksort if the entire array is the same number?

__(b)__ Describe a modified version of quicksort in which arrays of same number run in $$n-1$$ comparisons. Hint: partition the array into three parts rather than two.

### Optional: memoization via hash tables

The following exercise is not collected and is not required knowledge for the course.

Earlier in the course, we saw that recursive algorithms could be sped up by remembering previously computed values. Specifically, we organized these values by storing them in an array. We called this method bottom-up or table filling. Another way to remember previous values that is less structured is to use a hash table to cache the values. The following link is an activity which illustrates this technique in Python.

[Memoized Fibonacci](https://glot.io/snippets/ejb5lqkxr0)


## Submission

Problems 1 to 4 should be submitted on Canvas as a __single PDF file__.

At the top of your file, include:

* your name
* CS 146
* the class section
* Homework [number]

Give credit to those who have helped you by including

* the name of any classmates you collaborated with
* the name of any other person you received help from
* a reference to any other source you may have used to in order to solve problems on this assignment.

All solutions must be written by yourself. Plagiarized work will not receive any credit. Repeated occurrences will result in a report to the department.

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

* 4.5 points per problem, 2.5 for a reasonable attempt on it and 2 for correctness.
* 1 point for a correctly submitted assignment, that is, as a single PDF file that is legible (if you choose to take pictures, make sure the text is in focus, please check on a computer screen before submitting), properly oriented, etc.
* 1 point for presentation and neatness.
