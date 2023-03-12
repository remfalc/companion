//
// Created by remfa on 3/10/2023.
//

#include <stdio.h>
#include "cmd_uart.h"
#include "esp_console.h"

static const char *TAG = "cmd_uart";

static void register_connect(void);

void register_uart_cmd(void) {
    register_connect();
}

static int connect(int argc, char **argv) {
    return 0;
}

static void register_connect(void) {
    const esp_console_cmd_t cmd = {
            .command = "connect",
            .help = "Connect to the console port",
            .hint = NULL,
            .func = &connect
    };
}
