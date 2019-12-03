// Cache Controllers's functions
#define ctrl_cache_hit(base)        (*(volatile int*)  (base+0x000))
#define ctrl_cache_miss(base)       (*(volatile int*)  (base+0x004))
#define ctrl_instr_hit(base)        (*(volatile int*)  (base+0x008))
#define ctrl_instr_miss(base)       (*(volatile int*)  (base+0x00C))
#define ctrl_data_hit(base)         (*(volatile int*)  (base+0x010))
#define ctrl_data_miss(base)        (*(volatile int*)  (base+0x014))
#define ctrl_data_read_hit(base)    (*(volatile int*)  (base+0x018))
#define ctrl_data_read_miss(base)   (*(volatile int*)  (base+0x01C))
#define ctrl_data_write_hit(base)   (*(volatile int*)  (base+0x020))
#define ctrl_data_write_miss(base)  (*(volatile int*)  (base+0x024))
#define ctrl_counter_reset(base)    (*(volatile int*)  (base+0x028))
#define ctrl_cache_invalidate(base) (*(volatile int*)  (base+0x02C))
#define ctrl_clock_start(base)      (*(volatile int*)  (base+0x030))
#define ctrl_clock_stop(base)       (*(volatile int*)  (base+0x034))
#define ctrl_clock_upper(base)      (*(volatile int*)  (base+0x038))
#define ctrl_clock_lower(base)      (*(volatile int*)  (base+0x03C))
#define ctrl_buffer_empty(base)     (*(volatile int*)  (base+0x040))
#define ctrl_buffer_full(base)      (*(volatile int*)  (base+0x044))