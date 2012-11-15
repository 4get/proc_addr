#include <linux/init.h>
#include <linux/module.h>
#include <linux/vmalloc.h>
#include <linux/slab.h>
#include <linux/sched.h>

MODULE_LICENSE("Dual BSD/GPL");

extern int pte_print_enable;
extern int pte_print_pid;
int pe;
int pid;

module_param(pe, int, S_IRUGO);
module_param(pid, int, S_IRUGO);

//EXPORT_SYMBOL(pte_print_enable);
//EXPORT_SYMBOL(pte_print_pid);

static int kparam_init(void)
{   
	printk("old pte_print_enable=%d,pte_print_pid=%d.\n",pte_print_enable,pte_print_pid);
	pte_print_enable=pe;
	pte_print_pid=pid;
	printk("new pte_print_enable=%d,pte_print_pid=%d.\n",pte_print_enable,pte_print_pid);
	return 0;
}   

static void kparam_exit(void)
{
	printk("kparam exit\n");
}

module_init(kparam_init);
module_exit(kparam_exit);

