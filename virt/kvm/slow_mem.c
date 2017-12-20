/*
 * Cached Slow Memory support for KVM
 */

#include <linux/errno.h>
#include <linux/file.h>
#include <linux/kvm_host.h>
#include <linux/list.h>
#include <linux/module.h>
#include <linux/mutex.h>


