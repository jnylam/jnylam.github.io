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
8 | M 10/10 | Concurrency: threads, race conditions, <br>interprocess communication [[lab](https://paper.dropbox.com/doc/OS-Introduction-to-concurrency-40oVoQLcRkqjmqJDj8Kkw)] | [Chapter 25](http://pages.cs.wisc.edu/~remzi/OSTEP/dialogue-concurrency.pdf)<br>[Chapter 26](http://pages.cs.wisc.edu/~remzi/OSTEP/threads-intro.pdf)<br>[Chapter 27](http://pages.cs.wisc.edu/~remzi/OSTEP/threads-api.pdf)
8 | W 10/12 | Concurrency: synchronization 1 [[notes](https://paper.dropbox.com/doc/Concurrency-synchronization-1-1TmE9pvouzY0CFmGCYo0K)] | [Chapter 28](http://pages.cs.wisc.edu/~remzi/OSTEP/threads-locks.pdf)<br>  [Homework 4](homework04.html) due Su 10/16
9 | M 10/17 |  Concurrency: synchronization 2 [[notes](https://paper.dropbox.com/doc/Concurrency-synchronization-2-suwthsqihdHnrzDopkWfd)] | [Chapter 29](http://pages.cs.wisc.edu/~remzi/OSTEP/threads-locks-usage.pdf)<br> [Chapter 30](http://pages.cs.wisc.edu/~remzi/OSTEP/threads-cv.pdf) (optional)
9 | W 10/19 | Concurrency: synchronization 3 [[notes](https://paper.dropbox.com/doc/Concurrency-synchronization-3-ZVonS9jNdBf2Do5U8cFzD)] |  [Chapter 31](http://pages.cs.wisc.edu/~remzi/OSTEP/threads-sema.pdf)<br>
10 | M 10/24 |Concurrency: deadlocks 1 [[notes](https://paper.dropbox.com/doc/Concurrency-deadlocks-YiN1BCCND4dLnL7NEWPGM)] | [Chapter 32](http://pages.cs.wisc.edu/~remzi/OSTEP/threads-bugs.pdf)
10 | W 10/26 | Concurrency: deadlocks 2 [[notes](https://paper.dropbox.com/doc/Concurrency-deadlocks-2-6zONa2rRj5XcUDOc6ZvKu)] | [Chapter 33](http://pages.cs.wisc.edu/~remzi/OSTEP/threads-events.pdf)<br> [Chapter 34](http://pages.cs.wisc.edu/~remzi/OSTEP/threads-dialogue.pdf)
11 | M 10/31 | Persistence: file systems and I/O devices [[notes](https://paper.dropbox.com/doc/Persistence-file-systems-9LzKhFejW0GlV01MoQZyZ)] | [Chapter 35](http://pages.cs.wisc.edu/~remzi/OSTEP/dialogue-persistence.pdf)<br> [Chapter 36](http://pages.cs.wisc.edu/~remzi/OSTEP/file-devices.pdf)<br> [Chapter 39](http://pages.cs.wisc.edu/~remzi/OSTEP/file-intro.pdf)
11 | W 11/2 | Persistence: storage devices [[notes](https://paper.dropbox.com/doc/Persistence-storage-devices-QBnG91visl5WjDdMRnYZ8)] | [Chapter 37](http://pages.cs.wisc.edu/~remzi/OSTEP/file-disks.pdf)<br> [Chapter 38](http://pages.cs.wisc.edu/~remzi/OSTEP/file-raid.pdf)<br> [Flash-based SSDs](http://pages.cs.wisc.edu/~remzi/OSTEP/file-ssd.pdf)<br> [Homework 5](homework05.html) due Su 11/6
12 | M 11/7 | Persistence: file system implementation [[notes](https://paper.dropbox.com/doc/Persistence-file-system-implementation-58jnVbJ0OtzWg6Qtjem2T)] | [Chapter 40](http://pages.cs.wisc.edu/~remzi/OSTEP/file-implementation.pdf)<br> [Chapter 41](http://pages.cs.wisc.edu/~remzi/OSTEP/file-ffs.pdf)
12 | W 11/9 | Review | <!--[Chapter 42](http://pages.cs.wisc.edu/~remzi/OSTEP/file-journaling.pdf)<br> [Chapter 43](http://pages.cs.wisc.edu/~remzi/OSTEP/file-lfs.pdf)<br> [Chapter 44](http://pages.cs.wisc.edu/~remzi/OSTEP/file-integrity.pdf)<br>--> [Homework 6](homework06.html) due __Fr 11/11__
13 | M 11/14 | __Exam 2__
13 | W 11/16 | How to read a technical document<br> Guest lecture by Anamika Megwalu | [Development of DNS](http://www.dtic.mil/dtic/tr/fulltext/u2/a203901.pdf)
14 | M 11/21 | Distributed systems: the Internet [[notes](https://paper.dropbox.com/doc/Distributed-systems-Internet-qsmzNODZonUdv5zD6p4Ev)] | [The design philosophy of the DARPA internet protocols](http://citeseerx.ist.psu.edu/viewdoc/download?doi=10.1.1.545.2055&rep=rep1&type=pdf)
14 | W 11/23 | _Non-instructional day_
15 | M 11/28 | Distributed systems: time and consistency | [Time, clocks and ordering of events in a distributed system](http://research.microsoft.com/en-us/um/people/lamport/pubs/time-clocks.pdf)
15 | W 11/30 | Distributed systems: distributed hash tables | [Chord: A scalable peer-to-peer lookup service for internet applications](http://citeseerx.ist.psu.edu/viewdoc/download?doi=10.1.1.125.663&rep=rep1&type=pdf) <br>[Homework 7](homework07.html) due Su 12/4
16 | M 12/5 | Distributed systems: consensus protocols | [Paxos made simple](http://research.microsoft.com/en-us/um/people/lamport/pubs/paxos-simple.pdf)
16 | W 12/7 | Security
17 | M 12/12 | Review | [Homework 8](homework08.html) due T 12/13
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
