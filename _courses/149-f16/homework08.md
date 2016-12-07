---
layout: course
courseid: 149-f16
title: Homework 8
mathjax: true
navorder: 3
---

### Problem 1

Read sections 1, 2, 4.2, 4.4, 6.2, 6.3 of [Dynamo: Amazon's highly available key-value store](http://dl.acm.org/citation.cfm?id=1294281) and answer the following questions:

__(a)__ What is a key-value store?  

__(b)__ One of the primary goals guiding the design of Dynamo is high-availability. What does this term mean?  

__(c)__ In what way are vector clocks used to help achieve high-availability?  

__(d)__ Using notation similar to that given in Figure 3, describe an example in which the use of a truncation scheme produces two versions of the data having an ancestor-descendant relationship, but whose version clocks do not reflect this relationship.

__(e)__ The CAP theorem sets up a tradeoff between (strong) consistency and high availability. This is because network partitioning is non-negotiable, the network is always at risk of partitioning: servers and network links are subject to failure. What is the tradeoff point that Dynamo settles on?

__(f)__ Based on what you read in 6.3, the authors give a concrete example to help illustrate the choice made in (e). Based on this example, what justification do they give for making this choice?

__(g)__ In section 6.2, the authors describe a problem that is associated with implementing the standard version of consistent hashing, which is the version we described in class. What is this problem? Explain what data partitioning and data placement are, and how these are different.

__(h)__ Explain what the authors considered to be a solution to this problem, and how this solution works.

### Problem 2

In class, we talked about the 2-phase commit protocol, which allows multiple nodes to agree to perform a distributed commit operation, or to unanimously back out of it. Recall that 2PC is safe but not live. We will now consider 3-phase commit (or 3PC), which is live but not safe.

Review the [notes for 2PC and 3PC](https://paper.dropbox.com/doc/Distributed-systems-consensus-protocols-ErUG5o9i7ZcVU p6LiLILD) and answer the following questions and those you took concerning 2PC

__(a)__ Given the brief description for 3PC provided in the notes, draw a time diagram for 3PC containing a timeline for the coordinator, a timeline for one of the voters, arrows representing messages sent, labeled with a brief description of the messages, and for each timeline, labels for intervals of time representing the different states each participant goes through. Remember that arrows representing messages through space and _time_ are drawn diagonally rather than horizontally.

__(b)__ Based on your understanding of this protocol, and using a similar style of deduction as we employed in class, what is the appropriate protocol if a voter times out waiting for a precommit? Why?

__(c)__ What if a voter received a precommit decision and now times out waiting for a commit message? What is the appropriate protocol? Why?

__(d)__ In the notes, read the scenario which demonstrates that 3PC is not always safe. Explain why this series of events leads to an unsafe state. In other words, what is the outcome?

## Deliverables

__Due date__: see Canvas.

A single `.pdf` file containing:

  * your name and your partner's name if any, your ID numbers
  * your typed-up solutions

If you are working in a group of two, only one of you should submit the assignment to Canvas.

## Rubric

This assignment is out of 10 points.
