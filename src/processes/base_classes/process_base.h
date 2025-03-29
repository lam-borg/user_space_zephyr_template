#include "zephyr/kernel.h"

class ProcessBase{
    public:
        ProcessBase(uint32_t options=0): 
        thread_stack_(thread_stack_),
        thread_options_(options)
      {};

       void start(){
        thread_id = k_thread_create(&thread, thread_stack_, get_stack_size(), thread_entry, this, NULL, NULL, prio_, thread_options_, K_NO_WAIT);
       } 
    protected:
       k_thread_stack_t* thread_stack_;
       uint32_t thread_options_;
       virtual void run()=0;
       virtual size_t get_stack_size()=0;
       static void thread_entry(void* instance_ptr, void* p2, void* p3){
            static_cast<ProcessBase*>(instance_ptr)->run();
       }
       int prio_=7;
    private:
       struct k_thread thread;
       k_tid_t thread_id;
};
