---
layout: course
courseid: 146-s17
title: Homework 7
mathjax: true
navorder: 0
---

# Description

The goal of this assignment is to master the following skills and concepts:

- use the recursion-tree method to solve recurrence equation
- given a divide-and-conquer algorithm, write a recurrence equation for the time complexity of this algorithm
- use one of the divide-and-conquer algorithms covered in class as part of a solution to an algorithmic problem (this requires knowledge of the algorithm itself, its running time, and the analysis of its running time)
- know the defining properties of a red-black tree and use them to reason about other properties of red-black trees (such as height, black-height and balance)
- understand the implementation and be able to implement the search and insertion operation in a red-black tree
- give the time complexity of insertion and search in a red-black tree and understand their analysis


# Submission

You will package your assignment as a __single PDF file__ and submit it on Canvas.

For suggestions on how to make a pdf file, please refer to [Homework 1 - Submission](homework01.html#Submission).


### Problem 1 

Solve the following recurrence relations using the recursion-tree method and give a $$\Theta$$-bound for each.

__a)__ $$T(n) = 2 T(n/3) + 1$$

__b)__ $$T(n) = 5 T(n/4) + n$$

__c)__ $$T(n) = 7 T(n/7) + n$$

__d)__ $$T(n) = 9T(n/3) + n^2$$

__e)__ $$T(n) = 8 T(n/2) + n^3$$

__f)__ $$ T(n) = T(n-1) + 2$$

__g)__ $$T(n) = T(n-1) + n^c$$, where $$c\geq 1$$ is a constant

__h)__ $$T(n) = T(n-1) + c^n$$, where $$c > 1$$ is a constant

__Example:__ the recurrence relation for [Karatsuba's multiplication algorithm](https://en.wikipedia.org/wiki/Karatsuba_algorithm) is $$T(n) = 3 T(n/2) + cn$$, where $$c$$ is a constant (around 5).

To solve it, we argue the following:

* there are $$\log n$$ (base 2) levels of recursion because the input size is halved every level down.
* at level $$i$$: each recursive call (or tree node) has an input of size $$n/2^i$$, which means $$cn/2^i$$ work per node. There are $$3^i$$ nodes at this level because each node branches 3-ways and we're at level $$i$$. So the total work at this level is $$cn(3/2)^i$$.
* if we sum up the work done at levels 0 to $$\log n$$, we get

$$\displaystyle T(n) = \sum_{i = 0}^{\log n} cn\left(\frac{3}{2}\right)^i$$.

This is a geometric sum with base $$a = 3/2$$, so applying the formula for it, we see that it's  equal to

$$\displaystyle cn \frac{(3/2)^{\log_2 n + 1} - 1}{3/2 - 1}$$

which is $$\Theta(n (3/2)^{\log_2 n})$$. We can further simplify that since

$$\displaystyle n (3/2)^{\log_2 n} = n \frac{3^{\log_2 n}}{2^{\log_2 n}} = n \frac{n^{\log_2 3}}{n}$$.

(Note: we used the same identity as in problem 3.) So $$T(n)$$ is $$\Theta(n^{\log_2 3})$$.

### Problem 2

__(a)__ Write a recurrence equation for the time complexity of the following program, and use the recursion-tree method to solve the equation.

```java
void f(n) {
    if (n <= 2)
        return;
    for (int i = 0; i < n; i++)
        print("still going\n");
    f(n/2);
    f(n/2);
    f(n/2);
    for (int i = 0; i < n^2; i++)
        print("still going\n");
}
```

__(b)__ You are given an array of $$n$$ elements, and you notice that some of the elements are duplicates; that is, they appear more than once in the array. Show how to remove all duplicates from the array in time $$O(n \log n)$$.



### Problem 3 (13.1-7): red-black tree

__(a)__ What is the largest possible number of internal nodes in a red-black tree with black height $$k$$?

__(b)__ What is the smallest possible number?

### Problem 4 (adapted from 13.3-2): red-black tree

The keys 41, 38, 31, 12, 19, 8 are successively inserted into an initially empty red-black tree.

__(a)__ Show the red-black tree after each of these insertions, as well as the intermediate steps that result from fixing up the tree after an insertion. Label these transformations by whether they represent case 1, 2 or 3. See figure 13.4 in the book for what your solution should look like.

__(b)__ Show the black-heights of all the nodes of the last red-black tree in part __(a)__.

# Hint

### Problem 1 (g) and (h)

Draw the recursion "tree" corresponding to $$T(n)$$, and use the idea that the time complexity is the sum of the amount of time spent within each recursive call to derive a closed-form expression for $$T(n)$$ (ie an expression that is not an equation in terms of itself.)

Alternatively you can derive this closed-form expression by expanding the equation for $$T(n)$$ as follows:

$$ T(n) = T(n-1) + n^c = (T(n-2) + (n-1)^c) + n^c = (T(n-3) + (n-2)^c) + (n-1)^c + n^c...$$

until you reach an expression that only contains $$T(1)$$ which can be set to a constant (use a variable other than $$c$$ to denote this constant, since $$c$$ already been given meaning here).

Now simplify this expression via its $$\Theta$$-notation if necessary.
