---
layout: course
homepage: true
coursetitle: Distributed Systems
coursesubtitle: CSCI189A PO-01 &mdash; Spring 2016 &mdash; Pomona College
courseid: ds
title: Schedule

---

_This schedule is tentative and subject to change during the semester._

Date|Lecture|Reading
----|-------|-------
W 1/20  |  [Introduction to distributed systems](#introduction-to-distributed-systems) | 1.1, 1.2
<<<<<<< HEAD
M 1/25  |  [Internet 1](#internet-1)  | 2.1, [Design philosophy of the Internet](http://dl.acm.org/citation.cfm?id=52336)
W 1/27  |  Internet 2  |
M 2/1   |  Introduction to Go |
W 2/3   |  Concurrency in Go  | [Concurrency notes](http://www.andrew.cmu.edu/course/15-440-kesden/index/lecture_index.html) by Kesden
M 2/8   |  Remote procedure calls  |  4.1, 4.2
W 2/10  |  DFS 1 |
M 2/15  |  DFS 2 |
W 2/17  |  Time  | 6.1, 6.2
M 2/22  |**Exam 1** |
W 2/24  |  Mutual exclusion  |  6.3
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

[&uarr; back to the top](#Schedule)

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
