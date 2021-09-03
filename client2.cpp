
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#include <netinet/tcp.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <string.h>
#include <algorithm>
#include <set>
#include <vector>
#include <signal.h>
#include <iostream>
#include <sstream>
#include <thread>

#ifndef SOCK_NONBLOCK
#include <fcntl.h>
#endif



