#include <linux/module.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Joannes 4 GNU/Liux");
MODULE_DESCRIPTION("A hello world module");


static int __init ModuleInit(void){

	printk("ello kernel");
	return 0;
}

static void __exit ModuleExit(void){
	printk("existing driver");
}

module_init(ModuleInit);
module_exit(ModuleExit);

