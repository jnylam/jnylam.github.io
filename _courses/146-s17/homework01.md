---
layout: course
courseid: 146-s17
title: Homework 1
mathjax: true
navorder: 0
---

## Description

The goal of this assignment is to master the following skills:

* be able to write basic algorithms using recursion
* understand and be able to use asymptotic notation (O, &Theta;, &Omega;)
    * given two functions, recognize all their possible relationships in terms of O, &Theta; and &Omega;
    * simplify functional expression with O-notation

## Submission

Solutions should be turned in on Canvas as a __single PDF file__. Here are some possible ways to do this.

Option 1: handwrite your solutions, scan, and convert to PDF. [Here are some tips on how to scan with a mobile device](http://www.howtogeek.com/209951/the-best-ways-to-scan-a-document-using-your-phone-or-tablet/). Please do not send files in image format.


Option 2: type up your solutions in your favorite word processor. Export or print your document as a PDF file and submit that. Please do not a submit .docx file.

Option 3: use LaTeX. It will help you produce a beautiful, professional-looking document. This is what authors use to write textbooks and research papers. If you plan on going to graduate school and do research, it will be worth your time to learn this awesome tool. If you want to learn LaTeX, here are some pointers to get you started.

* [Getting LaTeX](https://www.latex-project.org/get/)
* [LaTeX homework template](http://www.jennylam.cc/assets/template.zip): this is meant to be a starting document for learning LaTeX. Have fun with it!
* [Any of the many good LaTeX tutorials/cheatsheets/beginner's guides online](https://lmddgtfy.net/?q=Latex%20quickstart). :)


## Problems to be submitted

### Problem 1

Complete the following implementation in Java.

```
/* Given a string and a character, find the number of times the character
 * appears in the string. Matches are case-sensitive.
 * Give a recursive implementation.
 */
public static int countChar(String str, char c) {
	return 0;
}
```

### Problem 2

Complete the following implementation in Java.

```
/* Find the maximum value in a list of Integers, using recursion.
 *
 * Hint: to keep track of which parts of the list still need to be visited,
 * which works a lot like cleanHotel(int lo, int hi)
 * use a recursive helper function: recursiveMaxHelper(List<Integer> li, int lo, int hi)
 *
 */
public static int recursiveMax(List<Integer> li) {
    return 0;
}
```

### Problem 3

Complete the following implementation in Java.

```
/* Return a list of the prime factors of a given integer n, using recursion.
 * Your function should call findAPrimeFactor() to find a single prime factor for you.
 * (We're using it as a building block).
 *
 * You may assume that n is positive.
 */
public static List<Integer> recursivePrimeFactors(int n) {
	return null;
}

/* Return a prime factor of n. */
public static int findAPrimeFactor(int n) {
	for (int f = 2; f < n; f++)
		if (n % f == 0)
			return f;
	return n;
}
```

### Problem 4

Show that $$3^{\log_4n} = n^{\log_43}$$ using log rules. Give an identity that generalizes this equality. (This problem is an exercise is using log/exponent rules. The identity will also be useful for simplifying expressions.)

### Problem 5
_a)_ If $$f(n)$$ is $$O(g(n))$$, is it necessarily true that $$2^{f(n)}$$ is $$O(2^{g(n)})$$? Justify your answer.

_b)_ Explain why the statement "The running time of algorithm $$A$$ is at least $$O(n^2)$$" is meaningless.

### Problem 6

Order by $$\Theta$$-notation, and indicate those have the same asymptotic growth rate (i.e., that are $$\Theta$$ of each other): $$e^n$$, $$n$$, $$2^n$$, $$n \log n$$, $$\log n$$, $$n^2$$, $$n^4$$, $$n \log_{10} n$$, $$\sqrt{n}$$, $$\sqrt[36]{n}$$, $$2^{n^2}$$, $$\log \sqrt{n}$$, $$(\log n)^2$$, $$\log n^2$$.

__Note:__ intuitively, "$$f$$ is $$\Theta(g)$$" roughly means "$$f = g$$", the same way that "$$f$$ is $$O(g)$$" roughly means "$$f \leq g$$".

Formally, "$$f$$ is $$\Theta(g)$$" means "$$f$$ is $$O(g)$$" and "$$g$$ is $$O(f)$$".


### Problem 7
Give a big-$$O$$ estimate for each of the following functions. For the function $$g$$ in your estimate that $$f(n)$$ is $$O(g(n))$$ use as simple of a function $$g$$ as possible, and of the smallest order.

__a)__ $$5n^3 - 7n^2 + 88$$  
__b)__ $$ (n\log n + n^2)(n^3 + 2)$$  
__c)__ $$\log(n^3 + 1) + (\log n)^2$$  
__d)__ $$(n \log n + 1)^2 + (\log n + 1)(n^2 + 1)$$  
__e)__ $$n^{2n} + n^{n^2}$$  
__f)__ $$(n! + 2^n)(n^3 + \log(n^2 + 1))$$  
__g)__ $$n \cdot (5/4)^{\log_4n + 1}$$

__Hint__: you can simplify __g)__ to $$O(n^?)$$ where ? is something for you to determine.

### Problem 8
Give a big-$$O$$ estimate for each of the following functions. For the function $$g$$ in your estimate that $$f(n)$$ is $$O(g(n))$$ use as simple of a function $$g$$ as possible, and of the smallest order.

__a)__ $$\displaystyle \sum_{i = 10}^n i$$  
__b)__ $$\displaystyle \sum_{i = 1}^{\log_2 n} ni$$  
__c)__ $$\displaystyle \sum_{i = 1}^{n} 4^n$$  
__d)__ $$\displaystyle \sum_{i = 1}^{n} 4^i$$  
__e)__ $$\displaystyle \sum_{i = 1}^{\log_2 n} 4^i$$  
__f)__ $$\displaystyle \sum_{i = 1}^{\log_2 n} n(1/3)^i$$  

## Additional problems (not to be submitted)

### need more practice with recursion?

- finish the practice problems in [Recursion1Practice.java](https://github.com/jnylam/SJSU-cs146-s17/blob/master/01_Recursion1/src/cc/jennylam/cs146/Recursion1Practice.java)
- at [codingbat.com](//codingbat.com), solve __Recursion-1__ problems

### challenging asymptotic growth rates

The following functions commonly appear in the analysis of more advanced algorithms:

* $$\log \log n$$,  
* $$n / (\log \log n)$$, 
* [$$\log^* n$$](https://en.wikipedia.org/wiki/Iterated_logarithm) (you can also find an explanation in the textbook)

 Can you order these with respect to the functions in Problem 6?
