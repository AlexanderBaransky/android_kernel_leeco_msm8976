#ifndef __BACKPORT_LINUX_CRED_H
#define __BACKPORT_LINUX_CRED_H
#include_next <linux/cred.h>
#include <linux/version.h>

#ifndef current_user_ns
#ifdef CONFIG_USER_NS
#define current_user_ns()	(current->nsproxy->user_ns)
#endif
#endif

#endif /* __BACKPORT_LINUX_CRED_H */
