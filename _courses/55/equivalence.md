---
layout: course
title: "Equivalence relations"
courseid: 55
navorder: 0
mathjax: true
---


## Definition of a relation

$$R$$ is a __relation__ on a set $$S$$ if $$R \subseteq S \times S$$. Another way to think of $$R$$ is as a function of the form $$R: S \times S \rightarrow \{\text{true}, \text{false}\}$$.

## Examples of relations

"__is equal to__" is a relation on any set $$S$$ since it is $$\{(s,s) \mid s \in S\}$$.

"__less than or equal to__" is a relation on the set $$\mathbf{R}$$ when viewed as the set $$\{(a,b) \mid a,b \in \mathbf{R} \text{ and } a \leq b \}$$.

A __function__ $$f:A \rightarrow A$$ is a relation when viewed as the set $$\{(a, f(a)) \mid a \in A\}$$.

"__divides__" is a relation on $$\mathbf{Z}$$.

"__is congruent to, modulo n__" is a relation on $$\mathbf{Z}$$.


## Definition of an equivalence relation

A relation $$R$$ on a set $$S$$ is an __equivalence relation__ on $$S$$ if it satisfies the following three properties:

* reflexivity: for all $$x \in S$$, $$\ x R x$$;
* symmetry: for all $$x, y \in S$$, if $$x R y$$, then $$y R x$$;
* transitivity: for all $$x,y,z \in S$$, if $$x R y$$ and $$y R z$$, then $$x R z$$.

__Notation:__ a common symbol for an equivalence relation is $$\sim$$.

## Examples and non-examples of equivalence relations

For any set $$S$$, "__is equal to__" is an equivalence relation on $$S$$:

* For any $$x \in S$$, we have $$x = x$$.
* For any $$x,y \in S$$, if $$x = y$$, then $$y = x$$.
* Finally, for any $$x,y,z \in S$$, if $$x = y$$ and $$y = z$$, then $$x = z$$.

Equality is the canonical example of an equivalence relation. In fact, the notion of an equivalence relation is just a generalization of equality.

"__less than or equal to__" is not a relation on $$\mathbf{R}$$ because although it is reflexive and transitive, it is not symmetric: $$2 \leq 3$$ but it is not true that $$3 \leq 2$$.

"__has the same major as__" is an equivalence relation on students.

* any student has the same major as him/herself.
* if a student A has the same major as student B, then student B has the same major as student A.
* if student A has the same major as student B, and student B has the same major as student C, then student A has the same as student C.

"__is a parent of__" is a relation on people, but it is not an equivalence relation. It is not reflexive (no one is their own parent), not symmetric (if A is a parent of B, then B is not a parent of A) and not transitive (for the most part, if A is a parent of B and B a parent of C, then A is not a parent of C).

"__is the same color as__" is an equivalence relation on socks by the same argument as for the relation "has the same major as" on students.

"__has the same value as__": let $$f: S \rightarrow V$$ be a function. For any $$x, y \in S$$, define $$x \sim y$$ if and only if $$f(x) = f(y)$$. In other words, two elements are equivalent if they have the same value via the function $$f$$. This is equivalence relation on $$S$$, by the same argument as the one for the "has the same major as" and "is the same color as" equivalence relations.

For any two propositions $$p$$ and $$q$$, we define $$p$$ to be __logically equivalent to__ $$q$$ if they have the same truth tables. Logical equivalence is an equivalence relation. One way to prove this is by verifying the three properties. Another way to prove this is by noticing that logical equivalence can be restating as propositions having the same "value", with the value being their truth table.

For any $$(a,b)$$ and $$(c,d) \in \mathbf{Z} \times \mathbf{Z}$$ such that $$b,d \neq 0$$, define $$(a,b) \sim (c,d)$$ if and only if $$ad = bc$$. (The proof that this relation is an equivalence relation is left as an exercise to the reader.) This is how we define the __equivalence of fractions__.

"__divides__" is not an equivalence relation. Why not?

"__is congruent to, modulo n__" is an equivalence relation. Let $$n \in \mathbf{N}$$. For any $$a,b \in \mathbf{Z}$$, define $$a \sim b$$ if and only if $$a \equiv b \pmod{n}$$. (Left as an exercise to the reader.)

(Linear algebra required.) Let $$S$$ be a subspace of a vector space $$V$$. Define $$v \sim w$$ if and only if $$v - w \in S$$. This is an equivalence relation on $$V$$. (The proof is similar to the proof that congruence, modulo n is an equivalence relation.)

## Definition of a partition

A __partition__ $$\mathbf{P}$$ of a set $$S$$ is a collection of subsets of $$S$$ which satisfy the following two properties:

* they are mutually disjoint: for all $$P,Q \in \mathbf{P}$$, $$\ P \cap Q = \varnothing$$.
* they cover $$S$$: $$\ \ \ \displaystyle\bigcup_{P \in \mathbf{P}} P = S$$.

In other words, a partition of $$S$$ is a collection of disjoint subsets of $$S$$ whose union is all of $$S$$.

## Definition of an equivalence class

Given an equivalence relation $$\sim$$ on a set $$S$$ and an arbitrary element $$x \in S$$, the __equivalence class__ $$x$$ is the set of all $$y \in S$$ such that $$y \sim x$$.

__Notation:__ we will denote the equivalence class $$x$$ as $$\bar{x}$$. In other words, $$y \in \bar{x}$$ if and only if $$y \sim x$$.

__Notation:__ the set of equivalence classes of $$S$$ defined by $$\sim$$ is denoted $$S/{\sim}$$.

## Examples of equivalence classes

"__is equal to__": for each $$x \in S$$, the only element equal to $$x$$ for any $$x \in S$$ is $$x$$ itself. So $$\bar{x} = \{x\}$$, and $$S/{=}$$ is the set $$\{\{x\} \mid x \in S\}$$.

"__has the same major as__": all the students in the same major form an equivalence class. If Sam is a CS major, then $$\overline{\text{Sam}}$$ is the set of all CS majors. The set students/major is the set of all such equivalence classes, with one for each major.

__Congruence, modulo 3__: there are three equivalence classes:

$$\{\dots, -9, -6, -3, 0, 3, 6, 9, \dots\}$$  
$$\{\dots, -8, -5, -2, 1, 4, 7, 10, \dots\}$$  
$$\{\dots, -7, -4, -1, 2, 5, 8, 11, \dots\}$$

These three equivalence classes are disjoint: no integer appears in more than of these sets. These three equivalence classes also cover $$\mathbf{Z}$$: every integer appears in one of theses sets. This means that these form a partition of $$\mathbf{Z}$$.

Using our notation for equivalence classes, each of these sets comes with many names. For example:
$$\{\dots, -9, -6, -3, 0, 3, 6, 9, \dots\} = \bar{0} = \bar{3} = \bar{6} = \overline{-3} = \overline{-6} = \dots$$

Another common notation for these equivalence classes is

$$\{\dots, -9, -6, -3, 0, 3, 6, 9, \dots\} = 3 \mathbf{Z}$$  
$$\{\dots, -8, -5, -2, 1, 4, 7, 10, \dots\} = 1 + 3 \mathbf{Z}$$  
$$\{\dots, -7, -4, -1, 2, 5, 8, 11, \dots\} = 2 + 3 \mathbf{Z}$$

__Congruence, modulo n__: By convention, the set of these equivalence classes, modulo $$n$$ is denoted $$\mathbf{Z}/n\mathbf{Z}$$. The equivalence classes are denoted $$n\mathbf{Z}$$, $$1 + n\mathbf{Z}$$, $$2 + n \mathbf{Z}$$, ..., $$(n-1) + n \mathbf{Z}$$.

## Theorem: equivalence relations "=" partitions

1. Let $$\sim$$ be an equivalence relation on $$S$$. Then $$S/{\sim}$$ is a partition of $$S$$.  
2. Given a partition $$\mathbf{P}$$ of $$S$$, there exists an equivalence relation $$\sim$$ on $$S$$ such that $$S/{\sim} = \mathbf{P}$$.

### Proof of 1

We need to show that the equivalence classes of $$S$$ are disjoint and their union is all of $$S$$.

* disjoint: let $$x, y \in S$$. We need to show that their equivalence classes $$\bar{x}$$ and $$\bar{y}$$ are either equal or disjoint. There are two cases to consider:
  * case 1: $$x \sim y$$. Let $$z$$ be an arbitrary element of $$\bar{x}$$. This means that $$z \sim x$$. By transitivity, $$z \sim y$$, or equivalently $$z \in \bar{y}$$. This shows that $$\bar{x} \subseteq \bar{y}$$. By a similar argument, we can also show that $$\bar{y} \subseteq \bar{x}$$. Therefore, $$\bar{x} = \bar{y}$$.
  * case 2: $$x \not\sim y$$. Suppose that $$\bar{x} \cap \bar{y} \neq \varnothing$$ and let $$z$$ be an arbitrary element of $$\bar{x} \cap \bar{y}$$. This means that $$z \sim x$$ and $$z \sim y$$. By symmetry and transitivity, we have that $$x \sim y$$, which is a contradiction. Therefore, such a $$z$$ does not exist, which means that $$\bar{x}$$ and $$\bar{y}$$ are disjoint.

* cover of $$S$$: We need to show that $$\ \displaystyle\bigcup_{\bar{x} \in S/{\sim}} \bar{x} = S$$.
  * $$\subseteq$$: by definition, the elements $$\bar{x}$$ of $$S/{\sim}$$ are subsets of $$S$$. So the union of all equivalence classes is also a subset of $$S$$.
  * $$\supseteq$$: let $$x$$ be an arbitrary element of $$S$$. By reflexivity, $$x \sim x$$, so $$x \in \bar{x}$$, so $$x \in \bigcup_{\bar{y} \in S/{\sim}} \bar{y}$$. (Here, we used $$\bar{y}$$ instead of $$\bar{x}$$, because $$\bar{x}$$ already referred to a specific element whereas the symbol in the union is just a dummy variable.) This proves that $$S \subseteq \bigcup_{\bar{y} \in S/{\sim}} \bar{y}$$.

### Proof of 2

We must (1) define a relation $$\sim$$ on $$S$$ based on the partition $$\mathbf{P}$$, (2) show that $$\sim$$ is in fact an equivalence relation, and (3) show that the set of equivalence classes defined by $$\sim$$ is equal to $$\mathbf{P}$$.

1. We define $$\sim$$ on $$S$$ as follows: for any $$x,y \in S$$, $$\ x \sim y$$ if and only if there exists a $$P \in \mathbf{P}$$ such that $$x\in P$$ and $$y \in P$$.
2. We show that $$\sim$$ is an equivalence relation:
  * reflexivity: let $$x \in S$$. Because the sets of $$\mathbf{P}$$ cover $$S$$, there exists $$P \in \mathbf{P}$$ such that $$x \in P$$. Therefore, $$x \sim x$$ by our definition of $$\sim$$.
  * symmetry: let $$x,y\in S$$ such that $$x \sim y$$. This means that there exists a $$P \in \mathbf{P}$$ such that $$x \in P$$ and $$y \in P$$. This is clearly a symmetric relation: $$y \sim x$$.
  * transitivity: let $$x,y,z \in S$$ such that $$x \sim y$$ and $$y \sim z$$. So there are $$P, Q \in \mathbf{P}$$ so that $$x \in P$$, $$y \in P$$, $$y \in Q$$ and $$z \in Q$$. Since the sets of $$\mathbf{P}$$ are disjoint and $$P$$ and $$Q$$ are not disjoint (they both contain $$y$$), the only way this can be true is if $$P = Q$$. Therefore $$z \in P$$, which means that $$x \sim z$$.
3. Finally we show that $$S/{\sim}=\mathbf{P}$$.
  * $$\subseteq$$: let $$\bar{x}$$ be an arbitrary equivalence class of $$S$$. We need to show that $$\bar{x} \in \mathbf{P}$$. Now since $$x \in S$$ and $$\mathbf{P}$$ is a partition of $$S$$, there exists $$P \in \mathbf{P}$$ such that $$x \in P$$.  We have $$y\in \bar{x}$$, if and only if $$y \sim x$$, if and only if $$y \in P$$. Therefore, $$\bar{x} = P$$, which implies that $$\bar{x} \in \mathbf{P}$$. So $$S/{\sim} \subseteq \mathbf{P}$$.
  * $$\supseteq$$: let $$P$$ be an arbitrary element of $$\mathbf{P}$$, and let $$x \in P$$. Then $$y \in \bar{x}$$ if and only if $$y \sim x$$, if and only if $$y \in P$$. Therefore $$\bar{x} = P$$. So $$P$$ is an equivalence class of $$S$$. In other words, $$P \in S/{\sim}$$. This show shows that $$\mathbf{P} \subseteq S/{\sim}$$.

## Examples of equivalence relations from partitions

_to be completed_

## The first isomorphism theorem of sets

_to be completed_

<!--
- Surjections yield equivalence relations
- Modding out yields bijection
-->

## Definition of a system of distinct representatives

Let $$\sim$$ be an equivalence relation on $$S$$. A __system of distinct representatives__ for $$S/{\sim}$$ is a set containing exactly one element from each equivalence class of $$S$$.
