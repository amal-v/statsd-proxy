/**
 * Copyright (c) 2015, Chao Wang <hit9@icloud.com>
 *
 * Proxy threading entry.
 */

#ifndef _CW_PROXY_H
#define _CW_PROXY_H 1

#include "ctx.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define BUF_READ_UNIT   1024

enum {
    PROXY_OK = 0,       /* operation is ok */
    PROXY_ENOMEM = 1,   /* no memory error */
    PROXY_EBIND = 2,    /* socket bind error */
};

void *thread_start(void *arg);
int server_start(struct ctx *ctx);

#if defined(__cplusplus)
}
#endif
#endif
