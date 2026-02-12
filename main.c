#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

int8_t contador = 0;


void app_main() {

  while (contador > -1) {
    

    printf("Valor: %d | %c | %x \n", contador, contador, contador);
    contador ++;
    vTaskDelay(1000 / portTICK_PERIOD_MS);
  }
}


