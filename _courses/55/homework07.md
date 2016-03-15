---
layout: course
title: "Homework 7"
courseid: 55
navorder: 3
mathjax: true
---

Due date: Wednesday 3/23/2016 in class  
Instructions: please turn in each part stapled separately. Label each part with

* your name,
* homework number,
* part and
* instructor name.

Please do not use paper torn off of a notebook.

## Part 1

### Problem 1

Recall, the Fibonacci numbers are defined such that $F_0 = F_1 = 1$ and $$F_n = F_{n-1} + F_{n-2}$$ when $n > 1$. Show that for all $$n \in \mathbf{N}$$, $$\text{GCD}(F_{n+1}, F_n) = 1$$, i.e. $$F_{n+1}$$ and $$F_{n}$$ are relatively prime.

### Problem 2

Find the inverse of $$573$$ modulo $$1232$$, i.e. find an integer $$x$$ such that $$573x \equiv 1 \pmod{1232}$$.

### Problem 3

The equation $$408x + 126y = 10$$ does not have any solution with $x$ and $y$ both being integers. Explain why this is the case.

### Problem 4

Use Bezout's lemma to show that $$\text{GCD}(a,b) = 1$$ if and only if there exists integers $$x$$ and $$y$$ with $$ax + by = 1$$.

### Problem 5

Use Problem 4 to show if $$a \mid c$$, $$b \mid c$$ and $$\text{GCD}(a,b) = 1$$, then $$ab \mid c$$.

### Problem 6

Use Problem 4 to show if $$\text{GCD}(a,c) = \text{GCD}(b,c) = 1$$, then $$\text{GCD}(ab, c) = 1$$.

---

## Part 2

### Problem 7

Alice sends an encrypted message to Bob using his RSA public key $$(e, N)$$, and Eve intercepts the encrypted message. Eve has just learned a new efficient algorithm for factoring integers. Describe the steps that she would use to decrypt the intercepted message using this new factoring algorithm.

### Problem 8

Alice is selling her house and all negotiations are performed via RSA encrypted messages. She sends to Bob a message $$M$$ that is the price she is willing to sell her house for. She uses RSA to encrypt $$M$$ to produce the ciphertext $$C$$ using Bob’s public key and sends it to Bob. Eve is also interested in buying the house and has intercepted $$C$$ before it gets to Bob. Explain how Eve can use her knowledge of Bob’s public key to alter the ciphertext $$C$$ to change it into $$C′$$ so that if she sends $$C′$$ to Bob, then, after Bob had decrypted $$C′$$, he will get a plaintext that is twice the value of $$M$$.

### Problem 9

Suppose that $$N = pq$$ where $$p$$ and $$q$$ are primes. Describe a method that can be used to factor $$N$$ if you know both $$N$$ and $$\varphi(N) = (p-1)(q-1)$$. Your method must use only a constant number of of the following operations: addition, subtraction, multiplication, division, square-root.

### Problem 10

Alice and Bob are using the Diffie--Hellman key exchange protocol to agree on a shared secret key. They perform the protocol while Eve is eavesdropping. Eve sees that they agree on $$b = 3$$ and $$p = 11$$. Additionally, she sees Bob send $$5$$ to Alice, and Alice send $$4$$ to Bob.

__a)__ What is Alice and Bob's shared secret and what method can Eve use to find it?

__b)__ Why does this method fail when all the number involved are much large?

### Problem 11

Devise a scheme similar to the Diffie--Hellman key exchange protocol to allow three people (Alice, Bob and Charlie) to agree on a common shared secret key.

Your protocol should start, as Diffie--Hellman does:

1. All three publicly agree on a value of $$b$$ and $$p$$.
2. Alice secretly picks $$x$$.
3. Bob secretly picks $$y$$.
4. Charlie secretly picks $$z$$.

What should their common shared secret be and what messages will they need to send to each other?
