#include "stm32f4xx_hal.h"
#include "bsp_led.c"

int main(void)
{
    HAL_Init();
    SystemClock_Config();
    BSP_LED_Init();
    while (1)
    {
        BSP_LED_On(GPIO_PIN_12);
        HAL_Delay(500);
        BSP_LED_Off(GPIO_PIN_12);
        HAL_Delay(500);
    }
}

void SystemClock_Config(void)
{
    // 这里添加系统时钟配置代码（可用CubeMX生成的代码替换）
} 