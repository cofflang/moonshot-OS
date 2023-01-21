#ifndef MS_PROC_H
#define MS_PROC_H

#include "file.h"

class Process : public File {
public:
    Process(char* name);
    ~Process();

    u32 open();
    u32 close();
    u32 read();
    u32 write();
    u32 ioctl();
    u32 remove();

    void scan();

    u32 create();
    
    void send_signal(int s);

    u32 wait();
    u32 add_file();

    File* get_file();

    void delete_file();
    void exit();

    int fork();

    void set_state();

    u8 get_state();

    void set_file();
    void set_pid();

    u32 get_pid();

    Process* schedule();

    File* get_curr_dir();
    
    void set_curr_dir();
protected:
    u32 pid;
    u8 state;
    
    File* dir;
};

#endif