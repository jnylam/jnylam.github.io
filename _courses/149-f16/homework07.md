---
layout: course
courseid: 149-f16
title: Homework 7
mathjax: true
navorder: 3
---

### Problem 1
Suppose I have a 320GB SATA  disk drive with the following hardware specifications.

Metric | Value
--|--
Capacity | 320 GB
Form factor | 2.3 inch
Spindle speed | 5400 RPM
Average seek time | 12.0 ms
Maximum seek time | 21 ms
Track-to-track seek time | 2 ms
Transfer rate (surface to buffer) | 850 Mbit/s (maximum)
Transfer rate (buffer to host) | 3 Gbit/s
Buffer memory | 8 MB

__(a)__ For a workload consisting of 10,000 reads to sectors __randomly scattered__ across the disk, how long will theses 10,000 requests take in total, assuming the disk services requests in __FIFO order__?

__(b)__ For a workload consisting of 10,000 reads to 10,000 __sequential sectors on the outer-most tracks__ of the disk, how long will theses 10,000 requests take in total, assuming the disk services requests in __FIFO order__?

__(c)__ For a workload consisting of 10,000 reads to sectors randomly scattered across the disk, how long will theses 10,000 requests take in total, assuming the disk services requests using the __SCAN/elevator algorithm__?

__(b)__ For a workload consisting of 10,000 reads to 10,000 __sequential sectors on the outer-most tracks__ of the disk, how long will theses 10,000 requests take in total, assuming the disk services requests  using the __SCAN/elevator algorithm__?


### Problem 2

Suppose a variation of FFS includes in each inode 12 direct, 1 indirect, 1 double indirect, 2 triple indirect, and 1 quadruple indirect pointers. Assuming 6 KB blocks and 6-byte pointers.

__(a)__ What is the largest file that can be accessed via direct pointers only?

__(b)__ To within 1%, what is the maximum file size this index structure can support?

### Problem 3

Read the following literature and respond to the following questions, justifying your answers.

[The Design Philosophy of the DARPA Internet Protocols](http://dl.acm.org/citation.cfm?id=52336)  
[End to End Principle in Internet Architecture as a Core Internet Value.](http://coreinternetvalues.org/?page_id=1415)

__(a)__ The end-to-end principle is a core design principle of the Internet. What is the end-to-end principle?

__(b)__ "Fate-sharing" is an example of the Internet's end-to-end principle. What is meant by the term fate-sharing and how does it address fault tolerance?

__(c)__ What was observed to be the greatest source of jitter (the variation in delay) on IP-based communication networks?


## Deliverables

__Due date__: see Canvas.

A single `.pdf` file containing:

  * your name and your partner's name if any, your ID numbers
  * your typed-up solutions

If you are working in a group of two, only one of you should submit the assignment to Canvas.

## Rubric

This assignment is out of 10 points.

* 1 point per question for a reasonably correct and justified answer.
* 1 point: professional presentation, written in complete sentences

## Acknowledgements

Problems 1 and 2 are from "Operating sytems, principles and practice", Anderson and Dahlin. Problem 3 is from an assignment from Rutgers University CS 417, taught by Krzyzanowski.
