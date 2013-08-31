#include<linux/init.h>
#include<linux/module.h>
#include<linux/moduleparam.h>


int parameter[3] = {0,0,0};
module_param_array(parameter,int,NULL, S_IRUSR | S_IWUSR);

void display()
{
	printk(KERN_ALERT "TEST:param = %d",parameter[0]);
	printk(KERN_ALERT "TEST:param = %d",parameter[1]);
	printk(KERN_ALERT "TEST:param = %d",parameter[2]);

}



static int hello_init(void)
{
	printk(KERN_ALERT "TEST: HELLO world that is the first code");
	display();
	return 0;
}

static void hello_exit(void)
{

	printk(KERN_ALERT "TEST: GOOD byte");





}
module_init(hello_init);
module_exit(hello_exit);
