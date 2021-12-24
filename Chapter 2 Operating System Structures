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

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Simple Module");
MODULE_AUTHOR("SGG");

!make
//compiled to simple.ko.
!sudo insmod simple.ko
//Load the kernel module 'simple'.
!lsmode
//Check whether the module 'simple' has loaded.
!dmesg
//Check the contents of this messages in the kernel log buffer, we will see the message "Loading Kernel Module".
!sudo rmmod simple
//Remove the kernel module, and the .ko suffix is unnecessary.
!dmesg
//Ensure the module has been removed.

//Print out the value of GOLDEN_RATIO_PRIME in the simple_init() function.
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/hash.h>
#include <linux/gcd.h>

int simple_init(void)
{
printk(KERN_INFO "%lu\n", GOLDEN_RATIO_PRIME);
return 0;
}

void simple_exit(void)
{
printk(KERN_INFO "%lu\n", gcd(3300, 24));
}

module_init(simple_init);
module_exit(simple_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Simple Module");
MODULE_AUTHOR("SGG");

