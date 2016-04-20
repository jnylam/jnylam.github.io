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

"is equal to" is a relation on any set $$S$$ since it  $$\{(s,s) \mid s \in S\}$$

"less than or equal to" is a relation on the set $$\mathbf{R}$$ when viewed as the set $$\{(a,b) \mid a,b \in \mathbf{R} \text{ and } a \leq b \}$$.

A function $$f:A \rightarrow A$$ is a relation when viewed as the set $$\{(a, f(a)) \mid a \in A\}$$.

"divides" is a relation on $$\mathbf{Z}$$.

"is congruent to, modulo n" is a relation on $$\mathbf{Z}$$.


## Definition of an equivalence relation

A relation $$R$$ on a set $$S$$ is an __equivalence relation__ on $$S$$ if it satisfies the following three properties:

* reflexivity: for all $$x \in S$$, $$\ x R x$$;
* symmetry: for all $$x, y \in S$$, if $$x R y$$, then $$y R x$$;
* transitivity: for all $$x,y,z \in S$$, if $$x R y$$ and $$y R z$$, then $$x R z$$.

__Notation:__ a common symbol for an equivalence relation is $$\sim$$.

## Examples of equivalence relations, proving each is an equivalence relation

"is equal to"
- less than is not a relation
- equivalent fractions
- modulo classes
- cosets of a subspace of a vector space
- students by major
- being a parent of is not an equivalence relation
- socks by color

## Definition of a partition

A __partition__ $$\mathbf{P}$$ of a set $$S$$ is a collection of subsets of $$S$$ which satisfy the following two properties:

* they are mutually disjoint: for all $$P,Q \in \mathbf{P}$$, $$\ P \cap Q = \varnothing$$.
* they cover $$S$$: $$\ \ \ \displaystyle\bigcup_{P \in \mathbf{P}} P = S$$.

In other words, a partition of $$S$$ is a collection of disjoint subsets of $$S$$ whose union is all of $$S$$.

## Definition of an equivalence class

Given an equivalence relation $$\sim$$ on a set $$S$$ and an arbitrary element $$x \in S$$, the __equivalence class__ $$x$$ is the set of all $$y \in S$$ such that $$y \sim x$$.

__Notation:__ we will denote the equivalence class $$x$$ as $$\bar{x}$$. In other words, $$y \in \bar{x}$$ if and only if $$y \sim x$$.

## Examples, go over the previous ones, and talk about the equivalence classes

## Theorem: equivalence relations "=" partitions

1. The set of all equivalence classes of a set $$S$$ with
respect to an equivalence relation $$\sim$$ is a partition of $$S$$.  
2. Given a partition $$\mathbf{P}$$ of $$S$$, there exists an equivalence relation $$\sim$$ on $$S$$ such that the set of equivalence classes is equal to $$\mathbf{P}$$.

__Proof of 1__

We need to show that the equivalence classes of $$S$$ are disjoint and their union is all of $$S$$.

* disjoint: let $$x, y \in S$$. We need to show that their equivalence classes $$\bar{x}$$ and $$\bar{y}$$ are either equal or disjoint. There are two cases to consider:
  * case 1: $$x \sim y$$. Let $$z$$ be an arbitrary element of $$\bar{x}$$. This means that $$z \sim x$$. By transitivity, $$z \sim y$$, or equivalently $$z \in \bar{y}$$. This shows that $$\bar{x} \subseteq \bar{y}$$. By a similar argument, we can also show that $$\bar{y} \subseteq \bar{x}$$. Therefore, $$\bar{x} = \bar{y}$$.
  * case 2: $$x \not\sim y$$. Suppose that $$\bar{x} \cap \bar{y} \neq \varnothing$$ and let $$z$$ be an arbitrary element of $$\bar{x} \cap \bar{y}$$. This means that $$z \sim x$$ and $$z \sim y$$. By symmetry and transitivity, we have that $$x \sim y$$, which is a contradiction. Therefore, such a $$z$$ does not exist, which means that $$\bar{x}$$ and $$\bar{y}$$ are disjoint.

* cover of $$S$$: We need to show that $$\ \displaystyle\bigcup_{x \in S} \bar{x} = S$$.
  * $$\subseteq$$: by definition, $$\bar{x}$$ is a set of elements $$y \in S$$, so it is a subset of $$S$$. So the union of all equivalence classes is also a subset of $$S$$.
  * $$\supseteq$$: let $$x$$ be an arbitrary element of $$S$$. By reflexivity, $$x \sim x$$, so $$x \in \bar{x}$$, so $$x \in \bigcup_{y \in S} \bar{y}$$. (Here, we used $$y$$ instead of $$x$$, because $$x$$ already referred to a specific element whereas the symbol in the union is just a dummy variable.) This proves that $$S \subseteq \bigcup_{y \in S} \bar{y}$$.

__Proof of 2__

We must (1) define a relation $$\sim$$ on $$S$$ based on the partition $$\mathbf{P}$$, (2) show that $$\sim$$ is in fact an equivalence relation, and (3) show that the set of equivalence classes defined by $$\sim$$ is equal to $$\mathbf{P}$$.

1. We define $$\sim$$ on $$S$$ as follows: for any $$x,y \in S$$, $$\ x \sim y$$ if and only if there exists a $$P \in \mathbf{P}$$ such that $$x\in P$$ and $$y \in P$$.
2. We show that $$\sim$$ is an equivalence relation:
  * reflexivity: let $$x \in S$$. Because the sets of $$\mathbf{P}$$ cover $$S$$, there exists $$P \in \mathbf{P}$$ such that $$x \in P$$. Therefore, $$x \sim x$$ by our definition of $$\sim$$.
  * symmetry: let $$x,y\in S$$ such that $$x \sim y$$. This means that there exists a $$P \in \mathbf{P}$$ such that $$x \in P$$ and $$y \in P$$. This is clearly a symmetric relation: $$y \sim x$$.
  * transitivity: let $$x,y,z \in S$$ such that $$x \sim y$$ and $$y \sim z$$. So there are $$P, Q \in \mathbf{P}$$ so that $$x \in P$$, $$y \in P$$, $$y \in Q$$ and $$z \in Q$$. Since the sets of $$\mathbf{P}$$ are disjoint and $$P$$ and $$Q$$ are not disjoint (they both contain $$y$$), the only way this can be true is if $$P = Q$$. Therefore $$z \in P$$, which means that $$x \sim z$$.
3. 

## Example of equivalence relations from partitions

## the 1st isomorphism theorem of sets

- Surjections yield equivalence relations
- Modding out yields bijection
