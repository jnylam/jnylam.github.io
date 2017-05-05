---
layout: course
courseid: 146-s17
title: Homework 13
mathjax: true
navorder: 0
---

# Description

The goal of this assignment is to master the following skills and concepts:

- state the sorting lower bound, and reason about its implications on various algorithms
- understand the proof of the sorting lower bound, and how the decision tree argument can be used to give an algorithmic lower bound on other problems.
- counting sort: algorithm, runtime
- bucket sort (as covered in class, not the textbook): what it does, the algorihtm and the runtime.
- radixsort: algorithm and runtime
- reason about which sorting algorithm to apply given some knowledge about the input to be sorted
- know what an approximation algorithm is, and the doubling MST algorithm.

# Submission

You will package your assignment as a __single ZIP file__ and submit it on Canvas. The package should include a pdf file for the written portion of your work and .java files for the code.

For suggestions on how to make a pdf file, please refer to [Homework 1 - Submission](homework01.html#Submission).

### Exercises

The following exercises cover required knowledge for this course. They should be solved but solutions to these will not be collected.

__(a)__ (8.3-1) Using figure 8.3 of the textbook as a model, illustrate the operation of radix sort on the following list of English words: cow, dog, sea, rug, row, mob, box, tab, bar, ear, tar, dig, big, tea, now, fox.

__(b)__ (8.4-1) Using figure 8.4 of the textbook as a model, illustrate the operation of bucket sort on the array A = [79, 13, 16, 64, 39, 20, 89, 53, 71, 42]

__(c)__ (8.3-2) Which of the following algorithms are stable: insertion sort, merge sort, heapsort, and quicksort? Give a simple scheme that makes any comparison sort stable. How much additional time and space does your scheme entail?

### Problem 1

Define the "first drop problem", on an input array $$A$$ of $$n$$ numbers, to be the problem of finding the first position at which one number drops to a smaller number after it. More formally, the output should be the smallest index $$i$$ for which $$A[i]>A[i+1]$$, or $$i=n-1$$ if no such index exists. For instance, on the input [5,9,2,4,1] the output should be 1, because the first drop is from the values 9 to 2, and the value 9 occurs at position $$A[1]$$. But on the input [1,2,4,5,9] there is no first drop and the output should be 4. You may assume that no two input numbers are equal.

__(a)__ When $$n=4$$, how many different outcomes does the first drop problem have?

__(b)__ Based only on your answer to part (a), and the $$\lceil\log_2(\# \text{outcomes})\rceil$$ lower bound on the height of any binary comparison tree, how many comparisons would be necessary to correctly solve the first drop problem for $$n=4$$?

__(c)__ Draw a comparison tree that uses as few comparisons as possible (in the worst case) to solve the first drop problem for $$n=4$$. How many comparisons in the worst case does your tree use?

### Problem 2

Draw a decision/comparison tree for quicksort on inputs of length 3.

### Problem 3

Find a weighted undirected graph for which the MST-doubling heuristic can generate a tour that is longer than optimal by a factor of at least 5/3. Show both the optimal tour and the MST-doubling tour for your example. (You may use the simplest version of MST-doubling, without shortcutting repeated vertices.)


# Additional practice questions (not to be submitted)

## Sorting: lower bounds and linear time


1. What is the exact statement on sorting lower bounds?
2. Break down this statement. What does each part of the statement mean.
3. Relate the statement to each sorting algorithm you know:
  1. heapsort
  2. mergesort
  3. quicksort
  4. insertion sort
  5. selection sort
  6. radixsort
4. Reproduce and understand the argument for this sorting lower bound result.
5. What does a comparison tree represent/capture/mimick?
6. What does the worst-case run time of a comparison-based algorithm correspond to on its comparison trees?
7. What about the best-case run time? What about average case?
8. Extra: how can you adapt the idea of a comparison tree to capture the execution of randomized quicksort?
9. Describe bucket sort in words and in code/pseudocode.
10. What are the input parameters for bucket sort? What does each represent?
11. What is the runtime of bucket sort?
12. Describe radix sort in words and in code/pseudocode.
13. What are the input parameters for radix sort? What does each represent?
14. What is the runtime of radix sort as a function of the base b representation? Why?
15. What is the optimal base b in which to represent numbers for the purposes of radix sort? Why?
16. What is the runtime of radix sort in that optimal base?
17. Can you use radix sort to sort a list of strings? Can you modify the idea of radix sort to make it happen?
18. Write down a list of numbers (written in decimal) in which you can do an interesting run of radix sort in base 100 and 1000. Run radix sort in each of these bases.
19. Write down a list of numbers (written in binary) in which you can do an interesting run of radix sort in base 2 and base 8. Run radix sort in each of these bases.
20. How would you sort a long list of numbers in a comparably small range of values? Illustrate with an example.
21. How would you sort a list of numbers in a relatively large range of values? Illustrate with an example.
22. What is the key to beating the n log n lower bound on worst-case sorting bound?

## Approximation algorithm for TSP: doubling MST 

1. Draw a map of an imaginary country with cities (not too many) and distances between every 2 cities. 
  1. What is the solution to the TSP?
  2. Use the doubling MST to find an approximate TSP solution. 
  3. How good is the solution? In other words, what is the ratio of the value of the approximate solution over the value of the optimal solution?
2. Come up with another example in which the doubling MST algorithm gives a ratio of exactly 2
3. Come up with another example in which the doubling MST algorithm gives a ratio of exactly 1. In other words, in this example, the approximate  algorithm is correct!
