#include "zephyr/kernel.h"
#include "processes/normal_thread.h"



int main(){
    printk("hello world");
    BasicThread basic_thread;
    basic_thread.start();
}
