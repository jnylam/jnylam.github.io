---
layout: course
courseid: 146-s17
title: Space complexity
mathjax: true
navorder: 0
---

## Assumptions made

In order to analyze the space complexity of an algorithm, we must understand the memory model of the language used to implement said algorithm.

In this discussion, we will assume a rather standard memory model, used by Java, C++, and other C-based languages, which has a stack, and a heap. We will not be concerned with certain language-specific details such as garbage collection.

## Memory model

When a function is called, memory is allocated on the stack specifically for its usage. The memory dedicated to this function is called a stack frame. In it are stored

* the input parameters
* the local variables
* bookkeeping information for the execution of this function, such as the current line of code being executed

When a function calls another function, a new stack frame for the new function is pushed onto the call stack or stack for short. A sequence of nested calls, such as those that occur from running a recursively defined function, will lead to multiple frames being pushed onto the stack. Since the stack is finite, it is possible to run out of space because of a set of too deeply-nested call. This is what is known as a stack overflow.

In addition, memory can be allocated whenever an object is instantiated on the heap (with the `new` operator in Java and C++).

To exact amount of memory is dependent on many factors and details such as the type of machine and operating system the algorithm is run on. As with the analysis of time complexity in this class, our goal is to gain an appreciation and intuition for the asysmptotic behavior of a particular algorithm. Therefore, we will assume the following:

* primitive types (as they are called in Java) such as int, float, and references to objects on the heap take a constant amount of space
* data structures, which may live on the stack, and more likely on the heap, take up an amount of space that is dependent on (and often though not always proportional to) the number of elements stored in it. The exact amount of space taken will need to be analyzed.
* bookkeeping information associated with a stack frame take up a constant amount of space.

## The space complexity of an algorithm

The amount of space used by an algorithm may fluctuate over the course of its execution. The space complexity of an algorithm is defined to be the largest amount of memory this algorithm will ever use.

The space used by an algorithm includes:

* __the algorithm input:__ though we are typically interested in the amount of space used in addition to the space taken up by the input.
* __the memory used on the stack:__ this becomes important when implementing recursive algorithms and is the reason why explicitly recursive implementations should typically be avoided in this memory model.
* __the memory used on the heap:__ this typically comes up when an algorithm uses a data structure.

## Example 1

For a simple function with no recursive calls, such as

```
void foo(int n) {
    int m = 0;
    for (int i = 0; i < n; i++)
        m += i;
    return m;
}
```

a constant amount of space is used for the input parameter n, and the local variables m and i. Therefore, the algorithm uses a constant amount of memory.

## Example 2

For a recursive algorithm such as

```
void bar(String s) {
    if (s == "") return;
    print(s);
    bar(s.substring(0, n/2));
}
```

every call uses an amount of space proportional to the input string, and a constant amount of space for local variables. Because substring() returns a new string, half the length of the original one, and passes it onto the recursive call, the amount of space is on the order of

* n (length of the input string) for the top call
* n/3 for the first recursive call
* n/9 for the next one
* ...
* constant for the final call

The most amount of space used occurs at the bottom of the recursion tree, when the stack is at its longest. At that point, the space used is on the order of

n + n/3 + n/9 + .... + 1 = $$\Theta(n)$$

## Example 3

A memoized function such as:

```
Map cache = new HashMap();

int foo(int n) {
    if (cache contains n as key)
        return cache.get(n);
    if (n <= 1)
        return 34;
    int result = 2*foo(n - 2) - foo(n-4);
    foo.put(n, result);
    return result;
}
```

Every call uses a constant amount of space. Although the recursive call tree is pruned because of memoization, since the cache starts out empty, the very first call to foo will yield a fully nested set of recursive calls on the stack, at the bottom of which the space used is $$\Theta(n)$$, for n/2 calls, each of constant space. 

Every one of the n/2 calls will be cached, which means that the cache will also take up on $$\Theta(n)$$ space.

Therefore, the amount space used is $$\Theta(n)$$.
