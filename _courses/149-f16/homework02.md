---
layout: course
courseid: 149-f16
title: Homework 2
navorder: 0
---

Write your own basic shell program

``` python
def main():  
    while true:
        display shell prompt, e.g. ">"
        read command line input
        split input into commands separated by the '&' delimiter
        for each command:
            spawn new process and execute the command in that process
        for each command:
            wait for that process to terminate
```

### Hints

- study [Runtime](https://docs.oracle.com/javase/8/docs/api/java/lang/Runtime.html) and [Process](https://docs.oracle.com/javase/8/docs/api/java/lang/Process.html) Java APIs.
- (line 4) use java.util.Scanner
- (line 5) use String.split() and regex, must be able to handle arbitrary number of whitespace characters on either side of the delimiter. Egs
- (line 7) use Runtime and Process classes
  Runtime r = Runtime.getRuntime(); Process p = r.exec(command);
- (line 9) refer to Process API, handle Exeption in a reasonable way

### Extensions

- handle invalid commands by returning useful message and accepting new input
- stopping the program due to keyboard interrupt (CTRL-C) or command “EXIT”: if print message indicating that the program is shutting down because of a keyboard interrupt, calling System.exit(0)
- assign process IDs for processes running in parallel, update when processes terminate
- add ability to print output to screen. To see the ouptput of the execution, get it and print it to the screen. Each line of output should start with the process ID: [PID] line of output
  BufferedReader processErrors = new BufferedReader(new InputStreamReader(p.getErrorStream());
- handle optional input from a file, and exit immediately in this case

### Testing

- test on processes that run a long time. Does the shell wait?

### Questions

1. what are the hooking points into the underlying OS’s API?
2. why need two separate for loops over the commands?
3. provide two `cat` files which will likely force the `EXIT` before and after the `cat` command completes.

## Deliverables

## Rubric
