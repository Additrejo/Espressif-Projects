#include <stdio.h>
#include "driver/gpio.h"
#include "esp_rom_gpio.h"  // Necesario para gpio_pad_select_gpio

#define LED_PIN 2

void app_main() {
    // Configurar GPIO2 como salida
    esp_rom_gpio_pad_select_gpio(LED_PIN);  // Usar la versión ROM
    gpio_set_direction(LED_PIN, GPIO_MODE_OUTPUT);
    
    // Encender el LED
    gpio_set_level(LED_PIN, 1);
    
    printf("LED encendido permanentemente\n");
    
    while(1) {
        // Loop vacío
    }
}