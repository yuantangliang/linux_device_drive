#define LINUX

#include <linux/module.h>  /* Needed by all modules */
#include <linux/kernel.h>  /* Needed for KERN_ALERT */
#include <linux/init.h>
#include <linux/slab.h>

#define DRIVER_AUTHOR "Yuan"
#define DRIVER_DESC "A very simple kernel driver"

static int hello_init(void)
{

    printk(KERN_ALERT "hello world");

    return 0;
}


static void hello_exit(void)
{
    printk(KERN_ALERT "Goodbye, world 2\n");
}

module_init(hello_init);

module_exit(hello_exit);

MODULE_LICENSE("MIT");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);

