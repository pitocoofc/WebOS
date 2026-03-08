#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define _v_ 0x1A
#define SYSLOG(x, y) printf("\033[1;32m[  OK  ] \033[0m" x " %p\n", (void*)y)
#define CRITICAL(x) printf("\033[1;31m[ ERR! ] Critical: " x "\033[0m\n")

void m_sleep(int m) {
    clock_t c = clock() + m * CLOCKS_PER_SEC / 1000;
    while (clock() < c);
}

int main() {
    int i, j;
    char *sys_nodes[] = {"MEM_MAP", "DMA_ADDR", "K_STACK", "IO_PORT", "V_BIOS"};
    
    printf("\033[2J\033[H"); // Limpa o ecrã
    printf("--- SYS_INIT_V2.0.4 ---\n\n");

    for(i = 0; i < 5; i++) {
        m_sleep(400);
        SYSLOG("Initing node", &sys_nodes[i]);
        
         printf("  >> \033[1;34mScanning:\033[0m [");
        for(j = 0; j < 20; j++) {
            printf("%c", (char)(33 + (rand() % 94))); // Caracteres ASCII aleatórios
            fflush(stdout);
            m_sleep(50);
            printf("\b \b%c", (j % 2 == 0) ? '#' : '=');
        }
        printf("] 100%%\n");
    }

    m_sleep(800);
    CRITICAL("UNAUTHORIZED ACCESS DETECTED IN SECTOR 0x00FF4A");
    m_sleep(500);
    
       for(i = 0; i < 50; i++) {
        for(j = 0; j < 30; j++) {
            printf("\033[0;32m%x\033[0m ", rand() % 0xFF);
        }
        printf("\n");
        m_sleep(30);
    }

    printf("\n\033[1;33mSYSTEM_STABILIZED. WAITING FOR INPUT...\033[0m\n");
    return 0;
}

