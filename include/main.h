#include <packet_eth.h>
#include <packet_ip.h>
#include <packet_tcp.h>


#if 0
struct in_addr {
	in_addr_t s_addr;
};
#endif


/*
 * packet struct data
 */
struct packet {
	struct packet_ethhdr eth;
	struct packet_ip ip;
	struct packet_tcp tcp;
};

/*
 *=============================================================================
 */
#if 0
struct ifmap 
{
	unsigned long mem_start;
	unsigned long mem_end;
	unsigned short base_addr;
	unsigned char irq;
	unsigned char dma;
	unsigned char port;
	/* 3 bytes spare */
};

typedef struct {
	unsigned short encoding;
	unsigned short parity;
} raw_hdlc_proto;

typedef struct {
	unsigned int interval;
	unsigned int timeout;
} cisco_proto;

typedef struct {
	unsigned int t391;
	unsigned int t392;
	unsigned int n391;
	unsigned int n392;
	unsigned int n393;
	unsigned short lmi;
	unsigned short dce;	/* 1 for DCE (network side) operation */
} fr_proto;

typedef struct {
	unsigned int dlci;
} fr_proto_pvc;			/* for creating/deleting FR PVCs */

#define IFNAMSIZ 16
typedef struct {
	unsigned int dlci;
	char master[IFNAMSIZ];	/* Name of master FRAD device */
}fr_proto_pvc_info;		/* for returning PVC information only */

typedef struct {
	unsigned int clock_rate;/* bits per second */
	unsigned int clock_type;/* internal, external, TX-internal etc. */
	unsigned short loopback;
} sync_serial_settings;		/* V.35, V.24, X.21 */

typedef struct {
	unsigned int clock_rate; /* bits per second */
	unsigned int clock_type; /* internal, external, TX-internal etc. */
	unsigned short loopback;
	unsigned int slot_map;
} te1_settings;                  /* T1, E1 */

struct if_settings
{
	unsigned int type;      /* Type of physical device or protocol */
	unsigned int size;      /* Size of the data allocated by the caller */
	union {
		/* {atm/eth/dsl}_settings anyone ? */
		raw_hdlc_proto   *raw_hdlc;
		cisco_proto      *cisco;
		fr_proto         *fr;
		fr_proto_pvc     *fr_pvc;
		fr_proto_pvc_info *fr_pvc_info;

		/* interface settings */
		sync_serial_settings *sync;
		te1_settings     *te1;
	} ifs_ifsu;
};

#define IFNAMSIZ        16
struct ifreq 
{
#define IFHWADDRLEN     6
	union
	{
		char ifrn_name[IFNAMSIZ];	/* if name, e.g. "en0" */
	} ifr_ifrn;

	union {
		struct  sockaddr ifru_addr;
		struct  sockaddr ifru_dstaddr;
		struct  sockaddr ifru_broadaddr;
		struct  sockaddr ifru_netmask;
		struct  sockaddr ifru_hwaddr;
		short   ifru_flags;
		int     ifru_ivalue;
		int     ifru_mtu;
		struct  ifmap ifru_map;
		char    ifru_slave[IFNAMSIZ];   /* Just fits the size */
		char    ifru_newname[IFNAMSIZ];
		void *  ifru_data;
		struct  if_settings ifru_settings;
	} ifr_ifru;
};
#endif
