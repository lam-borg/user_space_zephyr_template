#include "processes/base_classes/process_base.h"

class SupervisorThread : public ProcessBase{
    public:
        SupervisorThread(): ProcessBase()
        {
            
        };
        void run() override{
            while (1)
            {
                printk("i'm alive!");
                k_msleep(1000);
            }            
        }
        size_t get_stack_size() override{
            return K_THREAD_STACK_SIZEOF(thread_stack_);
        } 
    protected:
        static K_THREAD_STACK_DEFINE(thread_stack_, 1024);
    private:
}; 
