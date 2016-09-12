---
layout: course
courseid: 149-f16
title: Homework 2
navorder: 0
---

The goal of this assignment is to gain a better understanding of CPU schedulers through three different types of exercises, which correspond to the three parts of this assignment.

This assignment can be done alone or in groups of two.

## Part 1: simulation

### Step 1: setup

For this part, you will need the following files:

* [Ch 4: process intro](http://www.cs.wisc.edu/~remzi/OSTEP/cpu-intro.pdf)
* [process-run.py](http://pages.cs.wisc.edu/~remzi/OSTEP/Homework/HW-CPU-Intro.tgz)

Note: this is the activity we started in class on 9/7. As explained in class, you will need the ability to run Python. If you do not have Python and do not wish to install it on the computer, you have two options:

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


## Part 3: written problems


## Deliverables

__Due date__: consult Canvas.



__Part 1.__ you do not need to turn in anything for part 1 since you can check your own answers.

__Part 2.__ a `.zip` file containing all `.java` files.

__Part 3.__ a single `.pdf` file containing your solutions. As in the last assignment: use a word processor (and export as PDF) or LaTeX to write up your answers. Include your name (or both partner names if working as a group), the class and section, and the name of this assignment at the beginning of your document.

If you are working with a partner, only one of you should turn in the files.

## Rubric

## Acknowledgements

Part 1 is homework from the free online textbook [Operating Systems: Three Easy Pieces](http://pages.cs.wisc.edu/~remzi/OSTEP/), Arpaci-Dusseau and Arpaci-Dusseau.

Part 2 is inspired by Operating System Principles, Bic and Shaw.

Part 3
