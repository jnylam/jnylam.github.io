---
layout: course
courseid: 149-f16
title: Homework 6
mathjax: true
navorder: 3
---

## Warning: did you do Homework 5? Both homework 5 and 6 were released at the same time.

### Problem 1

Write a Java monitor that implements a `BoundedStack` class, i.e., a stack of at most `max` elements. The push and pop methods behave as follows:

* `push(x)`: if the stack is not completely full, the operation pushes the new element `x` on top of the stack; otherwise, the operation has no effect and the value of `x` is discarded
* `pop()`: if the stack is not completely empty, the operation removes the value currently on top of the stack and returns it; if the stack is empty, the operation waits until a value has been pushed on the stack and then completes by popping and returning this value.

### Problem 2

Consider the analogy of a tunnel with only a single lane. To avoid a deadlock, cars must be prevented from entering the tunnel at both ends simultaneously. Once a car enters, other cars from the same direction may follow immediately. Ignoring the problem of starvation, write the code using semaphores to solve this problem.

Hint: <hint>consider the readers/writers code presented in class. The tunnel problem is a variation where multiple readers or multiple writers are allowed to enter the critical section.</hint>

### Problem 3

Assume that each of the five philosophers, i, in the dining philosophers problem execute the following segment of code:

```java
void philosopher(i) {
  while(true) {
    mutex.wait()
      fork[i].wait()
      fork[(i+1) % 5].wait()
    mutex.signal()
    eat()
    fork[i].signal()
    fork[(i+1) % 5].signal()
  }
}
```

with the following initialization code being first run:

```java
void initialize() {
  mutex = 1;
  for (int i = 0; i < 5; i++)
    fork[i] = 1
}
```

__(a)__ Does this code satisfy all requirements of the dining philosophers problem?

__(b)__ Would the solution improve or get worse if the `mutex.signal()` statement was moved after the last signal statement?

__(c)__ Would the solution improve or get worse if the `mutex.signal()` statement was moved before the two wait statements?

### Problem 4
Consider a version of the dining-philosopher problem in which the chopsticks are placed __at the center of the table__, and that any  two of them can be used by a philosopher. Assume that requests for chopsticks are made one at a time. Describe a simple rule for determining whether a particular request can be satisfied without causing deadlock given the current allocation of chopsticks to philosophers.

### Problem 5

Consider again a version of the dining-philosopher problem in which the chopsticks are placed __at the center of the table__. Assume now that each philosopher requires three chopsticks to eat. Resource requests are still issued one at a time. Describe some simple rules for determining whether a particular request can be satisfied without causing deadlock given the current allocation of chopsticks to philosophers.

### Problem 6

Consider  the following snapshot of a system:

. | Allocation | Max | Available
-|---|--|--
| A B C D | A B C D | A B C D
p0 | 0 0 1 2 | 0 0 1 2 | 1 5 2 0
p1 | 1 0 0 0 | 1 7 5 0 |
p2 | 1 3 5 4 | 2 3 5 6 |
p3 | 0 6 3 2 | 0 6 5 2 |
p4 | 0 0 1 4 | 0 6 5 6 |

Answer the following questions using the banker's algorithm:

__(a)__ What is the content of the matrix Need?

__(b)__ Is the systems in a safe state?

__(c)__ If a request from process p1 arrives for (0,4,2,0), can the requests be granted immediately?

## Deliverables

__Due date__: see Canvas.

A single `.pdf` file containing:

  * your name and your partner's name if any, your ID numbers
  * your solutions

If you are working in a group of two, only one of you should submit the assignment to Canvas.

## Rubric

This assignment is out of 10 points.

* 1.5 points per problem
* 1 point: professional presentation, written in complete sentences

## Acknowledgements

This assignment is based on problems from "Operating Systems Principles" by Bic and Shaw, and "Operating System Concepts" by Silberschatz, Galvin, and Gagne.
