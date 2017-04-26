---
layout: course
courseid: 146-s17
title: Homework 11
mathjax: true
navorder: 0
---

# Description

The goal of this assignment is to master the following skills and concepts:

1. solve problems recursively and implement them using dynamic programming
2. analyze the time and space complexity of an implementation which uses dynamic programming

# Submission

You will package your assignment as a __single ZIP file__ and submit it on Canvas. The package should include a pdf file for the written portion of your work and .java files for the code.

For suggestions on how to make a pdf file, please refer to [Homework 1 - Submission](homework01.html#Submission).

# Problems to be submitted
 
Preparation: The following problems ask that you solve a problem using dynamic programming. Begin by studying the [solution](//github.com/jnylam/SJSU-cs146-s17/blob/master/08_DynamicProgramming/src/cc/jennylam/cs146/EditDistance.java) to the edit distance problem which we discussed in class. You should also review the lecture on the [dynamic programming solution](dp2.pdf) to the all-pairs shortest path problem.

### Problem 1: longest common subsequence

Define the longest common subsequence problem:

* the input is two sequences `seq1 = [x0, x1, ..., xn]` and `seq2 = [y0, y1, ..., yn]`;
* the output is the length of the longest common subsequence.

This is similar to the edit distance problem, except that we are only allowed insertions and deletions, and no substitution.

__(a)__ Express the problem in terms of subproblems and include the base case. (An example of how to do this is given in the notes for the recursive solution for the all-pairs shortest paths problem. The solution is also very similar to the edit distance problem. Try to write down some examples as a place to start).

__(b)__ In preparation for a dynamic programming solution, describe:

* the number of dimensions needed by a table which will be used to  record the solutions to the subproblems
* for each dimension of the table, what the index represents, and what its range of values is

__(c)__ In Java, give a dynamic programming solution to the problem (include the solution as a java file).

__(d)__ What is the time complexity and space complexity of this solution? Justify your answer.

### Problem 2: make change

Recall that the [problem of making change](homework08.html/#problem-1-more-bactracking-and-memoization).

__(a)__ In preparation for a dynamic programming solution, describe:

* the number of dimensions needed by a table which will be used to  record the solutions to the subproblems
* for each dimension of the table, what the index represents, and what its range of values is

__(b)__ In Java, give a dynamic programming solution to the problem (include the solution as a java file).

__(c)__ What is the time complexity and space complexity of this solution? Justify your answer.

# Not to be submitted

### Problem: sequence alignment

__Note:__ this problem requires that you have a coded solution (rather than just pseudocode) for problem 1.

The longest common subsequence problem is used in bioinformatics to do "sequence alignment". By aligning DNA or protein sequences across species, we can gain insight into how closely related two species are (see Wikipedia article on  [divergent evolution](https://en.wikipedia.org/wiki/Divergent_evolution)).

One particular gene that is common to all species is hemoglobin, beta subunit, or HBB. Here we show the protein sequence (a string over a 20-character alphabet of amino acids, A-Z, minus BJOUXZ) corresponding to this gene for several species, which are listed in square brackets (for example, the first is Anas puna).

```
>gi|254770346|gb|ACT81418.1| hemoglobin beta A subunit [Anas puna]
MVHWTAEEKQLITGLWGKVNVADCGAEALARLLIVYPWTQRFFASFGNLSSATAITGNPMVRAHGKKVLT
SFGDAVKNLDNIKNTFAQLSELHCEKLHVDPENFRLLGDILIIVLAAHFTKDFTPECQAAWQKLVRVVAH
ALARKYH

>gi|73762242|gb|AAZ83609.1| Hbb [Borreliella garinii]
MSFSRRPKITKSDIVDQISLNIRNNNLKLEKKYIRLVIDAFFEELKGNLCLNNVIEFRSFGTFEVRKRKG
RLNARNPQTGEYVKVLDHHVAYFRPGKDLKERVWGIKG

>gi|426367146|ref|XP_004050595.1| PREDICTED: hemoglobin subunit beta [Gorilla gorilla gorilla]
MVHLTPEEKSAVTALWGKVNVDEVGGEALGRLLVVYPWTQRFFESFGDLSTPDAVMGNPKVKAHGKKVLG
AFSDGLAHLDNLKGTFATLSELHCDKLHVDPENFKLLGNVLVCVLAHHFGKEFTPPVQAAYQKVVAGVAN
LSS

>gi|49456781|emb|CAG46711.1| HBB, partial [Homo sapiens]
MVHLTPEEKSAVTALWGKVNVDEVGGEALGRLLVVYPWTQRFFESFGDLSTPDAVMGNPKVKAHGKKVLG
AFSDGLAHLDNLKGTFATLSELHCDKLHVDPENFRLLGNVLVCVLAHHFGKEFTPPVQAAYQKVVAGVAN
ALAHKYH

>gi|171854971|dbj|BAG16710.1| hemoglobin beta chain subunit [Mus musculus]
MVHLTDAEKAAVSGLWGKVNSDEVGGEALGRLLVVYPWTQRYFDSFGDLSSASAIMGNAKVKAHGKKVIT
AFNEGLNHLDSLKGTFASLSELHCDKLHVDPENFRLLGNMIVIVLGHHLGKDFTPAAQAAFQKVMAGVAT
ALAHKYH

>gi|431832732|gb|AGA93060.1| hemoglobin beta A subunit [Oxyura ferruginea]
MVHWTAEEKQLITGLWGKVNVADCGAEALARLLIVYPWTQRFFSSFGNLSSPTAILGNPMVRAHGKKVLS
SFGDAVKNLDNIKNTFAQLSELHCDKLHVDPENFRLLGDILIIVLAAHFSKDFTPDCQAAWQKLVRVVAH
ALARKYH

>gi|185132519|ref|NP_001117138.1| hemoglobin subunit beta [Salmo salar]
MVDWTDAERSAIVGLWGKISVDEIGPQALARLLIVSPWTQRHFSTFGNLSTPAAIMGNPAVAKHGKTVMH
GLDRAVQNLDDIKNAYTALSVMHSEKLHVDPDNFRLLADCITVCVAAKLGPTVFSADIQEAFQKFLAVVV
SALGRQYH

>gi|51593148|gb|AAH78472.1| Hbb protein, partial [Xenopus laevis]
MVHLSADEKSAINAVWSKVNIENDGHDALTRLLVVFPWTQRYFSSFGNLSNVAAISGNAKVRAHGKKVLS
AVDESIHHLDDIKKKKKKKKKKK
```

__(a)__ order the species listed above by how closely related you believe they are to humans. You may need to do a web search to find out what animals each of the scientific names in square brackets represents.

__(b)__ order the species above by the length of the longest common subsequence between their HBB protein sequence and human HBB protein sequence. Does this serve to confirm your prior knowledge or to refute it? Any surprises?

__Source:__ [National Center for Biotechnology Information](https://www.ncbi.nlm.nih.gov)  
Here is how you find the data for the human HBB:

![](ncbi_search.png)

The first search result:

![](ncbi_search2.png)

Click on __FASTA__:

![](ncbi_search3.png)

__Acknowledgements:__ many thanks to Dr. Phil Heller, for the inspiration, discussions, pointers, suggestions, which made this problem possible.


