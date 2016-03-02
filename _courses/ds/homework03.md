---
layout: course
title: "Homework 3"
courseid: ds
navorder: 0
mathjax: true
---

__Instructions:__ due Friday 3/11 at 11:59pm through [Sakai](http://sakai.claremont.edu) as a PDF file.


One solution for achieving a weighted partitioning of the key range, which is adapted from consistent hashing, is to give each node a number of tokens that is proportional to the load it can handle: Let's call this the naive approach. This homework assignment explores proposed alternatives, one from a theoretical standpoint, and one from a practical standpoint.

### Problem 1

Describe a situation in which weighted consistent hashing would be useful.

### Problem 2
Read sections 1, 3, and 7 of [Weighted distributed hash tables](http://dl.acm.org/citation.cfm?id=1074008).

__(a)__ What criticism does this paper have of the naive approach? Illustrate with an example.

__(b)__ What alternatives does it propose?

__(c)__ Are those approaches consistent, that is do they minimize disruption when the number of nodes changes? Do they achieve the correct weight balance?

__(d)__ Discuss the implementation cost of these approaches: what is the runtime for a lookup, and what is the memory footprint associated with maintaining state?

### Problem 3

Read sections 4.9 and 6.2 of [Dynamo: Amazon's highly available key-value store](http://dl.acm.org/citation.cfm?id=1294281) and answer the following questions:

__(a)__ What criticism does this paper have of the naive approach?

__(b)__ What alternatives does it propose?

__(c)__ Discuss the implementation cost of these approaches.

__(d)__ Besides runtime and memory footprint, what are some other practical considerations that the authors were taking into account when designing the proposed alternatives?
