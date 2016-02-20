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
W 2/17  |  Coordination: [Mutual exclusion](#mutual-exclusion)<br/>Coordination: [Leader election](#leader-election)  | 6.3, 6.5 | [Homework 2](#homework 2) due 2/29 at 11:59pm on [Sakai](https://sakai.claremont.edu)
M 2/22  | |
W 2/24  | |
M 2/29  | |
W 3/2   | |
M 3/7   | |  
W 3/9   | **Exam 1**|
        | _Spring recess_ |
M 3/21  |  |
W 3/23  |  |
M 3/28  |  |
W 3/30  |  |
M 4/4   |  |
W 4/6   |  |
M 4/11  |  |
W 4/13  |  |
M 4/18  |  |
W 4/20  |  |
M 4/25  |  |
W 4/27  |  |
M 5/2   |**Exam 2** |
W 5/4   |**Project presentations** |
        | _Finals week: no meeting_ |

<!--
skipped
distributed file systems

M 2/29  |  Fault tolerance   |  8.5
W 3/2   |  Concurrency control  |  8.5
M 3/7   |  RAID  |  [RAID chapter](http://pages.cs.wisc.edu/~remzi/OSTEP/file-raid.pdf)<br/> (from the online textbook [Operating Systems: Three Easy Pieces](http://pages.cs.wisc.edu/~remzi/OSTEP/))
W 3/9   |  Logging and crash recovery  | 8.6
        | _Spring recess_ |
M 3/21  |  Consistent hashing  |  
W 3/23  |  Replication 1  |
M 3/28  |  Replication 2  |
W 3/30  |**Exam 2** |
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
