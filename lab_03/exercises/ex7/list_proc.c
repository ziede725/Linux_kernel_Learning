#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
/* TODO: add missing headers */
#include <linux/sched.h>

MODULE_DESCRIPTION("List current processes");
MODULE_AUTHOR("Kernel Hacker");
MODULE_LICENSE("GPL");

static int my_proc_init(void)
{
	struct task_struct *p;
 	p = current ; 
	/* TODO: print current process pid and its name */
	printk("entry : current pid of running process %d \n", p->pid);  
	printk("entry : current name of running process %s \n", p->comm);
	/* TODO: print the pid and name of all processes */
	
	return 0;
}

static void my_proc_exit(void)
{
	
	/* TODO: print current process pid and name */
	printk("exitmsg : current pid %d\n ", (current)->pid) ;
	printk("exitmsg : current name of running process %s \n", (current)->comm) ; 
}

module_init(my_proc_init);
module_exit(my_proc_exit);
