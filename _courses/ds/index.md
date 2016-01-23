---
layout: course
homepage: true
coursetitle: Distributed Systems
coursesubtitle: CSCI189A PO-01 &mdash; Spring 2016 &mdash; Pomona College
courseid: ds
title: Schedule

---

_This schedule is tentative and subject to change during the semester._

Date|Lecture|Reading
----|-------|-------
W 1/20  |  [Introduction to distributed systems](#introduction-to-distributed-systems) | 1.1, 1.2
M 1/25  |  Communication 1  | 2.1
W 1/27  |  Communication 2  |
M 2/1   |  Introduction to Go |
W 2/3   |  Concurrency in Go  | [Concurrency notes](http://www.andrew.cmu.edu/course/15-440-kesden/index/lecture_index.html) by Kesden
M 2/8   |  Remote procedure calls  |  4.1, 4.2
W 2/10  |  DFS 1 |
M 2/15  |  DFS 2 |
W 2/17  |  Time  | 6.1, 6.2
M 2/22  |**Exam 1** |
W 2/24  |  Mutual exclusion  |  6.3
M 2/29  |  Fault tolerance   |  8.5
W 3/2   |  Concurrency control  |  8.5
M 3/7   |  RAID  |  [RAID chapter](http://pages.cs.wisc.edu/~remzi/OSTEP/file-raid.pdf)<br/> (from the online textbook [Operating Systems: Three Easy Pieces](http://pages.cs.wisc.edu/~remzi/OSTEP/))
W 3/9   |  Logging and crash recovery  | 8.6
        | _Spring recess_ |
M 3/21  |  Consistent hashing  |  
W 3/23  |  Replication 1  |
M 3/28  |  Replication 2  |
W 3/30  |**Exam 2** |
M 4/4   |  Data intensive computation  |
W 4/6   |  Distributed filesystems for MapReduce / HDFS  | [Google filesystem](http://research.google.com/archive/gfs-sosp2003.pdf). Optional: [GFS follow-up interview](http://queue.acm.org/detail.cfm?id=1594206)
M 4/11  |  DNS and CDNs  |  5.3.3-5.3.4
W 4/13  |  P2P  |  5.2.3
M 4/18  |  Virtual machines  |  3.2
W 4/20  |  Byzantine fault tolerance  |  [BFT lecture by Barbara Liskov](http://video.mit.edu/watch/practical-byzantine-fault-tolerance-9388/)
M 4/25  |  Security  |  9.1, 9.2, 9.4.1
W 4/27  |  TOR  |  [TOR paper](https://svn.torproject.org/svn/projects/design-paper/tor-design.pdf) and [TOR presentation](http://freehaven.net/~arma/slides-toorcon05.pdf)
M 5/2   |**Final exam** |
W 5/4   |**Project presentations** |
        | _Finals week: no meeting_ |

---

# Introduction to distributed systems

## What is a distributed system?
  - single system image: a collection of independent computers that appears as a single coherent system to users and applications, Tannenbaum
  - *You know you have one when the crash of a computer you've never heard of stops you from getting any work done, Lamport*
  - no shared memory, no shared clock

## Why distributed systems?
-  ATMs
- collaboration: messaging, photo/video sharing
- remote content: web browsing, music & video download, IPTV
- massive performance:  rendering of Monsters University
  - average 29 hours to render each frame,
  - total: 100 million CPU hours
  - 3000 to 5000 AMD processors
  - 10 Gbps and 1Gbps network
- Google
  - 40,000 search queries per sec on ave
  - index >50 billion webpages
  - hundreds of thousands of servers
  - to index 50 million pages
    - 1999: one month
    - 2012: one minute
  - each query
    - travels 1,500 miles
    - uses 1000 computers
    - 0.2 secs

## Design challenges
- transparency: hide distribution from users / software
  - location
  - migration
  - replication
  - concurrency
  - parallelism
- usability
  - performance
  - availability
  - reliability
  - security
- dealing with reality
  - network
  - programming
  - scalability

## Key approaches
  - divide and conquer
  - replication
  - consensus
  - openness

## Projects in this class

Project 1: multi-echo server

Project 2: Bitcoin miner

- design your own transport protocol
- use it to implement a bitcoin miner

Project 3: Tribbler

- remote procedure calls
- consistent hashing
- lease based client caching model
- atomic operations

Project 4: design your own distributed service

- Paxos
- review


## Questions

- Name
- College, year, major
- Where will you be this summer, next year?
- What do you hope to get out of this course?
