#ifndef UTILS_H
#define UTILS_H

#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <time.h>

#define REFERENCE_PARAM(TYPE, NAME) TYPE *NAME
#define NULLABLE_RESOURCE(TYPE, NAME) TYPE NAME //could also be pointer...?
#define mac_tx send

typedef clock_t timer;
typedef int port; //NOT YET IMPLEMENTED AS GPIO + INTERRUPTS
typedef int chanend; //file descriptor
typedef char ethernet_hdr_t; //buffer



#endif//XCLIB_H