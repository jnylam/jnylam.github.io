---
layout: course
courseid: 149-f16
title: Schedule
navorder: 1
---

<a name="schedule"></a>

This schedule is tentative and subject to change during the semester. Changes will be reflected on this page as well as announced during lecture. Students should consult this schedule regularly for the most up-to-date information.

Week|Date|Topic|Reading
----|-------|-------|---
1 | W 8/24 | [Introduction](#introduction) | [Chapter 2](http://pages.cs.wisc.edu/~remzi/OSTEP/intro.pdf)
2 | M 8/29 | OS structure and services [[pdf](structure and services.pdf)] [[keynote](structure and services.key)] | . [Interface stability](http://www.cs.pomona.edu/classes/cs121/supp/stability.html)<br> . [Tanenbaum-Torvalds debate](https://en.wikipedia.org/wiki/Tanenbaum%E2%80%93Torvalds_debate)<br> . [Wobbly windows!](https://www.youtube.com/watch?v=nbCg9_YgKgM)
2 | W 8/31 | Processes [[pdf](processes.pdf)] [[keynote](processes.key)] | . [Chapter 3](http://pages.cs.wisc.edu/~remzi/Classes/537/Spring2016/Book/dialogue-virtualization.pdf)<br> . [Chapter 4](http://pages.cs.wisc.edu/~remzi/Classes/537/Spring2016/Book/cpu-intro.pdf)<br> . [Chapter 5](http://pages.cs.wisc.edu/~remzi/Classes/537/Spring2016/Book/cpu-api.pdf)<br> . [Chapter 6](http://pages.cs.wisc.edu/~remzi/Classes/537/Spring2016/Book/cpu-mechanisms.pdf)<br>
3 | M 9/5 | _Labor day_ |
3 | W 9/7 | Scheduling: basics [[pdf](scheduling.pdf)] [[keynote](scheduling.key)] | . [Chapter 7](http://pages.cs.wisc.edu/~remzi/OSTEP/cpu-sched.pdf)<br> . [Chapter 8](http://pages.cs.wisc.edu/~remzi/OSTEP/cpu-sched-mlfq.pdf)<br>[Homework 1](homework01.html) due Su 9/11 at 11:59p
4 | M 9/12 | Scheduling: queuing theory [[pdf](scheduling2.pdf)] [[keynote](scheduling.key)]
4 | W 9/14 | Scheduling: trending topics [[pdf](scheduling3.pdf)]  [[keynote](scheduling3.key)]
5 | M 9/19 | Memory: address translation [[pdf](memory1.pdf)] [[keynote](memory1.key)] | . [Chapter 13](http://pages.cs.wisc.edu/~remzi/OSTEP/vm-intro.pdf)<br> . [Chapter 15](http://pages.cs.wisc.edu/~remzi/OSTEP/vm-mechanism.pdf)<br> . [Chapter 16](http://pages.cs.wisc.edu/~remzi/OSTEP/vm-segmentation.pdf)
5 | W 9/21 | Memory: speeding up address translation <br> Memory: free memory management [[pdf](memory2.pdf)] [[keynote](memory2.key)] | . [Chapter 17](http://pages.cs.wisc.edu/~remzi/OSTEP/vm-freespace.pdf)<br> . [Chapter 18](http://pages.cs.wisc.edu/~remzi/OSTEP/vm-paging.pdf)<br> . [Chapter 19](http://pages.cs.wisc.edu/~remzi/OSTEP/vm-tlbs.pdf)<br> . [Chapter 20](http://pages.cs.wisc.edu/~remzi/OSTEP/vm-smalltables.pdf)<br> [Homework 2](homework02.html) due Su 9/25 11:59p
6 | M 9/26 | Memory: caching [[pdf](memory3.pdf)] [[keynote](memory3.key)] | . [Chapter 20](http://pages.cs.wisc.edu/~remzi/OSTEP/vm-smalltables.pdf)<br> . [Chapter 21](http://pages.cs.wisc.edu/~remzi/OSTEP/vm-beyondphys.pdf)
6 | W 9/28 | Memory: replacement policies [[pdf](memory4.pdf)] | . [Chapter 22](http://pages.cs.wisc.edu/~remzi/OSTEP/vm-beyondphys-policy.pdf)<br> . [Replacement policies](http://citeseerx.ist.psu.edu/viewdoc/download?doi=10.1.1.641.9013&rep=rep1&type=pdf), Belady<br> [Homework 3](homework03.html) due Su 10/2 11:59p
7 | M 10/3 | Review
7 | W 10/5 | __Exam 1__
8 | M 10/10 | Concurrency: threads, race conditions, interprocess communication | [Chapter 25](http://pages.cs.wisc.edu/~remzi/OSTEP/dialogue-concurrency.pdf)<br>[Chapter 26](http://pages.cs.wisc.edu/~remzi/OSTEP/threads-intro.pdf)<br>[Chapter 27](http://pages.cs.wisc.edu/~remzi/OSTEP/threads-api.pdf)
8 | W 10/12 | Concurrency: mutual exclusion | [Homework 4](homework04.html) due Su 10/16
9 | M 10/17 | Deadlocks
9 | W 10/19 | Condition variables
10 | M 10/24 | Performance metrics
10 | W 10/26 | I/O
11 | M 10/31 | File systems
11 | W 11/2 | File systems
12 | M 11/7 | RAID, SSDs
12 | W 11/9 | Logging and journaling
13 | M 11/14 | __Exam 2__
13 | W 11/16 | Communication protocols
14 | M 11/21 | Distributed systems
14 | W 11/23 | Distributed systems
15 | M 11/28 | Distributed systems
15 | W 11/30 | Security
16 | M 12/5 | Security
16 | W 12/7 | flex
17 | M 12/12 | flex
|T 12/20 | __Final exam__ 7:15AM--9:30AM, MH 222

---

# Introduction

## Overview
- syllabus
- introductions
- goals of an operating system
- main course topics
- profile

## Goals of this course
- introduce problems that arise naturally in OS which have wide applicability
- understand the challenges and become familiar with some of the viable solutions
- understand how researchers in the field approach these problems (both theoretically and practically) and how they evaluate potential solutions

## what is the goal of an operating system?
- manages hardware
- abstracts hardware
- presents uniform interface to applications

## the software layering
- user: applications, OS services, middleware services
- kernel: general libraries, drivers, OS kernel
- hardware: devices, privileged instruction set, general instruction set

Examples of user level programs: web browser, Skype, Photoshop, terminal, terminal programs, databases

Examples of hardware
- CPU, GPU, RAM
- camera, keyboard, mouse, monitor, printer
- Wifi, network card
- hard drive

## observations
- many applications today are found on the browser → browser as OS
- many applications are online → distributed operating systems
- deploy/run applications over a network → security

## 5 themes in this class
- virtualization
  - CPU management
  - memory management
- concurrency
  - communication
  - synchronization
  - deadlocks
- file systems
  - how do we ensure that our data is stored reliably?
  - what mechanisms can be introduced to recover data in case of failure?
- distributed systems
  - how do we maintain a responsive and reliable service over an unreliable network?
  - how do we maintain consistency of data that is shared across multiple computers?
- security
  - how do you ensure secure communication using encryption?
  - how do you manage password storage properly?
