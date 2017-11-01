#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>

///step1

#include<linux/moduleparam.h>



//step2

int param_var =0;

//step 3 register (macro)
// module_param(name_var,type,permissions)

module_param(param_var,int,S_IRUSR | S_IWUSR);

void displays(void)
{
printk(KERN_ALERT"TEST:param =%d",param_var);

}

static int hello_init(void)
{
// purpose is to register functionalities & allocate resources
printk(KERN_ALERT"TEST:Hello world \n");
displays();
return 0;
}

static void hello_exit(void)
{
// purpose is to unregister functionalities & deallocate registers

printk(KERN_ALERT"TEST:hello world is exiting.");






}

module_init(hello_init);
module_exit(hello_exit);


