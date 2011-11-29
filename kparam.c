#include <linux/init.h>
#include <linux/module.h>
#include <linux/vmalloc.h>
#include <linux/slab.h>
#include <linux/sched.h>

MODULE_LICENSE("Dual BSD/GPL");

static int kparam_init(void)
{   
	return 0;
}   

static void kparam_exit(void)
{
	printk("kparam exit\n");
}

module_init(kparam_init);
module_exit(kparam_exit);

