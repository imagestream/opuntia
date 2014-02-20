#define SAND_IOCTL_BASE			0x53444c20
#define SIOCPROBEDEVICES		(SAND_IOCTL_BASE + 0)
//#define SIOCSETPORTPARAMS		(SAND_IOCTL_BASE + 1)
#define SIOCGETPORTPARAMS		(SAND_IOCTL_BASE + 2)
#define SIOCSETHWPARAMS			(SAND_IOCTL_BASE + 3)
#define SIOCGETHWPARAMS			(SAND_IOCTL_BASE + 4)
//#define SIOCSETPROTOPARAMS		(SAND_IOCTL_BASE + 5)
#define SIOCGETPROTOPARAMS		(SAND_IOCTL_BASE + 6)
#define SIOCGETHWID			(SAND_IOCTL_BASE + 7)
#define SIOCGETHWSTATS			(SAND_IOCTL_BASE + 8)
#define SIOCGETPROTOSTATS		(SAND_IOCTL_BASE + 9)
#define SIOCDISPLAYCARDS		(SAND_IOCTL_BASE + 10)
#define SIOCDISPLAYPORTS		(SAND_IOCTL_BASE + 11)
#define SIOCSETHWDEBUG			(SAND_IOCTL_BASE + 12)
#define SIOCSETPROTODEBUG		(SAND_IOCTL_BASE + 13)
#define SIOCSETDESCRIPTION		(SAND_IOCTL_BASE + 14)
#define SIOCADDBONDER			(SAND_IOCTL_BASE + 15)
#define SIOCREMOVEBONDER		(SAND_IOCTL_BASE + 16)
#define SIOCSETBONDERCFG		(SAND_IOCTL_BASE + 17)
#define SIOCADDSLAVE 			(SAND_IOCTL_BASE + 18)
#define SIOCREMOVESLAVE 		(SAND_IOCTL_BASE + 19)
#define SIOCGETCSUSTATS 		(SAND_IOCTL_BASE + 20)
#define SIOCSETTUNNELCFG		(SAND_IOCTL_BASE + 21)
#define SIOCREMOVETUNNEL		(SAND_IOCTL_BASE + 22)
#define SIOCGETCARDINFO			(SAND_IOCTL_BASE + 23)
#define SIOCGETPORTINFO			(SAND_IOCTL_BASE + 24)
#define SIOCADDIMA     			(SAND_IOCTL_BASE + 25)
#define SIOCREMOVEIMA  			(SAND_IOCTL_BASE + 26)

#define SIOCGSANDIFACESTATS		SIOCDEVPRIVATE + 5
#define SIOCSETPORTPARAMS		SIOCDEVPRIVATE + 6
#define SIOCSETPROTOPARAMS		SIOCDEVPRIVATE + 7

/* Generic SAND network ioctl. */
#define SIOCSANDNETIOCTL		SIOCDEVPRIVATE + 8

#define SIOCSANDPRIVATEIOCTL		SIOCDEVPRIVATE + 9
#define SIOCSETPPPPARAMS		SIOCDEVPRIVATE + 10

#define SIOCFRADDARP		        SIOCDEVPRIVATE + 10
#define SIOCFRDELARP		        SIOCDEVPRIVATE + 11
#define SIOCFRDUMPARP		        SIOCDEVPRIVATE + 12


#define SIOCDEFAULTCHAINS		(SAND_IOCTL_BASE + 27)
#define SIOCADDUSERCHAIN		(SAND_IOCTL_BASE + 28)
#define SIOCUSERCHAINIOCTL		(SAND_IOCTL_BASE + 29)

#define SIOCGETMAJORMINOR		(SAND_IOCTL_BASE + 30)
