---
layout: course
courseid: 146-f16
title: Bonus programming assignment
mathjax: true
navorder: 0
---

## The code

Write a web crawler program that

1. takes as input into the terminal or command line (System.in in Java) a string that represents a URL
2. does a BFS traversal of the webgraph starting at this URL:
  * retrieves the webpage at that URL
  * adds it to a list of visited pages
  * scans this webpage for URLs (to other webpages) and enqueue them in a FIFO queue if the page hasn't been visited yet
  * dequeues a URL and repeat the process
  * <ins>prints the list of visited pages to a text file</ins>

When done with the basic webcrawler, you can start thinking about ways to improve it, potentially by adding features:

* a mechanism for breaking out of the loop, either after a certain depth of the tree, or a certain number of pages have been visited, or after a keyboard signal has been sent
* speed up the process of determining whether a page has been visited
* clean up the URLs by removing [query strings](https://en.wikipedia.org/wiki/Query_string) and other spurious artifacts
* other forms of performance, correctness, usability improvements you can think of.

## The documentation

In a README file, include:

* a list of libraries (and version number) your program depends on (in other words, the minimal information to be able to get your program working)
* instructions for running and interacting with your program

Write up a summary of your work, typed and saved as a PDF file:

* describe your design and anything you have done that is beyond the basics.
* small sample input/output
* describe any challenges you may have encountered and/or ideas for potential improvements.
* any thoughts you would like to share: your experience of doing this assignment, things you've learned as a result, suggestions for improvement, etc.
* header information: your name, class and section, name of assignment
* references and resources you've used along the way, and people you talked to.

## Submission

Make a zip file with your source code, PDF file and README file, and submit it to Canvas.

Both the code and documentation must be your own individual work.

## Rubric

Graded out of 10 points.

* 1 pt: contents of zip file are as expected
* 1 pt: program compiles and initially runs without errors
* 2 pt: program has the expected input/output behavior
* 2 pt: logic of the BFS traversal is correct
* 1 pt: code is organized and readable
* 1 pt: README file contains the expected information
* 2 pt: PDF file contains reasonable documentation and thoughtful commentary.

We reserve the right to grant additional points for well-implemented additional improvements and features.
