---
layout: course
homepage: true
coursetitle: Distributed Systems
coursesubtitle: CSCI189A PO-01 &mdash; Spring 2016 &mdash; Pomona College
courseid: ds
title: Schedule
navorder: 1
---

<a name="schedule"></a>

_This schedule is tentative and subject to change during the semester._

Date|Lecture|Reading|Assignments
----|-------|-------|-----------
W 1/20  |  [Introduction to distributed systems](#introduction-to-distributed-systems) | 1.1, 1.2
M 1/25  |  Communication: [Internet 1](#internet-1)  | 2.1, [Design philosophy of the Internet](http://dl.acm.org/citation.cfm?id=52336)
W 1/27  |  Communication: [Internet 2](#internet-2)  | |[Homework 1](homework01.html)
M 2/1   |  [Introduction to Go](https://github.com/jnylam/cs189a/tree/master/intro) | [Intro to programming in Go](http://www.golang-book.com/books/intro) Chapters 1-7
W 2/3   |  [Concurrency in Go](https://github.com/jnylam/cs189a/tree/master/concurrency)  | [Intro to programming in Go](http://www.golang-book.com/books/intro) Chapters 8-14<br/>[Concurrency notes](http://www.andrew.cmu.edu/course/15-440-kesden/index/lecture_index.html) by Kesden
M 2/8   |  Communication: [Remote procedure calls](#remote-procedure-calls)  |  4.1, 4.2
W 2/10  |  No class |
M 2/15  |  Coordination: [Time](#time) | 6.1, 6.2 | [Project 1](https://github.com/jnylam/cs189a/tree/master/project1) due 2/26 at 11:59pm on [Sakai](https://sakai.claremont.edu)
W 2/17  |  Coordination: [Mutual exclusion](#mutual-exclusion)<br/>Coordination: [Leader election](#leader-election)  | 6.3, 6.5 | [Homework 2](homework02.html) due 2/29 at 11:59pm on [Sakai](https://sakai.claremont.edu)
M 2/22  | Coordination: [Distributed hash tables](#distributed-hash-tables) ||
W 2/24  | Fault tolerance: [Error detection and correction](#error-detection-and-correction) ||
M 2/29  | Fault tolerance: [RAID](#raid) || [Homework 3](homework03.html) due 3/11 at 11:59pm on [Sakai](https://sakai.claremont.edu)
W 3/2   | [Concurrency control](#concurrency-control) | 8.5 |  [Project 2](https://github.com/jnylam/cs189a/tree/master/project2)
M 3/7   | Fault-tolerance: [logging and crash recovery](#logging-and-crash-recovery) | 8.6  |
W 3/9   | **Exam 1** |
        | _Spring recess_ |
M 3/21  |  Case study: [distributed file systems](#distributed-file-systems) |
W 3/23  |  Replication: [sequential consistency](#sequential-consistency) |
M 3/28  |  Replication: [causal, eventual consistency](#causal-and-eventual-consistency) |
W 3/30  |  Replication: [strong eventual consistency, CRDTs](#strong-eventual-consistency-and-crdts) | | [Homework 4](homework04.html) due 4/8 at 11:59pm on [Sakai](https://sakai.claremont.edu)
M 4/4   |  Consensus: [2PC and 3PC](#pc-and-3pc) | 8.5
W 4/6   |  Consensus: [Paxos](#paxos) | [Paxos made simple](http://www.cs.utexas.edu/users/lorenzo/corsi/cs380d/past/03F/notes/paxos-simple.pdf) | [Project 2 part A](https://github.com/jnylam/cs189a/tree/master/project2) due 4/6 at 11:59pm on [Sakai](https://sakai.claremont.edu)
M 4/11  |  Case study: [Chubby lock service](#the-chubby-lock-service) | [The Chubby Lock Service for Loosely-Coupled Distributed Systems](http://research.google.com/archive/chubby.html) |
W 4/13  |  [Security and cryptography](#security-and-cryptography) |  9.1, 9.2, 9.4.1 |
M 4/18  |  [MapReduce, Pregel](#mapreduce-and-pregel) | |
W 4/20  |  Case study: [Bitcoin](#bitcoin) | [Michael Nielsen's blog post](http://www.michaelnielsen.org/ddi/how-the-bitcoin-protocol-actually-works/)| [Homework 5](homework05.html) due 4/20 at 11:59pm on [Sakai](https://sakai.claremont.edu)
M 4/25  |  [Multicast and membership](#multicast-and-membership) | 4.5.2., 8.2.4
W 4/27  |  [Distributed snapshots](#distributed-snapshots)| [An introduction to snapshot algorithms in distributed computing](http://iopscience.iop.org/article/10.1088/0967-1846/2/4/005/pdf)| [Project 2 part B](https://github.com/jnylam/cs189a/tree/master/project2) due 4/27 at 11:59pm on [Sakai](https://sakai.claremont.edu)<br />[Homework 6](homework06.html) due 4/29 at 11:59pm on [Sakai](https://sakai.claremont.edu)
M 5/2   | **Presentations** | |
W 5/4   | **Presentations** | | **Exam 2** due 5/5 at 11:59pm on Sakai
        | _Finals week: no meeting_ |

<!--

MapReduce: Data intensive computation, Distributed filesystems for MapReduce / HDFS
Byzantine Fault tolerance
Security
TOR, P2P
Gossip protocols

M 4/4   |  Data intensive computation  |
W 4/6   |  Distributed filesystems for MapReduce / HDFS  | [Google filesystem](http://research.google.com/archive/gfs-sosp2003.pdf). Optional: [GFS follow-up interview](http://queue.acm.org/detail.cfm?id=1594206)
M 4/11  |  DNS and CDNs  |  5.3.3-5.3.4
W 4/13  |  P2P  |  5.2.3
M 4/18  |  Virtual machines  |  3.2
W 4/20  |  Byzantine fault tolerance  |  [BFT lecture by Barbara Liskov](http://video.mit.edu/watch/practical-byzantine-fault-tolerance-9388/)
M 4/25  |  Security  |  9.1, 9.2, 9.4.1
W 4/27  |  TOR  |  [TOR paper](https://svn.torproject.org/svn/projects/design-paper/tor-design.pdf) and [TOR presentation](http://freehaven.net/~arma/slides-toorcon05.pdf)
M 5/2   |**Final exam** |
W 5/4   |**Project presentations** |
        | _Finals week: no meeting_ |
-->

---

# Introduction to distributed systems

## What is a distributed system?
  - single system image: a collection of independent computers that appears as a single coherent system to users and applications, Tannenbaum
  - *You know you have one when the crash of a computer you've never heard of stops you from getting any work done, Lamport*
  - no shared memory, no shared clock

## Why distributed systems?
-  ATMs
- collaboration: messaging, photo/video sharing
- remote content: web browsing, music & video download, IPTV
- massive performance:  rendering of Monsters University
  - average 29 hours to render each frame,
  - total: 100 million CPU hours
  - 3000 to 5000 AMD processors
  - 10 Gbps and 1Gbps network
- Google
  - 40,000 search queries per sec on ave
  - index >50 billion webpages
  - hundreds of thousands of servers
  - to index 50 million pages
    - 1999: one month
    - 2012: one minute
  - each query
    - travels 1,500 miles
    - uses 1000 computers
    - 0.2 secs

## Design challenges
- transparency: hide distribution from users / software
  - location
  - migration
  - replication
  - concurrency
  - parallelism
- usability
  - performance
  - availability
  - reliability
  - security
- dealing with reality
  - network
  - programming
  - scalability

## Key approaches
  - divide and conquer
  - replication
  - consensus
  - openness

## Projects in this class

Project 1: multi-echo server

Project 2: Bitcoin miner

- design your own transport protocol
- use it to implement a bitcoin miner

Project 3: Tribbler

- remote procedure calls
- consistent hashing
- lease based client caching model
- atomic operations

Project 4: design your own distributed service

- Paxos
- review


## Questions

- Name
- College, year, major
- Where will you be this summer, next year?
- What do you hope to get out of this course?

[&uarr; back to the top](#schedule)

---

# Internet 1

## Top level goal: "develop an effective technique for multiplexed utilization of existing interconnected networks"

__Design philosophy of the DARPA internet protocols (1988)__

- components: networks to be interconnected to provide some larger service
- originally: ARPANET with ARPA packet radio network
- networks could represent administrative boundaries of control
- alternative: design a unified system from scratch
- multiplexing:
  - use packet switching
  - alternative: circuit switching
  - why multiplex?
  - addressing
- mechanism for interconnecting the networks:
  - networks will be interconnected by a layer of Internet packet switches called gateways.
  - store and forward packet forwarding algorithm

## Secondary goals

Note: priorities for a military use, but would be different for commercial use

- Internet communication must continue despite loss of network or gateways
- The Internet must support multiple types of communication service.
- The Internet architecture must accommodate a variety of networks.
- The Internet architecture must permit distributed management of its resources
- The Internet architecture must be cost effective.
- The Internet architecture must permit host attachment with a low level of effort.
- The resources used in the Internet architecture must be accountable.

## Internet communication must continue despite loss of network or gateways

- achieved by storing state of on-going conversation at the endpoints of the network, at the entity which is utilizing the service of the network
- state information
  - number of packets transmitted
  - number of packets acknowledged
  - number of outstanding flow control permissions
- not in the packets themselves

## The Internet must support multiple types of communication service.

- traditionally: bi-directional reliable delivery of data
- called "virtual circuit"
- applications: file transfer, remote login
- different applications have different constraints: reliability, delay, bandwidth
- different transport services required --> separation of IP and TCP layers
- IP provides a basic building block out of which different transport services can be built
- Transmission Control Protocol or TCP provides reliable sequenced data stream
- User datagram protocol or UDP provides an application interface to the basic datagram service of Internet.
- The Internet architecture must accommodate a variety of networks.
- assumes minimum set of assumptions about the function which the net will provide
  - can transport a packet
  - the packet must be of reasonable size (100 bytes min)
  - packet delivery with reasonable, but not perfect reliability
  - must have some suitable form of addressing if more than a point to point link
- Ethernet
  - frame structure:
    - preamble
    - destination address
    - source address
    - Ethertype
    - data or payload
    - CRC - checksum for error correction
  - addressing mechanism: MAC addresses
- Token Ring
- Wifi
- Fiber optic cable

## The Internet architecture must permit distributed management of its resources

- originally managed by manual table entry, automated by routing protocols
- Within the Internet, an autonomous system (AS) is a collection of connected Internet Protocol (IP) routing prefixes under the control of one or more network operators on behalf of a single administrative entity or domain that presents a common, clearly defined routing policy to the Internet. (RFC 1930)
- interior gateway protocols type 1
  - link-state routing protocol: need to inform all nodes in a network of topology changes
  - uses Dijkstra's algorithm
  - OSPF - Open Shortest Path First
    - defined in RFC 2328 (1998) for IPv5 and RFC 5340 (2008) for IPv6
    - most widely used interior gateway protocol
    - loop-free routing, fast convergence
    - works better with under 100 routers
    - link cost factor - round-trip time, throughput, availability and reliability
  - IS-IS - Intermediate System to Intermediate System
    - common in large service provider networks
- interior gateway protocols type 2
  - distance-vector routing protocols
    - a router only needs to inform its neighbors of topology changes periodically
    - used Bellman-Ford, Ford-Fullkerson
    - count-to-infinity problem
    - convergence
  - Routing Information Protocol v1 and v2, ng
    - v1 proposed in 1988 (RFC 1058)
    - v2 support for router authentication
    - ng (next gen) support for IPv6 addressing
    - uses UDP
- exterior gateway protocols
  - to exchange info between autonomous systems
  - BGP - Border Gateway Protocol
    - between ISPs
    - uses TCP
    - many decision factors

## The Internet architecture must be cost effective.

- inefficiency in retransmission of packets
- TCP handshake may be expensive
- large headers
- possible solution
  - CDNs as cache: reduces transmission time
  - CDNs to keep live TCP connections: reduce cost of 3-way handshake



[&uarr; back to the top](#schedule)

---

# Internet 2

## Review question

Of TCP and UDP, which is most similar to postal mail? to the telephone service?

What are the similarities?

- reliability
- order
- connection-oriented?
- route taken
- handling


## Review question 2

Why datagrams?

- minimum network assumption
- can implement multiple connection services
- can easily implement reliable connections with unreliable underlying network


## Internet wrap up

- OSI networking stack
- IP stack: putting it all together


## Network diagnostic tools

- ping
- traceroute
- ifconfig


## Coping with addresses running out

- classless inter-domain routing (CIDR) - 1993
- Network address translation - NAT
  - coping with limitations of NAT: [NAT traversal](https://en.wikipedia.org/wiki/NAT_traversal)
- IPv6


## Security
The Internet is not secure:

- IP spoofing
- denial of service
- routing and DNS corruption
- Wifi insecurities

Solutions

- Cryptography and encryption good for secrecy and privacy, but doest not directly address denial-of-service attacks
- Distributed systems can't assume underlying network is trustworthy, must address that issue

## Web architecture

Acknowledgement: this section is based on the [lecture notes](https://www.cs.columbia.edu/~du/ds/schedule.html) by Roxana Geambasu, Peter Du, Yu Qiao.

### External caching

- Who?
  - Squid,
  - Apache mod_proxy,
  - CDNs
- What?
  - caches outbound data: images, videos, text files (css, xml, html)
  - DoS defense
  - latency reduction by being closer
- How?
  - lots of memory
  - moderate to little CPU
  - fast network
  - potentially distributed across the world


### Front-end tier: webservers

- Who?
  - Apache
  - thttpd
  - Tux Web server
  - IIS
- What?
  - HTTP, HTTPS
  - serves static content from disk
  - generates dynamic content: CGI, PHP, Python, Django
  - dispatches requests to app server tier
- How?
  - lots of memory - main bottleneck
  - CPU: low if static, some if dynamic
  - slow disk enough


### Application server tier

- Who?
  - Apache Tomcat
  - Oracle Weblogic
  - IBM Websphere
  - Adobe JRun
- What?
  - dynamic page processing: ASP, JSP, servlets
  - internal services: search, shopping cart, credit card processing
- How?
  - first, web tier generates request using
    - home-brewed RPC
    - REST
    - Corba
    - Java RMI
    - SOAP
    - XMLRPC
  - then, app server processes request and responds
  - lots (x3) of memory
  - lots of fast CPU
  - disk not typically needed
- So?
  - pro: decoupling of services/APIs helps with managing complexity
  - con: remote calling overhead can be expensive
    - marshalling of data, sockets, net latency
    - SOAP, XMLRPC don't scale well


### Database tier

- Who/what?
  - relational databases: PostgreSQL, SQLite, Oracle, MySQL, Berkeley DB
  - non-relational databases or distributed file systems: Bigtable, Megastore, MongoDB, Hadoop Hbase, HDFS
- So?
  - relational DBs: convenient interface, sound properties (strong consistency)
  - non-relational: scale better
- How?
  - lots of memory
  - large disks - RAID useful for redundancy


### Internal caching tier

- what?
  - object cache: intermediary app-level results
  - tuned for the application - vs generic external cache
  - fast access (< 1 ms)
- who?
  - memcached
  - application-level caching inside app servers
- how?
  - lots of memory
  - little to no disk
  - low CPU
  - fast network


### Miscellaneous services

- DNS
- time synchronization
- system health monitoring
- intrusion detection systems


### Glue

- load balancers
- routers
- switches
- firewalls


### Summary

- web architectures are complex
  - lots of tradeoffs
  - each layer has distinct hardware requirements and bottlenecks
- but
  - all layers need RAM
  - well-known solutions exist
  - understand workload is key to choosing right product at each layer



[&uarr; back to the top](#schedule)

---

# Remote Procedure calls

## Why remote procedure calls?

- Why not sockets: read/write interface
- LPC: transfer control and data on local programs
- goal: make client/server com look like LPC,
- hide complexity

## How it works under the hood

- simulated using LPC and sockets
- the stack
- marshalling:
  - pass by value, pass by ref
  - byte-order: big-endian, example
  - network-byte-order (big-endian)
  - floating-point
  - nested structures, complex data structures
  - typing: implicit vs explicit, JSON, XML
- compilation process
- finding a server, registration

## How it’s different from a local procedure call

- potential failures
- semantics
  - goal: run exactly once
  - at least once: good for idempotent: time of day, math, read
  - at most once: modify file
- performance
  - inefficiencies with waiting->asynchronous RPC
  - overhead: be thousands of times slower

## Examples

- [using Go's RPC package](https://golang.org/pkg/net/rpc/)
- [RPC implementation in Go](http://nil.csail.mit.edu/6.824/2015/notes/l-rpc.go)
- Popular RPC in other languages
  - XML RPC
  - Java RMI
  - Sun RPC




[&uarr; back to the top](#schedule)

---

# Time

## Synchronizing clocks

Measuring time

- rotation of the earth
- atomic clocks: based on transitions in Cesium-133
- UTC: available via radio signal 0.1-10ms, telephone line, satellite (GPS) 1 microsec
- computer clocks: crystal oscillation counters tat

Terminology

- time: C(t) = t for perfect clock
- frequency: C'(t) rate t which clock progresses
- offset: C(t) - t at a particular time, C_a(t) - C_b(t) relative offset
- skew: diff in frequencies of the clock relative to perfect clock
- drift (rate): second derivative
  - usually 10e-6 sec/sec
  - high precision clocks: 10e-7 to 10e-8 sec/sec
- graph: relationship between fast and slow clocks
  - 10e-6 --> 1 ms ~ 17 min

Why synchronize clocks in a distributed system?

- keeping track of latest update on a file: example: make tool checks timestamp of last change on object and source files
- trading systems (high frequency trading)
- logging and recovery: getting time information about other processes is crucial in designing a fault-tolerant system

The formal synchronization problem

- all clocks within a distributed system must have skew within D of each other
- constraints
  - don't want time to set clock back
  - don't want to jump forward too much

Solution 1: Christian's algorithm

- external synchronization: sync to authoritative source
- algorithm
- example

Solution 2: Berkeley algorithm

- goal: internal sync: syn a distributed system of clocks so all have skew within constant bound
- reference: The accuracy of the clock synchronization achieved by TEMPO in Berkeley UNIX 4.3BSD, R Gusella and S Zatti, 1989
- idea: master slave architecture, master periodically polls slaves for time differences and sends corrections
- robustness mechanism: averages time of non-faulty servers, new master elected if current fails
  - assumes: small transmission delay (no byzantine fault)

Solution 3: NTP

- what: one of the oldest IP protocols
- goals: reliably sync to UTC via Internet (packet switched, variable latencies)
- idea: multi layer (strata) client-server architecture, based on UDP
- robustness mechanism: higher strata servers can be demoted to lower strata if failing
- modes:
  - multicast: periodic multicast to network, assumes small transmission delay (high speed LANs), low accuracy
  - procedure-call: similar to Christian's protocol, use when high accuracy needed
  - symmetric: use when high-accuracy needed
- security issues

## Logical clocks

- set of events that are partially ordered, together with clock function that is partially ordered
- partial order captures "happens before" causality
- motivation: causality between events if fundamental to design and analysis of parallel and distributed computing and OS
  - dependency of events
  - progress of computation
  - distributed algorithms
- can use global time. logical time is sufficient

Lamport timestamps (1978)

- satisfies clock consistency condition: e -> f => C(e) < C(f)
- example

Vector clocks

- example
- satisfies strong consistency: e -> f iff C(e) < C(f)
- actual implementation
  - Dynamo - Amazon's KVS
  - Voldemort - LinkedIn
  - Riak - NoSQL
- applications
  - version control
  - snapshot of distributed systems
- use when need to detect merge conflicts and merge conflicts are easy to handle
  - by having user resolve the conflict (git)
  - using last-write wins, but may be bad idea due to loss of data
  - ex: web shopping cart: take union of items in conflicting carts
- limitations of vector clocks
  - overhead linear in number of total users: solution is to prune the list, at the expense of detecting false merge conflicts
  - http://basho.com/posts/technical/why-vector-clocks-are-hard/
  - Cassandra


[&uarr; back to the top](#schedule)

---

Last time: crucial aspect of coordinated work: achieving global state  
Today: two other aspects of coordinated work: reservation of shared resources and selecting a coordinator

# Mutual exclusion

Solution 1: Token ring

Solution 2: Centralized algorithm

- coordinator and normal nodes
- algorithm: request -> OK/request denied/no reply -> release

Solution 3: Decentralized algorithm (Lin et al. 2004) see homework

- algorithm
- analysis of correctness
- example of the analysis
- availability

Solution 4: Distributed algorithm (Ricart and Agrawala 1981)

- based on Lamport clock sync 1978, more efficient
- alg: wait for ok, tie breaking with time stamps.
- many points of failure
- many messages
- much processing
=> not scalable

Comparing the 4 solutions

- number of messages as a function of number of requests
- average time to obtaining the resource

# Leader election

Why? (applications)

- last time: Berkeley algorithm for fault-tolerant clock synchronization
- access to a shared resource controlled by a coordinator that can crash
- super peers in peer-to-peer systems

What? (problem 1)

- given a set of nodes with unique identifiers
- processes can be running or down
- processes can communicate with each other directly via message passing (they form a complete graph)
- processes know everyone else's process number
- design a scheme for the processes to all agree to elect a single process


Solution 1: ring algorithm

- the algorithm: election -> coordinator
- example
- analysis: correctness (what if multiple elections are initiated?), efficiency, quality (waste in bandwidth)
- etymology?

Solution 2: bully algorithm (Garcia-Molina, 1982)

- the algorithm: election -> ok/no-reply -> coordinator
- example
- analysis: correctness (what if multiple elections are initiated?), efficiency
- how long to wait to consider a process to be down?
- etymology?

Unrealistic assumptions of the problem

- reliable network - no dropped messages
- topology of the network does not change - connections between two nodes is permanent
- elected process is chosen at random, not based on merit

Problem: election in a wireless environment

- network topology is a sparse graph, definitely not complete
- each node comes with a suitability score (battery life, reliability, processing power, resource capacities)
- design a scheme for the processes to all agree on the best process to be the leader

Solution (proposed by Vasudevan et al. 2004)

- algorithm: distributed BFS, election -> vote -> broadcast result
- example
- analysis: correctness - multiple ongoing elections
- efficiency (suitable for networks of small diameter)
- variants in presence of network partitions, and nodes joining/leaving

Problem: election in a P2P network

- need to elect multiple super-peers
- super-peers must be well distributed across network
- there must be at least a fixed fraction being elected
- super-peers should be highly available

Solution

- used DHT-based system to randomly assign identifiers
- if want N super-peers, use the top log N bits as mask
- example p & 11100000 --> super-peer

Summary

- looked at synchronization: problem of coordinating the effort of multiple participants
- designing algorithms to
  - synchronize clocks
  - detect conflict between multiple versions of a file
  - control access to a shared resource
  - elect a leader

<!-- - solutions treat failures as a reality, need to be fault-tolerant
- next time: minimize fault-tolerance -->



[&uarr; back to the top](#schedule)

---

# Distributed hash tables

Chord P2P DHT or Tannenbaum 5.2.3

- Last time: choosing super-peers in a P2P network, example of determining a super-peer
- Each entity (node or file, or process) assigned a random m-bit id.
- How do you find a node or file? How is the DHT maintained?
- entity with key k falls under the jurisdiction of node with smallest id >= k ie succ(k)
- naive approach
- finger table approach
  - runtime
- updating
- Comparison: How do you locate a resource on the Internet?

Intro: caching problem

- identify file by location of source
- what if we want to distribute load, by namespace? → problem: load balancing
- identify file by hashing location -> what happens when servers go down?
- need minimal disruption: stable hashing

Stable hashing

- consistent hashing (Consistent hashing and random trees: distributed caching protocols for relieving hot spots on the World Wide Web) 1997
  - Akamai, Chord
  - algorithm
  - expected disruption with n nodes
  - spreading the load when a node goes down
- rendez-vous hashing, 1996
  - algorithm
  - expected disruption
<!--
- CARP, 1998
  - MS, also used by EdgeCast CDN
  - caching http requests
  - algorithm
  - not perfectly stable
- RUSH/CRUSH (designed by Ceph, 2004, 2006)
- weighted Rendez-vous hashing (2014)
  - algorithm
- comparisons
  - Wikipedia
  - http://stackoverflow.com/questions/20790898/consistent-hashing-vs-rendezvous-hrw-hashing-what-are-the-tradeoffs
-->

- locality-sensitive hashing

[&uarr; back to the top](#schedule)

---

# Error detection and correction

- last time: used hash functions to design load balancers
- today: other use for hash functions: fault tolerance

Availability

- https://www.digitalocean.com/features/scaling/
- good?
- hard vs soft errors: DRAM errors, source,
- MTTF, MTTR, MTBF
- example: OS crashes 1 per month, 10min to reboot: 720 h = 43200 min, MTTR = 10 mins, avail = 43200 / 43210 = 0.997
- chart:
  - 90% = 36.5 days/yr = 72 hrs/month = 16.8 hrs/wk
  - 99% = 3.6 d/y = 7.2 h/mont
  - 99.9 = 8.7 hrs/yr
  - 99.99 = 52.56 min/yr
  - 99.999 = 5 m/yr
  - 6 9s = 31 s/yr
  - 7 9s = 3 s/yr
- bathtub curve
  - reliability engineering: infant mortality, burn out/wear out, stable failure period
  - purchasing car
  - disk

Error detection and correction

- today: basic techniques of replication/recovery and failure masking
- next time: specific techniques in file systems
- what to do when there is a failure:
  - nothing, return wrong answer
  - detect, report failure
  - correct, mask failure
- Problem: sending a stream of bits through a wire, how to check that the stream is what was meant to be sent?
- detection technique 1: parity/check bits using XOR
  - example
  - what it can detect: single or odd number of bit flips
  - probability
  - recovery: repeat the process
  - usage: hardware applications where operation can be repeated: PCI buses (connect hardware to computer), CPU cache, RAM memory (9 bits)
- detection technique 2: checksums
  - parity byte/word: break into n words, and xor the words
  - example
  - detects or
  - variant: modular sum and append 2s complement
  - example
  - usage: TCP header
- detection technique 3: CRC
  - cyclic redundancy check
  - example with the math: 10 1110 by 1001
  - CRC-3-1001, G=1001 given D,
  - good for burst errors
  - choice of generator poly G is crucial: want max error-detection capability and min collision probability
  - header of ethernet frame
  - common poly length: 9 bits (CRC-8), 17, 33, 65
- recovery technique error correcting code
  - forward error correction
  - 2-dim parity check
  - replication and voting: eg 3 consec repeats, space
  - retry: eg TCP, need error detection mechanisms, timeout, checksum - tradeoff between efficiency of transmission and reliability
- data integrity not authenticity
  - tradeoff between speed and complexity of computation
  - example of reversing a checksum
- example: making disk reads fault tolerant
  - do nothing
  - detect failure: store checksum for every sector, get both and return error if there is a mismatch
  - correct/mask failure:
    - reread (helps with transient error) if firmware signals error
    - use ECC for bit flips but not block damage
    - RAID: store in multiple places for independence
- tradeoff, basic tension of fault tolerance: cost of failure vs cost of failure masking
  - what level of system to mask
  - replication as general strategy
- what if you have to survive the failure of entire computers, rack, datacenters?
- hierarchy of failure modes:
  - crash stop
  - omission
  - Byzantine

[&uarr; back to the top](#schedule)

---

# RAID

Why use multiple disks?

- performance
- reliability
- capacity

Simplest way of using multiple disks: JBOD

Performance and load-balancing

- static
- dynamic
- striping

Reliability

- backups
- replication
- parity disk
- parity striping

RAID - redundant array of inexpensive/independent disks

- in hardware and software
- taxonomy
- RAID-6

Reliability in numbers

- MTBF of a drive: 136 years
- 200 drives: 0.65 years
- 200 drives in mirrored model
- 50 drives with parity disk

[&uarr; back to the top](#schedule)

---

# Concurrency control

Problem: how to implement concurrent bank transfers in a distributed fashion?

```
transfer(val, i, j):
  if withdraw(val, i):
    deposit(val, j)

withdraw(val, i):
  if bal[i] >= val
    bal[i] -= val
    return true
  return false

deposit(val, j):
  bal[j] += val
```

Database concepts

  - transaction
  - ACID transaction

Solutions on a single server

1. global lock: causes bottleneck
2. one lock per account, wrapping lock around each operation separately: not isolated
3. acquire both locks, implement transfer as usual, release locks: can deadlock

Coping with deadlocks

1. timeouts: but these can lead to livelocks
2. build wait-for graph (nodes are processes) and break the cycles
3. order the nodes of the graph

The 2 phases of a 2-phase lock:

1. acquire the locks
2. release the locks

Solution viewed as a 2-phase commit:

1. preparation: acquire locks, decide on list of update operations
2. action: commit or abort

Solution in a distributed system

- 2-phase commit, but with messages
- client/coordinator sends out canCommit? messages
- servers respond with voteCommit or voteAbort
- client publishes result of election
- deadlocks can still occur, use timeouts


[&uarr; back to the top](#schedule)

---

# Logging and crash recovery

Problem

- to make transactions reliable, implement atomicity and durability
- failure model: disk is non-volatile, memory is volatile, machine can crash
- what happens if use only memory or disk?
- challenges with disk: slow and handling crashes when getting data to disk is challenging

Very simplified view of databases

- data stored on permanent disk
- data divided up into fixed-size units called pages
- cached pages: copies of pages may be stored in memory for faster read/write ops
- dirty page: a cached page that is different from the original on disk

Solution 1: shadow writing

- the idea
- what happens on abort
- what happens on commit
- suffers from recursive updates
- tradeoff between performance (due to having less overhead) and latency with commits

Solution 2: write-ahead logging

- the idea
- reference: ARIES (Mohan et al., 1992)
- structure of a log file: 3 basic types of log entries
    - Begin LSN, TID
    - End LSN, TID, PrevLSN
    - Update LSN, TID, PrevLSN, pageID, offset, oldval, newval
- additional structures stored in memory
    - transaction table
    - dirty page table
- what happens on commit
- what happens on abort
- what happens in recovery
    - analysis
    - recovery
    - undo
    - other type of log entry: CLR LSN, TID, PrevLSN, pageID, offset, newval, UndoNextLSN
- checkpoints
- 2PC integration


[&uarr; back to the top](#schedule)

---

# Distributed file systems

Goal: have a consistent namespace for files across computer and let authorized users access files on any computer

Interface

- file operations: open, read, write, close
- directory operations: create/rename/delete file, make/rename/delete directory

Other goals: interface, fault tolerance, scalability, concurrency, security

Design approach

- prioritized list of goals
- workload-oriented
- NFS/GFS: user-oriented workload
  - privately owned files
  - low concurrency
  - sequential access is common
  - more reads than writes
- GFS: big programs, big data

Naive design

- use RPC for every operation to server
- same behavior as if program was running on the same machine
- but client latency, server overload
- solution: caching data and level of indirection
- what to cache? how to handle consistency?

Sun NFS

- cache file block, directory metadata in RAM on clients and servers
- advantage: no network traffic if open/read/write/close done locally
- failures: server crashes, lost messages, client crashes
- flush on close: close does not return until bytes safely stored
- weak consistency: flush on close + periodically check updates
- system can be inconsistent for a few seconds
- design choices: client can choose close-to-open consistency
- guarantee that when a file is closed, subsequent opens will see the change
- client flushes all cached changes to server when it closes the file, as opposed to time-bounded consistency
- requires hefty server resources to scale, sensitive to network latency

AFS

- more agressive caching, caching to disk
- prefetching, ie whole file, faster for subsequent operations
- close-to-open consistency
- cache invalidation callbacks: clients register with server

GFS

- big data workload: huge files, mostly append, high concurrency, huge bandwidth, design for failures (failure is the norm rather the exception)
- applications: search, ads, web analytics, Map-Reduce
- interface: non-POSIX, append (atomicity matters, order does not)
- architecture: master (metadata, monitoring of servers), many chunk (data) servers (store chunks and serve), chunks (large, ~64MB as opposed to NFS, decrease server load)
- master stores file namespace persistently, chunk and location of chunk replicas non-persistently for scalability, can be recovered by polling chunk servers on startup, monitors chunk servers with heartbeats
- consistency: designing for throughput, not semantics. Use primary replica to define update order. An any time, need exactly 1 primary per chunk. Use leases to select primary. Leases can be granted by master, refreshed, and given to another replica. => at least once atomically.
- read process
- write process

[&uarr; back to the top](#schedule)

---

# Sequential consistency

Recall

- NFS: close-to-open semantics to notify
- AFS: close-to-open semantics with periodic refresh
- GFS: atomic at-least-once record append

Tradeoff

- concurrency/performance/scalability
- semantics/programming friendliness

Consistency

- informally: meaning of concurrent read/write operations on shared, possibly replicated, state
- formally: set of allowed histories of oeprations = runtime order
- if program goes through the set of allowed operations, execution said to be consistent
- real systems should satisfy "intuitively correct" a consistency model to have predictable programs.

Strict consistency

- example (we expect the behavior to be predictable)
- timestamps with global clock
- rule: a read to a particular location always returns the value of the last write to that location
- captures the notion of a register
- in a distributed system, may be realized via distributed mutual exclusion, but is a serious bottleneck

Sequential consistency

- rule: there exists a total ordering of operations such that
  - each machine's operations appear in order
  - all machines see the results according to the total ordering
- in other words, the history can be explained by a sequential ordering of the operations
- example
- comes up when an update is only seen after an arbitrary delay, but order of operations is observered to be the same at all replicas
- example: Facebook updates migh be received at different times by different people, depending on their location, as updates must make it through several layers of caches
- forgoing of the notion of real time
- one way to to achieve sequential consistency in a distributed system: each processor sends update requests in order of specified by the program and blocks until update takes effect. A centralized service manages the shared location, applying update requests in FIFO order.

The CAP theorem

- statement: "given consistency, availability, partition tolerance, any given system may guarantee at most two of the properties"
- consistency: linearizable register: each operation appears to take effect atomically at some point between its invocation and return
- availability: every request to a non-failing node must complete successfully, nodes cannot defer response until after network heals
- partition tolerance: network partitions can happen, the system must keep working under these conditions


[&uarr; back to the top](#schedule)

---

# Causal and eventual consistency

Strong/strict consistency: after update completes, any subsequent access returns updated value. Achieved through mutual exclusion.

Weak consistency: system not guaranteed to return updated value after update is complete. A number of conditions must be satisfied.

Eventual consistency: specific form of weak consistency. Guarantee that if no new updates made to object, eventually all accesses will return last updated value. If no failure occurs, max size of inconsistency window is a function of communication delays, load on system and number of replicas.

DNS

* classic example of eventual consistency.
* single naming authority per domain
* only on e allowed to update (no write-write conflict)
* update according to a configured pattern
* time-controlled caches

Causal consistency: operations from the same process with independent causal chains can execute in relative order. Example: comments from a blog post.

Read-your-writes: after a process has updated a value always sees the new value, not any older ones.

Session consistency: process accesses storage system in context of a session.

Monotonic write: serialized writes by the same process, otherwise hard to program

Monotonic read: if a process sees a particular value for an object subsequent access will not return a previous value.

Sequential vs eventual

* sequential: pessimistic concurrency handling. Decides on update order as they are executed.
* eventual: optimistic concurrency handling. Updates happen, worry about order later. May raise conflict. Example: Git, file synchronization acroos devices.

[&uarr; back to the top](#schedule)

---

# Strong eventual consistency and CRDTs

What are CRDTs?

- update operations are commutative, associatives and idempotent
- consequence: trivial to handle duplicate and dropped messages

CRDT types

- flags ie booleans
- counters: G-, PN-
- sets: G-, 2P-, OR
- registers: single value, last-write wins
- maps: key with CRDT value, CRDT maps can be nested
- graphs: directed, monotone DAG, edit graphs
- documents: eg treedoc, for collaborative editing, large storage requirement (10x)

### G-counter

Example

Details

- G-counter is an increment-only counter
- PN-counter: use two G-counters to implement general counter
- implement as map
- merge operation takes the "max"

### G-set

Example

Limitations

- G-set can only add, not remove
- 2P-set, analog of PN-counter, can only add and remove once, cannot be added again later
- alternative: use "tombstones" to add/remove/readd to a set multiple times.

### Strong eventual consistency

Strong consistency

- determine order as updates occur (linearizable, sequential consistency)
- thus avoids conflict
- consensus (next time) is a synchronization bottleneck and does not scale up very well as need a majority of nodes to be up

Eventual consistency

- locally update and propagate changes
- conflicts occur: reconciliation/arbitration can be complicated
- consensus moved to background, so can still make progress if network is partitioned

Strong eventual consistency

- locally update and propagte changes
- no conflicts: unique/deterministic outcome of concurrent updates
- no consensus
- can withstand arbitrary number of failures (need at least one node up)
- solves CAP theorem for a restricted class of applications

Formal definition of eventual consistency

- eventual delivery: any operation executed at a correct node is eventually executed  at all replicas
- termination: all update executions will eventually terminate
- convergence: all replicas will eventually reach the same state
- note: def does not preclude the state of replicas from diverging, rolling back, reconciling, diverginging again, and son on.

Formal definition of strong eventual consistency

- redefine convergence: as soon as all updates are received at a node, reaches the same state as others

Result

- if updates are state-based:
  - send state to 1 replica
  - update is local to the source node (do some computation)
  - need to specify how to do updates and merges
- the data type forms a semi-lattice (structure in which the notion of maximum of 2 elements makes sense),
- updates are always increasing, and
- merges are resolved by taking the maximum
- then replicas converge to the maximum of the last two values

(An analogous result exists for operation-based updates.)

### Observed-remove set

- set semantics: add and remove
- multiple valid ways of resolving conflicts (depending on what makes sense for a particular appliation)
  - user decides (error state)
  - timestamp (last write wins)
  - add wins (most intuitive semantics, eg cart)
  - remove wins

Example of observed-remove set with add-wins rule (Idea is to internally keep track of multiple copies of a element added at different nodes)

### Summary

- need to read research literature to use the libraries
- heavily test implementation: 100% code coverage does not mean you've tested all possible interleavings
- restricted set of operations, may need to make the application or problem fit the tool

[&uarr; back to the top](#schedule)

---

# 2PC and 3PC

Consensus problem

- safety, ie correctness
- liveness, ie must eventually reach a decision, even in the presence of failures
- failure models

Applications

- strong consistency
- atomicity
- synchronization
- leader election
- distributed mutual exclusion

Timeline

- 1979: 2PC, Gray
- 1981: 3PC, Stonebraker
- 1985: Impossibility result, Fischer, Lynch, and Paterson
- 1998: Paxos, Lamport

### 2PC

The protocol (recall from previous discussion) and recovery mechanism

2PC is a blocking protocol

- example with 2-node failure
- example with single node failure

2PC is safe but not live

### 3PC

Idea: 2PC's problem stems from allowing commits without all parties knowing of the decision. Separate these into two phases.

The protocol and recovery mechanism

3PC solves the blocking problem

- go over 2PC blocking example

3PC is not safe

- example handling time outs and network partitions

### FLP impossibility result

- statement: "It is impossible for a set of processors in a asynchronous system to agree on a binary value, even if only a single processor is subject to an unannounced failure."
- 2PC and 3PC in relation to impossibility result

[&uarr; back to the top](#schedule)

---

# Paxos

Problem of consensus

- safety: only one of the proposed values may be chosen, only a single value may be chosen
- liveness

Failure model

- communication: messages
- nodes: arbitrary speed, fail-stop or fail-recover
- network: asynchronous, messages may be duplicated or lost but not corrupted

Idea of Paxos

- agreement by majority
- why this is a good idea

Algorithm

Details

- set of proposed acceptors and those who accept dont have to be the same
- protocol requires unique ID to be issued for each proposal in the system (not just per node)
- optimization: when decision reached, send round of notification messages
- scenario when a node comes back up after decision reached

Discussion

- protocol may fail if the majority of nodes have crashed
- problem: algorithm may go on indefinitely with 2 proposer nodes one-upping each other and alternating the 2 phases, solution is to only allow one proposer at a time (using a leader election algorithm)
- Paxos in relation to FLP impossibility result

[&uarr; back to the top](#schedule)

---

# The Chubby lock service

Responsibilities of a distributed lock manager

- file locking
- coordination of disk access

Chubby

- coarse-grained synchronization of activities within Google's distributed systems (lock held for hours/days rather than seconds)
- primary internal naming service
- common rendez-vous mechanism for systems such as Map-Reduce
- GFS, BigTable use it to select a primary from redundant replicas
- standard repository for files that require high availability, eg accees control lists

Architecture diagram

Chubby cell

- 5 replicas on different racks to reduce likelihood of correlated failures

Electing a master

- by majority
- promise won't vote for another master
- takes about 4-6s, 30s max

Locating the master

- Chubby client queries DNS for a Chubby cell
- DNS refer client to one of the replicas
- client queries replicas
- replica refers client to master

File system interface:

- naming structure: ls/chubby-cell-name/local-chubby-cell-namespace
- files, directories, handles
- access control lists
- meta data, sequence numbers

Differences from UNIX file systems:

- no moving to different directory (ie function not exposed)
- no notion of directory modification time
- no path dependent permissions semantics

Files as locks

- reader-writer
- advisory rather than mandatory
  - mandatory is more work to implement in a meaningful way: how to enforce locking a remote application resource in addition to file?
  - advisory useful for debugging and administrative purposes
- problem with advisory lock: race condition on the locked resource
- solution: lock delay before reassigning lock from unresponsive nodes

Events

- clients can subscribe to events
- file content changed
- child node add/modified/deleted: useful for mirroring
- chubby master failed over: use to notify clients to rescan data because events may be lost
- handle becomes invalid

API

- open(node-name): returns a handle (all other ops use the handle)
- close
- get/set content
- delete node
- aquire/try-acquire/release lock
- get/set/check sequence number
- read/write/change ACL
- events
- lock-delay

Example: electing a primary

Cache (server-side)

- strict consistency
- lease-based with invalation on write
- write-through

Scaling mechanisms

- more Chubby cells
- increase Keep Alive lease time from 12s to 60s
- client side caching
- proxies to handle dominant (93%) traffic of Keep Alive
- partition namespace

Study of use as DNS

Abusive uses

[&uarr; back to the top](#schedule)

---

# Security and cryptography

Internet security weaknesses

- denial of service attacks
- DNS poisoning
- ...

Secure channel

- authentication
- integrity
- confidentiality
- availability (won't focus on that today)

Symmetric-key encryption

- one-time pad
- stream algorithms
- block ciphers
- achieving authentication, integrity and confidentiality using symmetric key encryption

Public-key encryption

- achieving authentication, integrity and confidentiality using public key encryption

Key distribution

- key distribution centers
- Diffie-Hellman

[&uarr; back to the top](#schedule)

---

# MapReduce and Pregel

### Map-Reduce

Etymology: from functional programming

* map: (function f, list (a, b, c, ...)) -> (f(a), f(b), f(c), ...)
* reduce: (binary function *, list (a, b, c, ...)) -> (((a * b) * c)....

Map-Reduce functions in Hadoop

* map: (key, value) -> (key, value)
* reduce: (key, values) -> merged value

Need to be able to group values of the same key, use of consistent hashinng

Example: word counter

Example: reverse weblink graph

Example: word frequency

Example: sort by value

Implementation details

* input/output data stored in persistent storage like GFS or HDFS
* barrier synchronization
* managing resources (example from YARN scheduler)
  * container = unit of computation resource = CPU core + some memory
  * 3 roles: resource manager, node manager, application manager

Fault-tolerance

* detecting worker node failures
  * node manager reports heartbeats to resource manager
  * node manager keeps track of jobs running at node
  * app manager regularly saves work

* detecting master node failures

### Graph processing

Examples of graphs: Internet, WWW, social, biology

Graph algorithms

* expressed in terms of vertices and adjacent vertices and incident edges
* shortest path
* is there a path between two given nodes?
* find clusters of connected vertices (friends)
* PageRank
* matching (ads, online dating)

Processing steps (outline)

Example: PageRank

Example: Shortest Path

Why not use MapReduce?

Pregel

* distributed graph processing
* why? speed, fault-tolerance
* assigning keys to nodes: consistent hashing, and locality based
* implementation: master and worker nodes

Pregel execution

1. master sends workers workload
2. workers fetch input data from persistent storage (eg GFS)
3. (repeat the following)
4. master signals to workers beginning of iteration
5. worker receives messsages, updates local value, sends messages    

Pregel API

* edges can have values too
* topology may change
* aggregators
* fault tolerance: servers save work locally, ping (checkpoint), master can reassign work

Bulk synchronization programming model (Valiant 1980s)

[&uarr; back to the top](#schedule)

---

# Bitcoin

Bitcoin is a peer-to-peer digital currency.

Problem: how to prevent forging?

Solution: use digital signature to sign letter of intent, eg "I, Alice, give Bob one bitcoin," signed by Alice.

Problem: this solves the problem of forging the letter, but not replay attacks by a 3rd party or Alice double-spending.

Solution: use a central bank to keep track of everyone's balance, issuing serialization numbers for transactions or the bitcoins themselves and keep track of all transactions in a public ledger. (Example scenario)

Problem: must trust a central authority.

Solution: make everyone using the currency take on the bank's responsibilities. The public ledger is a complete record of all transactions, called the block chain. Everyone has a copy of it. (Example scenario)

Problem: if everyone only checks against their own copy of the block chain in order to accept money from Alice, Alice can still double-spend. What should be the protocol for validating a transaction now the bank is decentralized, ie., now that the block-chain is replicated? And what kind of consistency should we use?

Solution: to validate a transaction, maybe validate against a certain number of other people's block chains?

Problem: to double-spend, Alice could create multiple accounts in order to validate an invalid transaction.

Solution: ok, then make the process of validating a transaction computationally expensive by requiring the solution of to a puzzle (called proof of work) with the validation. Finding the solution must be computationally expensive, but verifying must not so others can validate your work. (example scenario). See project 2 Part B for details of puzzle. The difficulty of a computation can be controlled.

Problem: why would anybody want to do this work?

Solution: reward those who validate transactions by giving newly created currency or via transactions fees. Currently, 25 newly minted bitcoins awarded for every validated block of transactions. Reward is halved every 210,000 validated blocks. Eventually, will no longer be paid in new bitcoins, but in transaction fees. Those who validate transactions are called miners.

Problem: still did not address consistency. How is order determined?

Solution: New blocks of validated transactions have a pointer to last validated block on the block chain, creating a DAG of alternative histories of validated transactions (Forks can happen if different miners successfully create a new block at around the same time). The rule is for all miners to work on the longest fork where length is determined by total difficulty for producing that chain. A transaction is considered confirmed if it is part of the longest fork and at least 5 blocks follow it in the longest fork.

Security: Alice tries to get Bob and Charlie to accept the same bitcoin

* even if Alice successfully creates a block with both transactions in it, and announces it, others will reject the block as invalid.
* if Alice broadcasts one transaction to one group of miners and the other to another group of miners, either both transactions successfully end up in different blocks, but in different forks, or one ends up in a block that is broadcast to the other miners, and the other transaction becomes invalid. Either way, there is only one possible valid transaction.
* Alice tries to pay herself by creating a new history, needs to have 50% of the total computational power, and to be very lucky (prob 10^{12} of getting ahead.)

Problem: who serializes the bitcoins?

Solution: don't need to. Each transaction consists of an input and multiple outputs. Inputs point to an output of a previous transaction (source of fund) and outputs point to one or more recipient (specifically a hash of the recipient's public key), and the paying party (mechanism for making change). This, together with the ledger, allows for all funds to be tracked.

Open questions

* anonymity
* security
* getting rich

[&uarr; back to the top](#schedule)

---

# Multicast and membership

### The multicast problem

- node wants to communicate a piece of info to everyone in a group of nodes (vs other
- want reliability, scalable (overhead per node small)
- eg IP multicast, in switches and routers, but may not be turned on
- prefer app level multicast

Solution 1: centralized approach

- centralized: use tcp/udp to each
- central pt of failure, overhead

Solution 2: Tree-based approach

- spanning tree for dissemination
- eg IPmulticast, SRM, RMTP, TRAM, TMTP
- if tree balanced, latency is order log n
- node failure? use acks/ naks to repair multicasts not received
- pb: msg implosion, overwhelm initial broadcaster if major failure
- SRM (scalable reliable multicast), send NAKs at rand delays + exponential backoff
- RMTP: aks to designated receivers for retransmission
- still not very efficient, linear nb of ack/nak messages

Solution 3: Gossip protocol

- periodically transmit to b (fanout) rand targets w/ repl
- target is said to be infected, does the same
- requires more msgs than tree-based
- no sync needed
- push-pull variant: pull, but also include recent msgs with it
- variants: priority based, send rand subset of msgs

Variant 1: push style
- after log(n) rounds, about (n+1) - 1/ n^{cb-2} infected nodes
- with 50% packet loss, replace b by b/2 → to achieve same reliability as 0% packet loss, take 2x as many rounds
- with 50% node failure: replace n by n/2, b by b/2
- prob of epidemic dying: possible but unlikely esp with a few nodes infected.

Variant 2: pull style
- poll rand nodes periodically
- assuming n nodes already infected, takes O(log log n) rounds of pull-style to infect everyone

Variant 3: push-then-pull
- push for log (n) rounds + pull for log log n rounds

Variant: Topology-aware gossip

- pb: load of O(n) to go across router
- sol: w/ prob 1/ni (ni = size of subnet) choose node outside subnet
- time to infect everyone: O(logn) + O(1) + O(log n)

### Membership

Problem solved by a membership protocol

- gossip, overlay, DHT's
- maintain join, leave, dissemination and failure detection

Desirable properties of failure detectors

- completeness: each failure is detected by a non-faulty process, eventually, no time bound
- accuracy: no false positives detected
  - impossible over faulty network (Chandra and Toueg) equivalent to consensus
  - real failure detectors: compl guaranteed, partial guarantee
  - why? if mistaken, ask to leave and rejoin
- speed:  time from failure to detection to be small
- scale: equal load, low message load, no bottlenecks
- all this in spite of arbitrary simultaneous failures

Centralized heartbeating

- heartbeat: mesg with seq nb incremented locally

Ring heartbeating

- undetected failures when a guy’s 2 neighbors are

All-to-all hearbeating

- even load
- more false positives for a node with high-latency

Gossip-style heartbeating

- maintain membership lists: local tables w/ 3 cols: addr, heatbeat counter, local time
- gossip by sending membership list
- pb: member not going away. Sol: delete only after timeout time
- analysis
  - t(gossip), t(fail), t(cleanup), bandwidth
  - t(gossip) dec → bandwidth inc
  - 1 hearbeat takes O(log n) to propagate
  - N simultaneous heartbeats take O(log n) to propagate if unlimited bandwidth, O(n log n) if 1 allowed at a time
  - if T(fail), t(cleanup) inc, false positives go down
  - tradeoff btw false positives and detection rate

SWIM failure detector

- the protocol
- Time to first detection is constant
  - prob(being pinged in T(ping)) = 1 - (1 - 1/n)^{n-1} about 1 - e^{-1}
  - E[T] =  T(ping) / that prob
  - can bound deterministically: go through list, permute, go through list: worst case is 2n - 1, O(log(n)) whp
- process load is constant
- false positive rate:
  - tunable via k,
  - falls exponentially as load inc
- to use SWIM as part of a membership protocol, piggyback ping messages with membership list information

[&uarr; back to the top](#schedule)

---

# Distributed snapshots

Applications

- deadlock detection
- failure recovery using periodic checkpoints to restore last consistent global state
- debugging by restoring a system to a consistent global state

Running example

Model

- no global physical clock
- messages delivered reliably but with arbitrary delays
- 2 events associated with every message: send and receive
- state of sender changes on send, and state of receiver changes on receive

Formal definition

- nodes/processes and channels have states
- global state: assignment of states to nodes and channels
- global consistent state: for any message m that node i sends to node j:
    1. if i's snapshot reflects i having sent m, then either m should be in channel i->j's snapshot or j's snapshot should reflect having received m.
    2. if i's snapshot does not reflect i having sent m, then m must not be in i->j's snapshot nor should j's snapshot reflect having received m.

Question: how can a channel's state be recorded?

Chandy-Lamport algorithm for FIFO channels

Example

Proof of correctness of the algorithm

Implementation detail: collecting a global snapshot

- each node sends snapshot to initiator, or
- snapshot information is passed downstream, piggybacking markers

Lai-Yang algorithm for non-FIFO channels


[&uarr; back to the top](#schedule)
