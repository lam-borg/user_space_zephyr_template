#include "processes/base_classes/process_base.h"

class BasicThread : public ProcessBase{
    public:
        BasicThread(): ProcessBase()
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
            return K_THREAD_STACK_SIZEOF(BasicThread::thread_stack_);
        } 
    protected:

    private:
}; 
