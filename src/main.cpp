#include "zephyr/kernel.h"
#include "processes/supervisor_thread.h"



int main(){
    printk("hello world");
    SupervisorThread basic_thread;
    basic_thread.start();
}
