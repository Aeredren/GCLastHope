#define BLOCK_SIZE      0x2000
#define MEMCARD_256 	(BLOCK_SIZE * 256)
#define MEMCARD_512     (BLOCK_SIZE * 512)
#define MEMCARD_1024    (BLOCK_SIZE * 1024)
#define MEMCARD_2048    (BLOCK_SIZE * 2048)
#define MEMCARD_4092    (BLOCK_SIZE * 4092)

// Address in Bytes of GCmemcard sections
#define HEADER          0x0000
#define DIRECT          0x2000
#define DIRECT_B        0x4000
#define BAM             0x6000
#define BAM_B           0x8000
#define DATA            0xa000

// Address in Bytes of HEADER's subsections (relative)
#define HEADER_SOMETHING            0x0000
#define HEADER_OSTIME               0x000c
#define HEADER_ID                   0x0014
#define HEADER_ZEROES               0x0020
#define HEADER_MEMSIZE              0x0022
#define HEADER_ENCODING             0x0024
#define HEADER_COUNTER              0x01fa
#define HEADER_CS1                  0x01fc
#define HEADER_CS2                  0x01fe
// Size in Bytes of HEADER's subsections
#define HEADER_SIZE_SOMETHING       0xb
#define HEADER_SIZE_OSTIME          0x8
#define HEADER_SIZE_ID              0x6
#define HEADER_SIZE_ZEROES          0x2
#define HEADER_SIZE_MEMSIZE         0x2
#define HEADER_SIZE_ENCODING        0x2
#define HEADER_SIZE_COUNTER         0x2
#define HEADER_SIZE_CS1             0x2
#define HEADER_SIZE_CS2             0x2

// Address in Bytes of DIRECT's and DIRECT_B's subsections (relative)
#define DIRECT_GAMECODE             0x0
#define DIRECT_MAKERCODE            0x0
#define DIRECT_BANNER               0x0
#define DIRECT_NAME                 0x0
#define DIRECT_TIME                 0x0
#define DIRECT_OFFSET               0x0
#define DIRECT_ICON                 0x0
#define DIRECT_ANIM                 0x0
#define DIRECT_PERM                 0x0
#define DIRECT_CCOUNTER             0x0
#define DIRECT_BLOCK                0x0
#define DIRECT_LENGTH               0x0
#define DIRECT_COMMENT              0x0
// Size in Bytes of DIRECT's and DIRECT_B's subsections
#define DIRECT_SIZE_GAMECODE        0x0
#define DIRECT_SIZE_MAKERCODE       0x0
#define DIRECT_SIZE_BANNER          0x0
#define DIRECT_SIZE_NAME            0x0
#define DIRECT_SIZE_TIME            0x0
#define DIRECT_SIZE_OFFSET          0x0
#define DIRECT_SIZE_ICON            0x0
#define DIRECT_SIZE_ANIM            0x0
#define DIRECT_SIZE_PERM            0x0
#define DIRECT_SIZE_CCOUNTER        0x0
#define DIRECT_SIZE_BLOCK           0x0
#define DIRECT_SIZE_LENGTH          0x0
#define DIRECT_SIZE_COMMENT         0x0

// Address in Bytes of BAM's and BAM_B's subsections (relative)
#define BAM_CS1                     0x2
#define BAM_CS2                     0x2
#define BAM_UCOUNTER                0x2
#define BAM_FREE                    0x2
#define BAM_LAST                    0x2
#define BAM_DATA                    0x2
// Size in Bytes of BAM's and BAM_B's subsections
#define BAM_CS1                     0x2
#define BAM_CS2                     0x2
#define BAM_UCOUNTER                0x2
#define BAM_FREE                    0x2
#define BAM_LAST                    0x2
#define BAM_DATA                    0x2
