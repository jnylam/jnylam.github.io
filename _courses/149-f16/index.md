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
2 | M 8/29 | [OS structure and services](structure and services.pdf) | . [Interface stability](http://www.cs.pomona.edu/classes/cs121/supp/stability.html)<br> . [Tanenbaum-Torvalds debate](https://en.wikipedia.org/wiki/Tanenbaum%E2%80%93Torvalds_debate)<br> . [Wobbly windows!](https://www.youtube.com/watch?v=nbCg9_YgKgM)
2 | W 8/31 | [Processes](processes.pdf) | . [Chapter 3](http://pages.cs.wisc.edu/~remzi/Classes/537/Spring2016/Book/dialogue-virtualization.pdf)<br> . [Chapter 4](http://pages.cs.wisc.edu/~remzi/Classes/537/Spring2016/Book/cpu-intro.pdf)<br> . [Chapter 5](http://pages.cs.wisc.edu/~remzi/Classes/537/Spring2016/Book/cpu-api.pdf)<br> . [Chapter 6](http://pages.cs.wisc.edu/~remzi/Classes/537/Spring2016/Book/cpu-mechanisms.pdf)<br>
3 | M 9/5 | _Labor day_ |
3 | W 9/7 | Scheduling | [Homework 1](homework01.html) due Su 9/11 at 11:59p
4 | M 9/12 | Memory management
4 | W 9/14 | Paging
5 | M 9/19 | Paging
5 | W 9/21 | Analysis of paging
6 | M 9/26 | Threads
6 | W 9/28 | Locks
7 | M 10/3 | Locks
7 | W 10/5 | __Exam 1__
8 | M 10/10 | Deadlocks
8 | W 10/12 | Condition variables
9 | M 10/17 | Performance metrics
9 | W 10/19 | Deadlocks
10 | M 10/24 | I/O
10 | W 10/26 | File systems
11 | M 10/31 | File systems
11 | W 11/2 | RAID, SSDs
12 | M 11/7 | Logging and journaling
12 | W 11/9 | flex
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
