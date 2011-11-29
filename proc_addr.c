#include <linux/init.h>
#include <linux/module.h>
#include <linux/vmalloc.h>
#include <linux/slab.h>
#include <linux/sched.h>

MODULE_LICENSE("Dual BSD/GPL");

static int proc_addr_init(void)
{   
	printk("proc_addr init\n");
	return 0;
}   

static void proc_addr_exit(void)
{
	printk("proc_addr exit\n");
}

module_init(proc_addr_init);
module_exit(proc_addr_exit);

