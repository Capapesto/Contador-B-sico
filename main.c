#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

int contador = 0;


void app_main() {

  while (contador > -1) {
    

    printf("Contagem em: %d\n", contador);
    contador ++;
    vTaskDelay(1000 / portTICK_PERIOD_MS);
  }
}


