---
layout: course
courseid: 149-f16
title: Homework 5
mathjax: true
navorder: 0
---

The goals of this assignment are to

  1. practice with writing a multi-threaded program, forking and joining
  2. apply synchronization principles

As usual, you may choose to work alone or with a single partner.

__Warning.__ Due to the amount of time needed to run the program you are going to write, it is highly recommended that you complete this assignment on your computer, with Java installed. Code running in a browser environment will likely time out.

## Background reading

To perform this assignment, you will need to learn a few things from the Java API:

* [System.nanoTime()](https://docs.oracle.com/javase/8/docs/api/java/lang/System.html#nanoTime--): JVM's high-resolution time source
* [Thread.yield()]():
* [Lock](http://docs.oracle.com/javase/8/docs/api/java/util/concurrent/locks/Lock.html) interface
* [ReentrantLock](http://docs.oracle.com/javase/8/docs/api/java/util/concurrent/locks/ReentrantLock.html): an implementation of Lock
* [AtomicLong](http://docs.oracle.com/javase/8/docs/api/java/util/concurrent/atomic/AtomicLong.html)
* [Semaphore](https://docs.oracle.com/javase/8/docs/api/java/util/concurrent/Semaphore.html)

## Description

The goal is to compare different implementations of a shared Counter interface

```java
public interface Counter {
  public void add(long value);
  public long get();
}
```

Start with a basic counter class as we did in class:

```java
public class BasicCounter implements Counter {
  private long counter;

  public BasicCounter() {
    this.counter = 0;
  }

  public void add(long value) {
    counter += value;
  }

  public long get() {
    return counter;
  }
}
```

## Part 1: basic test driver

Write a test driver program that takes as input

* a parameter for the number of parallel threads
* a parameter for the number of iterations
* initializes a counter object to zero
* notes the starting time for the run (using `System.nanoTime()`)
* starts the specified number of threads, each of which will use the `BasicCounter` `add` method to
    * add 1 to the counter the specified number of times
    * add -1 to the counter the specified number of times
    * exit to rejoin the parent thread
* waits for all threads to complete
* notes the high-resolution ending time for the run
* checks to see if the counter value is zero, and if not, log an error message to `System.err`
* prints to `System.out`
    * the total number of operations performed
    * the total run time (in nanoseconds)
    * the average time per operation (in nanoseconds)

Suggested sample output

```
10 threads x 10000 iterations x (add + subtract) = 200000 operations
Error: Final counter value: 11
Time elapsed: 0s
Average time/op: 7432ns
```

Run your program for a range of `threads` and `iterations` values, and note how many threads and iterations it takes to fairly consistently result in a failure, ie. in a non-zero sum.

### Question 1

Why does it take this many threads or iterations to result in a failure?

### Question 2

Why does a significant smaller number of iterations so seldom fail?

## Part 2: making failures consistent

Extend the basic add routine to more easily cause failures:

```java
public class BasicCounter implements Counter {
  private long counter;
  private final boolean yield;

  public BasicCounter(boolean yield) {
    this.counter = 0;
    this.yield = yield;
  }

  public void add(long value) {
    if (yield)
      Thread.yield();
    counter += value;
  }

  public long get() {
    return counter;
  }
}
```

Re-run your tests and see how many iterations and threads it takes to fairly result in a failure. It should now be much easier to cause the failures.

Compare the average execution time of the yield and non-yield versions with different numbers of threads and iterations. You should note that the yield runs are much slower than the non-yield runs, even with a single thread.

### Question 3

Graph the average cost per operation (non-yield) as a function of the number of iterations, with a single thread. You should note that the average cost per operation goes down as the number of iterations goes up.

Why does the average cost per operation drop with increasing iterations?

### Question 4

How do we know what the "correct" cost is?

### Question 5

Why are the yield runs much slower? Where is the extra time going?

### Question 6

Can we get valid timings if we are using yield? How or why not?

## Part 3: implement solutions

Implement four new versions of the `Counter` interface:

* one protected by `synchronized` methods
* one protected by a `ReentrantLock`
* one protected by a `Semaphore`
* one which uses `AtomicLong` in order to perform updates atomically.

Use your yield option to confirm that (even for large numbers of threads and iterations) all four of these serialization mechanisms eliminate the race conditions in the add critical section.

Using a large number of iterations to overcome the issues raised in Part 2, note the average time per operation (non-yield) for a range of thread values, and graph the average performance (time per operation) of all five versions (unprotected, synchronized, ReentrantLock, Semaphore, AtomicLong) vs the number of threads.

### Question 7

What trends do you observe as the number of threads increases? How do you explain this?

### Question 8

Which solution is the most efficient? How do you explain this?

## Deliverables

__Due date__: see Canvas.

A single `.zip` file containing:

* the source files that compiles without errors
* a `.txt` file containing the data from your experiment
* your `.pdf` file containing:
  * your name and your partner's name if any, your ID numbers
  * answers to Part 1 questions
  * your report

If you are working in a group of two, only one of you should submit the assignment to Canvas.

## Rubric

This assignment is out of 10 points.

* 1 point: zip file contains expected content
* 1 point: code cleanly compiles
* 2.5 points: each counter solution is correctly implemented
* 1 point: data is collected and reported for each experiment
* 4 points: the answer to each question is correct or, when applicable, follows from reported data.
* 0.5 points: professional presentation, written in complete sentences

## Acknowledgements

This assignment is based on a project in the Operating Systems course taught by Mark Kampe, and written problems from "Operating Systems Principles" by Bic and Shaw, and "Operating System Concepts" by Silberschatz, Galvin, and Gagne.
