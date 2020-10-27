#include "mbed.h"
 
Serial pc(USBTX, USBRX);
Serial uart(PTE0, PTE1);
 
DigitalOut pc_activity(PTD0);
DigitalOut uart_activity(PTD5);
 
int main() {
    while(1) {
        if(pc.readable()) {
            uart.putc(pc.getc());
            pc_activity = !pc_activity;
        }
        if(uart.readable()) {
            pc.putc(uart.getc());
            uart_activity = !uart_activity;
        }
    }
}
