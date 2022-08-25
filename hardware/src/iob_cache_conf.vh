// CORE VERSION
`include "iob_cache_version.vh"

//CORE DEFAULT PARAMETER CONFIGURATION

`define DATA_W 32
`define ADDR_W 24
`define BE_DATA_W 32
`define BE_ADDR_W 24
`define NWAYS_W 1
`define NLINES_W 7
`define WORD_OFFSET_W 3
`define WTBUF_DEPTH_W 4
`define REP_POLICY 0
`define WRITE_POL 0 
`define USE_CTRL 0
`define USE_CTRL_CNT 0

//Replacement Policy
// Least Recently Used -- more resources intensive - N*log2(N) bits per cache line - Uses counters
`define LRU 0
// bit-based Pseudo-Least-Recently-Used, a simpler replacement policy than LRU, using a much lower complexity (lower resources) - N bits per cache line
`define PLRU_MRU 1
// tree-based Pseudo-Least-Recently-Used, uses a tree that updates after any way received an hit, and points towards the oposing one. Uses less resources than bit-pseudo-lru - N-1 bits per cache line
`define PLRU_TREE 2

//Write Policy
//write-through not allocate: implements a write-through buffer  
`define WRITE_THROUGH 0
//write-back allocate: implementes a dirty-memory  
`define WRITE_BACK 1

//AXI4
`define AXI_ID_W 1
`define AXI_LEN_W 4
`define AXI_ID 0
`define AXI_ID_W 1