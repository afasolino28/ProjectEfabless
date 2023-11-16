#include <firmware_apis.h>



void main(){
    enable_debug();
    enableHkSpi(0);
    // write 10
    for (int i =0;i<19;i++){
        GPIOs_configure(i,0x2AA); 
    }
    for (int i =37;i>=19;i--){
        GPIOs_configure(i,0x2AA); 
    }
    GPIOs_loadConfigs();
    dummyDelay(10);
    set_debug_reg1(0XFF); // finish configuration 
    dummyDelay(10000);
}

