---
layout: course
title: "Homework 6"
courseid: ds
navorder: 3
mathjax: true
---

__Instructions:__ due Friday 4/29 at 11:59pm through [Sakai](http://sakai.claremont.edu) as a PDF file.

### Introduction

In this assignment, you will implement two simple MapReduce tasks which are described in the paper that introduced the concept: [MapReduce: Simplified Data Processing on Large Clusters](http://research.google.com/archive/mapreduce-osdi04.pdf)

### Step 0: download assignment

The files for this assignment are in the folder `hw6` of the [course repository](https://github.com/jnylam/cs189a/tree/master/hw6).


### Step 1: set up Glow

[Glow](https://github.com/chrislusf/glow) is a Map Reduce package for Go. Follow [these instructions](https://blog.gopheracademy.com/advent-2015/glow-map-reduce-for-golang/) to install this package and to check the installation by running a word count program.

You can become familiar with Glow's API by consulting the wiki.

### Step 2: generate input data

Run the Python webcrawler to generate a file containing a list of (source URL, target URL) pairs. Your file must be at least 1000 lines long.

### Step 3: count of URL access frequency

Use Glow to implement this task, as it is described on page 2 of the MapReduce paper.

Your implementation should be a stand-alone Go application which takes an input file name as a command line argument and output the results to standard out.

Each line of the output should be in the format

```
url: count
```

where `count` is the number of times a URL appears as a target URL.

### Step 4: reverse web-link graph

Again, use glow to implement this task, which is also described on page 2 of the MapReduce paper. Your implementation should be a stand-alone Go application which takes an input file name as a command line argument and output the results to standard out.

Each line of the output should be in the format

```
target-url: source-url-1, source-url-2, source-url-3
```

where the list of source urls will vary in length.

### Step 5: submission

Make a .zip file of the `hw6` directory and submit on Sakai. Your code should go in the files `urlcount.go` (for the count of URL access frequency) and `reverse.go` (for the reverse web-link graph). The `data` folder is there to keep your files organized. This is where your input and output files should go. However, these will be ignored and new input files will be generated for the purposes of grading.
