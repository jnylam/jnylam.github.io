---
layout: course
courseid: 146-s17
title: Homework 2
mathjax: true
navorder: 0
---

# Description

The goal of this assignment is to master the following skills:

* be able to write recursive algorithms on non-linear data structures such as trees
* be able to find the time and space complexity of algorithms 
    * with a nested loop structure (for loops, while loops)
    * with a tail-recursion
Note: this may involve recognizing when the expression for the running time contains logarithms
* be able to simplify the time complexity using $\Theta$- and $O-$ notation.
* know how O-, $\Theta$, etc are used in relation to time complexity, and the fact that $O$-notation is not synonymous with worst-case time complexity.

# Submission

You will package your assignment as a __single zip file__ and submit it on Canvas. The zip file should contain the following files:

* `TowersOfHanoi.java` with your solution to problem 1
* `TreeNode.java` with your solution to problem 2
* one **pdf** file containing your solution to all other problems. 

For suggestions on how to make a pdf file, please refer to [Homework 1 - Submission](homework01.html#Submission).


# Problems to be submitted

### Problem 1

Solve the problem Towers of Hanoi by implementing the `solve()` function in [TowersOfHanoi.java](https://github.com/jnylam/SJSU-cs146-s17/blob/master/02_Recursion2/src/cc/jennylam/cs146/TowersOfHanoi.java)

### Problem 2

Complete the implementation of the methods in [TreeNode.java](https://github.com/jnylam/SJSU-cs146-s17/blob/master/02_Recursion2/src/cc/jennylam/cs146/TreeNode.java). Specifically, complete

* `TreeNode.max()`
* `TreeNode.postorder()`
* `TreeNode.size()`

### Problem 3

For each of the following functions, 

1) find an expression for the number of calls to doSomething().  
2) Then simplify with O-notation.  
3) Then find the amount of space used (approximately, using O-notation).

__a)__

```
void foo(int n) {
    for (int i = 0; i < 567; i++)
        for (int j = 0; j < n; j++)
            for(int k = 0; k < j; k++)
                doSomething();
}
```

__b)__

```
void fu(int[] a) {
    for (int i = 0; i < a.length / 2; i++)
        doSomething(a[i]);
    int n = a.length;
    while (n > 1) {
        doSomething();
        n /= 2;
    }
}
```

__c)__

```
void phoo(int n) {
    if (n <= 1) {
        doSomething();
        return;
    }
    phoo(n/10);
}
```

__d)__

```
void phoo2(int n) {
    if (n <= 1) {
        doSomething();
        return;
    }
    doSomething();
    phoo2(n/10);
}
```

__e)__

```
void phoo3(int n) {
    if (n <= 1) {
        doSomething();
        return;
    }
    phoo3(n/10);
    doSomething();
}
```

__f)__

```
void ffwho(int n) {
    if (n <= 2) {
       doSomething();
       return;
    }
    ffwho(n-3);
    doSomething();
}
```

__g)__

```
void phew(int n, int m) {
    if (n > m) {
       doSomething();
       return;
    }
    doSomething();
    phew(n+1, m-1);
}
```

### Problem 4

__a)__ How many calls to meow() does this function make?

```
void makeSomeNoise(int n) {
    while (n > 1) {
        meow();
        n /= 13;
    }
}
```

__b)__ Add as little additional code as possible to this function so that it makes $n$ times as many calls. (No deletions allowed).

__c)__ Rewrite the function in part __a)__ using tail-recursion;

### Problem 5

__a)__ Write an iterative function to compute $2^n$, given $n \geq 1$. What is the time complexity of this function?

__b)__
Consider the following function

```
int foo(int n) {
    if (n <= 1)
        return 2;
    int a = foo(n / 2);
    return a * a;
}
```

and

```
int bar(int n) {
    if (n <= 1)
         return 2;
    return bar(n/2) * bar(n/2);
}
```

Explain why these functions always return the same result, given the same input.

__c)__ Explain why `bar`  is less efficient than `foo`. What is the running time of each of these functions? Hint: use the technique shown in class of tracing the algorithm for small inputs, until you find a pattern. Relate input size to running time.

__d)__ In class we said that `foo` computes the function $f(n) = 2^n$ correctly for inputs that are powers of 2 ($n = $ 1, 2, 4, 8, ...), but not for the rest because the division by 2 is an integer division. Modify `foo` to correctly compute $f(n)$ for all $n \geq 1$.

Hint: assume that foo(n/2) and foo(n/2 + 1) correctly compute $2^{n/2}$ and $2^{n/2 + 1}$. Express $2^n$ in terms of foo(n/2) and foo(n/2+1).

# Additional problems (not to be submitted)

### more practice with recursion on a tree

You too can come up with practice problems of your own: simply ask yourself, what kind of questions could one ask about a tree? What variations can I make on this data structure? Can you think of any? Here's a few suggestions to get you started:

1. given a particular element `e`, does the tree contain this element?
2. what is the height of the tree?
3. does the tree satisfy the binary search tree property (that you studied in CS 46B)?
3. instead of two children, how about implementing a tree with arbitrarily many children?

For each of these questions, you now have a practice problem. You can now write a solution and add it as as an implementation method in [TreeNode.java](https://github.com/jnylam/SJSU-cs146-s17/blob/master/02_Recursion2/src/cc/jennylam/cs146/TreeNode.java).

As a bonus, you are practicing an important problem solving technique: how to understand a new idea or problem by asking questions of your own.

### learn to write a basic intepreter

In this little project, you will extend the functionality of a tiny calculator, which takes strings such as `2 * 3 + 12 * (1 + 5)`, interprets the strings as a mathematical expression and evaluates them.

To do the interpretation, a formal language of the "valid strings" that will be recognized must first be defined, and that is done recursively. For example, the most general expression the calculator recognizes is a sum. A sum is made up of terms, each of which is made up of factors. But each factor can itself be a sum if it is surrounded by parentheses. Therefore, the language has a recursive structure, and the code which recognizes this language and mirrors its structure, will in turn also be recursive.

All the code to get you started can be found here:
[Calculator.java](https://github.com/jnylam/SJSU-cs146-s17/blob/master/02_Recursion2/src/cc/jennylam/cs146/Calculator.java)

If you found this project interesting and would like to learn more on this topic (which can be useful in writing games), check out "Language Implementation Patterns: Create Your Own Domain-Specific and General Programming Languages" by Terence Parr.
