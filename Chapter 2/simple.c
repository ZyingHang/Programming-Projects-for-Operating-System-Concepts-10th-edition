//Listing all kernel modules that are currently loaded;
!lsmod
//There are 3 columns: name, size, and where the module is being used;

#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

/* This function is called when the module is loaded. */
int simple_init(void)
{
printk(KERN_INFO "Loading Kernel Module\n");
return 0;
}
//printk is the kernel equivalent of printf(), but its output is sent to a kernel log buffer whose contents can be read by the 'dmesg' command.

/* This function is called when the module is removed. */
void simple_exit(void)
{
printk(KERN_INFO "Removing Kernel Module\n")
}

/* Macros for registering module entry and exit points. */
module_init(simple_init);
module_exit(simple_exit);

