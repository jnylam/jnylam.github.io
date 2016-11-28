---
layout: course
courseid: 146-f16
title: Homework 11
mathjax: true
navorder: 0
---

### Bonus programming problem

Write a web crawler program that

1. takes as input into the terminal or command line (System.in in Java) a string that represents a URL
2. does a BFS traversal of the webgraph starting at this URL:
  * retrieves the webpage at that URL
  * scans this webpage for URLs (to other webpages) and enqueue them in a FIFO queue if the page hasn't been visited yet
  * dequeues a URL and repeat the process
3. add features to improve your webcrawler:
  * speed up the process of determining whether a page has been visited
  * clean up the URLs by removing [query strings](https://en.wikipedia.org/wiki/Query_string)
  * other forms of performance and correctness improvements you can think of.

Document your design either in extensive comments in your code or in a separate PDF file (please no .docx files), explaining what challenges you've encountered or ideas for potential improvements.

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
