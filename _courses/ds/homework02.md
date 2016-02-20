---
layout: course
title: "Homework 2"
courseid: ds
navorder: 0
mathjax: true
---

__Instructions:__ due 2/29 at 11:59pm through [Sakai](http://sakai.claremont.edu) as a PDF file.

### Problem 1

 Read sections 2 and 4.4 of [Dynamo: Amazon's highly available key-value store](http://dl.acm.org/citation.cfm?id=1294281) and answer the following questions:

__(a)__ What is a key-value store?  

__(b)__ One of the primary goals guiding the design of Dynamo is high-availability. What does this term mean?  

__(c)__ In what way are vector clocks used to help achieve high-availability?  

__(d)__ Using notation similar to that given in Figure 3, describe an example in which the use of a truncation scheme leads to produces two versions of the data having an ancestor-descendant relationship, but whose version clocks do not reflect this relationship.

### Problem 2

 Read sections 1 to 4 of [A Practical Distributed Mutual Exclusion Protocol in Dynamic Peer-to-Peer Systems](http://link.springer.com/chapter/10.1007%2F978-3-540-30183-7_2). You can start with Tannenbaum section 6.3.3 for a potentially more accessible treatment. Then answer the following:

__(a)__ What is a DHT?

__(b)__ What is the point of having a majority vote?

__(c)__ Explain why it requires at least $$2m - n$$ failing coordinators for the correctness of the voting mechanism to be violated?

__(d)__ What are two challenges with properly implementing this scheme?
