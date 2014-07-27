#ifndef _SYSCALL_SIG_H
#define _SYSCALL_SIG_H

#include <common/signal.h>

int sys_personality(unsigned long persona);

int sys_rt_sigaction(int signum, const struct sigaction *act, struct sigaction *oldact);

#endif