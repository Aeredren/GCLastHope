#define BLOCK_SIZE      0x2000
#define MEMCARD_256 	(BLOCK_SIZE * 256)
#define MEMCARD_512     (BLOCK_SIZE * 512)
#define MEMCARD_1024    (BLOCK_SIZE * 1024)
#define MEMCARD_2048    (BLOCK_SIZE * 2048)
#define MEMCARD_4092    (BLOCK_SIZE * 4092)

// Address in Bytes of GCmemcard sections
#define HEADER          0x0000
#define DIRECTORY_O     0x2000
#define DIRECTORY_B     0x4000
#define BAM_O           0x6000
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
#define SIZE_HEADER_SOMETHING       0xb
#define SIZE_HEADER_OSTIME          0x8
#define SIZE_HEADER_ID              0x6
#define SIZE_HEADER_ZEROES          0x2
#define SIZE_HEADER_MEMSIZE         0x2
#define SIZE_HEADER_ENCODING        0x2
#define SIZE_HEADER_COUNTER         0x2
#define SIZE_HEADER_CS1             0x2
#define SIZE_HEADER_CS2             0x2

// Address in Bytes of DIRECTORY_O's and DIRECTORY_B's subsections (relative)
#define DIRECTORY_GAMECODE             0x0
#define DIRECTORY_MAKERCODE            0x0
#define DIRECTORY_BANNER               0x0
#define DIRECTORY_NAME                 0x0
#define DIRECTORY_TIME                 0x0
#define DIRECTORY_OFFSET               0x0
#define DIRECTORY_ICON                 0x0
#define DIRECTORY_ANIM                 0x0
#define DIRECTORY_PERM                 0x0
#define DIRECTORY_CCOUNTER             0x0
#define DIRECTORY_BLOCK                0x0
#define DIRECTORY_LENGTH               0x0
#define DIRECTORY_COMMENT              0x0
// Size in Bytes of DIRECTORY's and DIRECTORY_B's subsections
#define SIZE_DIRECTORY_GAMECODE        0x0
#define SIZE_DIRECTORY_MAKERCODE       0x0
#define SIZE_DIRECTORY_BANNER          0x0
#define SIZE_DIRECTORY_NAME            0x0
#define SIZE_DIRECTORY_TIME            0x0
#define SIZE_DIRECTORY_OFFSET          0x0
#define SIZE_DIRECTORY_ICON            0x0
#define SIZE_DIRECTORY_ANIM            0x0
#define SIZE_DIRECTORY_PERM            0x0
#define SIZE_DIRECTORY_CCOUNTER        0x0
#define SIZE_DIRECTORY_BLOCK           0x0
#define SIZE_DIRECTORY_LENGTH          0x0
#define SIZE_DIRECTORY_COMMENT         0x0

// Address in Bytes of BAM_O's and BAM_B's subsections (relative)
#define BAM_CS1                     0x0
#define BAM_CS2                     0x0
#define BAM_UCOUNTER                0x0
#define BAM_FREE                    0x0
#define BAM_LAST                    0x0
#define BAM_DATA                    0x0
// Size in Bytes of BAM's and BAM_B's subsections
#define SIZE_BAM_CS1                     0x0
#define SIZE_BAM_CS2                     0x0
#define SIZE_BAM_UCOUNTER                0x0
#define SIZE_BAM_FREE                    0x0
#define SIZE_BAM_LAST                    0x0
#define SIZE_BAM_DATA                    0x0
