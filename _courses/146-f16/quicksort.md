---
layout: course
courseid: 146-f16
title: Analysis of quicksort
mathjax: true
navorder: 0
---

Let $$X$$ be a random variable representing the number of comparisons made by quicksort. Our goal is to show that the expected value of $$X$$ is $$O(n \log n)$$. For simplicity, we will assume that all elements of the input array are distinct.

Let $$e_i$$ denote the $$i$$-th largest element. For $$i < j$$, let $$X_{ij}$$ be an indicator variable, with value 1 if $$e_i$$ and $$e_j$$ are ever compared to each other.

Because any two elements are compared at most once, $$X$$ is equal to the sum of these indicator variables:

$$X = \sum_{i = 0}^{n-1} \sum_{j = i+1}^{n-1} X_{ij}.$$

Consider the chosen pivot. There are three cases:

* if the chosen pivot is $$e_i$$ or $$e_j$$, then $$e_i$$ and $$e_j$$ will be compared to each other, so $$X_{ij} = 1$$.
* if the chosen pivot is between $$e_i$$ and $$e_j$$, then both $$e_i$$ and $$e_j$$ will be compared to the pivot and end up in different subarrays. From that point on, they will never be compared to each other. So $$X_{ij} = 0$$.
* if the chose pivot is outside the interval $$[e_i, e_j]$$, then the two elements will end up in the same subarray, and another chosen will be chosen in a subsequent recursive call.

Since there are $$j + 1 - i$$ indices between $$i$$ and $$j$$ (inclusive), these observations suggest that the probability that $$X_{ij} = 1$$ is $$2/(j - i + 1)$$. Hence $$E[X_ij] = 2/(j - i + 1)$$.

By linearity of expectation,

$$E[x] = \sum_{i = 0}^{n-1} \sum_{j = i+1}^{n-1} \frac{2}{j - i + 1} \leq \sum_{i = 0}^{n-1} 2\left(\frac{1}{2} + \frac{1}{3} + \dots + \frac{1}{n}\right)$$

The sum in parentheses is one less than the $$n$$-th harmonic number $$H_n$$. It can be shown that $$H_n \leq \log n + 1$$ (via an integral estiate). Therefore,

$$E[X] \leq 2 \sum_{i = 0}^{n-1} \log n = 2n \log n.$$
