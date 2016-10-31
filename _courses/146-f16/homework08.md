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

__(c)__ [11.4-1] Consider inserting the keys 10, 22, 31, 4, 15, 28, 17, 88, 59 into a hash table of length $$m = 11$$ using open addressing with the auxiliary hash function $$h'(k) = k$$. Illustrate the result of inserting theses keys using linear probing, using the quadratic probing hash function $$h(k,i) = (h'(k) + c_1i + c_2i^2) \mod m$$ where $$c_1 = 1$$ and $$c_2 = 3$$, and using double hashing with $$h_1(k) = k$$ and $$h_2(k) = 1 + (k \mod (m-1))$$.

__(d)__ [based on 11.4-2] Consider a hash table in which collisions are resolved by open addressing, and in which the probing function is $$h(k, i)$$. Write pseudocode for insertion and deletion from the hash table. The deletion method should set the deleted table entry to the special value DELETED, and the insertion method should handle that special value appropriately.

### Problem 1:

Random walk


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
