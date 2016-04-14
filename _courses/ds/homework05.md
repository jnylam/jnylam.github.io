---
layout: course
title: "Homework 5"
courseid: ds
navorder: 3
mathjax: true
---

__Instructions:__ due Wednesday 4/20 at 11:59pm through [Sakai](http://sakai.claremont.edu) as a PDF file.

### Problem 1

The purpose of this problem is to illustrate the gap that can exist between an algorithm's description and its implementation in practice. Read [Paxos made live: an engineering perspective](http://research.google.com/archive/paxos_made_live.pdf). The most relevant parts for the question are sections 4.2, 5 and 6. Recommended also: section 1 and 4.1.

Describe two engineering challenges faced in the implementation of Paxos and how they were resolved.

### Problem 2

In this problem, we explore an alternative design to Chubby called Zookeeper, whose [code is open-source](https://zookeeper.apache.org/)! Read [A simple totally ordered broadcast protocol](http://dl.acm.org/citation.cfm?id=1529978) and answer the following questions.

__(a)__ Zookeeper is a distributed coordination service maintained by Yahoo and Apache that is often compared to Google's distributed lock service Chubby. In what way(s) does Zookeeper differ from Chubby from a client application's perspective?

__(b)__ What are the limitations of Paxos that prevented it from being used as part of the replication mechanism in Zookeeper?

__(c)__ In a few paragraphs, describe the Zab atomic broadcast protocol, including the recovery process. You may use a time diagram as part of your explanation.

### Problem 3

Final week presentation: describe two potential distributed topics you would like to do a 10-20 minute presentation on (the actual length will be determined as a function of the number of groups presenting). The topics you choose can be a general problem or technique that applies to distributed systems in general. Or it can be a case study. Please specify if you will be working alone or with a partner, and who that partner is.

### Bonus

Send an encrypted email message to [jenny.lam@pomona.edu](mailto:jenny.lam@pomona.edu) using [my PGP key](key.asc). Use your favorite search engine to figure out how to do this.
