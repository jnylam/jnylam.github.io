---
layout: course
courseid: 149-f16
title: Homework 2
mathjax: true
navorder: 0
---

The goal of this assignment is to gain a better understanding of CPU schedulers through three different types of exercises, which correspond to the three parts of this assignment.

This assignment can be done alone or in groups of two.

## Part 1: simulation

### Step 1: setup

For this part, you will need the following files:

* [Ch 4: process intro](http://www.cs.wisc.edu/~remzi/OSTEP/cpu-intro.pdf)
* [process-run.py](http://pages.cs.wisc.edu/~remzi/OSTEP/Homework/HW-CPU-Intro.tgz)

This is the activity we started in class on 9/7. As explained in class, you will need the ability to run Python. If you do not have Python and do not wish to install it on the computer, you have two options:

* recommended option: fire up your Linux VM, download and untar `process-run.py`:

```
wget http://pages.cs.wisc.edu/~remzi/OSTEP/Homework/HW-CPU-Intro.tgz
tar -xzvf HW-CPU-Intro.tgz
```

* option introduced in class: on [glot.io](//glot.io), select Python, and copy-paste the code of `process-run.py`. To run the program with flag options (for example `-l 4:100,1:0`), click the little Python icon (left of the tab `main.py`) to get to the Python tab, check the box next to "Run Command" and append the flags after `python main.py`. Go back to the `main.py` tab and click "Run".

### Step 2: actual assignment

At the end of the PDF, you will find a set of homework questions to be done by running `process-run.py`. Complete questions 1 through 8.

__Tip:__ read the readme file first for information on the simulator.

__Note:__ questions 1 through 7 are warmup to get you familiar with the various options for running this simulator. After those, you should understanding what `-l` followed by a list does and how `-S SWITCH_ON_END`, `-S SWITCH_ON_IO`, `-I IO_RUN_LATER`, `-I IO_RUN_IMMEDIATE` affect the behavior of the scheduler.

Next run the inputs suggested by question 8 __without the flags__ `-c -p`, and try to predict the outcome of the trace. Then add `-c -p` to those inputs to check your solution.

## Part 2: programming

The goal of this project is for you to program your own process manager simulator and explore its internals.

### Files

* PresentationShell.java: given
* Scheduler.java: given
* Process.java: skeleton
* Resource.java: skeleton
* FirstComeFirstServe.java: skeleton
* HighestPriorityFirst.java: skeleton
* Sample input

### Control flow/organization


## Part 3: written problems

### Problem 1

Consider the following set of five processes where __arrival__ is the time the process became ready.

process | arrival | service time | external priority
--------|---------|--------------|------------------
p0 | 0 | 80 | 9
p1 | 15 | 25 | 10
p2 | 15 | 15 | 9
p3 | 85 | 25 | 10
p4 | 90 | 10 | 11

Assume that execution starts at time 0 and that there is no context switch overhead. For the following scheduling policies, draw a time diagram showing where each of the five processes executes. Use the process number as the tie breaking rule (i.e., lower goes first).

__(a)__ FCFS/FIFO  
__(b)__ SJF  
__(c)__ RR with a time quantum of 1  
__(d)__ multi-level priority with FIFO at each priority level. We will assume that multi-level priority is preemptive: if a newly arrived process has higher priority than the one currently running, it preempts it. The current priority level must be empty before the next level (lower priority number) is serviced.  
__(e)__ multi-level feedback with FIFO at each priority level. For the migration policy, define $$t_P$$ to be the maximum amount for a process to remain at priority level $$P$$. After that amount of time, the process migrates to priority $$P - 1$$. The function $$t_P$$ is defined as follows:

$$T_{5} = 10$$, and $$T_{P-1} = 2 T_P$$.

Each task starts at priority level 5 and migrates on down if not done. (Ignore the external priority.)

Note: for concreteness, we chose specific policies within and between priority levels for ML and MLF. We also chose a downward migration policy for MLF. In practice, these policies come in many variations.

### Problem 2

Consider a system using round-robin scheduling with a fixed quantum $$q$$. Every context switch takes $$s$$ milliseconds. any given process runs for an average of $$t$$ milliseconds before it blocks or terminates.

__(a)__ Determine the fraction of CPU time that will be wasted because of context switching for each of the following cases:  
__i.__ $$t < q$$  
__ii.__ $$t \gg q$$: $$t$$ is much greater than $$q$$  
__iii.__ $$q$$ approaches 0.

__(b)__ Under what conditions will the wasted fraction of CPU time be exactly 50%?

<!-- ### Problem 3

How long does a context switch take?

Find out by conducting a small online research. Evaluate your sources and be sure to cite them. Address issues such as factors which contribute to the overhead, mechanisms that help minimize overhead, and challenges associated with making this measurement.

__Recommended starting point__: [Google Scholar](//scholar.google.com) -->

## Deliverables

__Due date__: consult Canvas.

__Part 1.__ you do not need to turn in anything for part 1 since you can check your own answers.

__Part 2.__ a `.zip` file containing all `.java` files.

__Part 3.__ a single `.pdf` file containing your solutions. As in the last assignment: use a word processor (and export as PDF) or LaTeX to write up your answers. Include your name (or both partner names if working as a group), the class and section, and the name of this assignment at the beginning of your document.

If you are working with a partner, only one of you should turn in the files.

## Rubric

## Acknowledgements

Part 1 is homework from the free online textbook [Operating Systems: Three Easy Pieces](http://pages.cs.wisc.edu/~remzi/OSTEP/), Arpaci-Dusseau and Arpaci-Dusseau.

Part 2 and 3 are based on a project and exercises proposed in Operating System Principles, Bic and Shaw.
