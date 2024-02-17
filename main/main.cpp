// Inclusão das bibliotecas do FreeRTOS
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

// Inclusão dos objetos personalizadas
#include "hello.h"

// Deve-se declarar que está usando o namespace "HELLO"
using namespace HELLO;

// Função principal, cria um objeto "app" do tipo da classe "HelloCpp" e executa a função "run" a cada 1s, contando quantas vezes foi executada
// Deve-se sempre usar o delay do FreeRTOS
extern "C" void app_main(void)
{
    HelloCpp app;
    int i = 0;

    while (true)
    {
        app.run(i);
        i++;
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}
