#ifndef __LWIPOPTS_H__
#define __LWIPOPTS_H__

#define NO_SYS                      1 
#define LWIP_TCP                    1
#define LWIP_UDP                    1
#define LWIP_DHCP                   1
#define SYS_LIGHTWEIGHT_PROT        0  
#define MEM_LIBC_MALLOC             1
#define MEM_USE_POOLS               0
#define MEMP_MEM_MALLOC             0
#define MEM_ALIGNMENT               8 
#define MEM_SIZE                    (8 * 1024)
#define LWIP_ARP                    1 
#define LWIP_IPV4                   1
#define IP_DEFAULT_TTL              255
#define LWIP_ICMP                   0
#define LWIP_BROADCAST_PING         0
#define LWIP_MULTICAST_PING         0
#define LWIP_RAW                    1
// MSS = MTU - 40 (standard TCP/IP overhead)
#define TCP_MSS                     1460
#define TCP_SND_BUF                 (4 * TCP_MSS)
#define TCP_LISTEN_BACKLOG          1
#define LWIP_NETCONN                0 
#define LWIP_SOCKET                 0
#define LWIP_STATS_DISPLAY          1 

#define MEM_STATS                   1

#define LWIP_DEBUG                  1

#define LWIP_DEBUG_TIMERNAMES       0
#define ETHARP_DEBUG                LWIP_DBG_OFF
#define NETIF_DEBUG                 LWIP_DBG_OFF
#define PBUF_DEBUG                  LWIP_DBG_OFF
#define API_LIB_DEBUG               LWIP_DBG_OFF
#define API_MSG_DEBUG               LWIP_DBG_OFF
#define SOCKETS_DEBUG               LWIP_DBG_OFF
#define ICMP_DEBUG                  LWIP_DBG_OFF
#define INET_DEBUG                  LWIP_DBG_OFF
#define IP_DEBUG                    LWIP_DBG_OFF
#define IP_REASS_DEBUG              LWIP_DBG_OFF
#define RAW_DEBUG                   LWIP_DBG_OFF
#define MEM_DEBUG                   LWIP_DBG_OFF
#define MEMP_DEBUG                  LWIP_DBG_OFF
#define SYS_DEBUG                   LWIP_DBG_OFF
#define TCP_DEBUG                   LWIP_DBG_OFF
#define TCP_INPUT_DEBUG             LWIP_DBG_OFF
#define TCP_OUTPUT_DEBUG            LWIP_DBG_OFF
#define TCP_RTO_DEBUG               LWIP_DBG_OFF
#define TCP_CWND_DEBUG              LWIP_DBG_OFF
#define TCP_WND_DEBUG               LWIP_DBG_OFF
#define TCP_FR_DEBUG                LWIP_DBG_OFF
#define TCP_QLEN_DEBUG              LWIP_DBG_OFF
#define TCP_RST_DEBUG               LWIP_DBG_OFF
#define UDP_DEBUG                   LWIP_DBG_OFF
#define TCPIP_DEBUG                 LWIP_DBG_OFF
#define PPP_DEBUG                   LWIP_DBG_OFF
#define SLIP_DEBUG                  LWIP_DBG_OFF
#define DHCP_DEBUG                  LWIP_DBG_OFF
#define TIMERS_DEBUG                LWIP_DBG_OFF

/* Ethernet frame padding before the Ethernet Header 
* Aligned to 32-bit (14 + 2)
*/
#define ETH_PAD_SIZE 0

#endif /* __LWIPOPTS_H__ */
