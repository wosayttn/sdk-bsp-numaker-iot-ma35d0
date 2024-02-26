/**************************************************************************//**
*
* @copyright (C) 2019 Nuvoton Technology Corp. All rights reserved.
*
* SPDX-License-Identifier: Apache-2.0
*
* Change Logs:
* Date            Author       Notes
* 2021-6-1        Wayne        First version
*
******************************************************************************/

#include <rtthread.h>
#include <rtdevice.h>
#include "drv_common.h"

#if defined(RT_USING_PIN)
#include "drv_gpio.h"

/* defined the LED_0 pin: PN4 */
#define LED_0   NU_GET_PININDEX(NU_PN, 4)

/* defined the LED_1 pin: PN5 */
#define LED_1   NU_GET_PININDEX(NU_PN, 5)

/* defined the LED_2 pin: PN10 */
#define LED_2   NU_GET_PININDEX(NU_PN, 10)

/* defined the Key0 pin: PK10 */
#define KEY_0   NU_GET_PININDEX(NU_PK, 10)

/* defined the Key1 pin: PK11 */
#define KEY_1   NU_GET_PININDEX(NU_PK, 11)

/* defined the Key2 pin: PI14 */
#define KEY_2   NU_GET_PININDEX(NU_PI, 14)

static uint32_t u32Key0 = KEY_0;
static uint32_t u32Key1 = KEY_1;
static uint32_t u32Key2 = KEY_2;

void nu_button_cb(void *args)
{
    uint32_t u32Key = *((uint32_t *)(args));
    static uint32_t u32Toggle = PIN_HIGH;

    rt_kprintf("[%s] %d Pressed!\n", __func__, u32Key);
    switch (u32Key)
    {
    case KEY_0:
    case KEY_1:
    case KEY_2:
        rt_pin_write(LED_1, u32Toggle);
        rt_pin_write(LED_2, ~u32Toggle);
        u32Toggle = ~u32Toggle;
        break;
    }
}

int main(int argc, char **argv)
{
    /* set LED_0 pin mode to output */
    rt_pin_mode(LED_0, PIN_MODE_OUTPUT);

    /* set LED_1 pin mode to output */
    rt_pin_mode(LED_1, PIN_MODE_OUTPUT);

    /* set LED_2 pin mode to output */
    rt_pin_mode(LED_2, PIN_MODE_OUTPUT);

    /* set KEY_0 pin mode to input */
    rt_pin_mode(KEY_0, PIN_MODE_INPUT);
    rt_pin_attach_irq(KEY_0, PIN_IRQ_MODE_FALLING, nu_button_cb, &u32Key0);
    rt_pin_irq_enable(KEY_0, PIN_IRQ_ENABLE);

    /* set KEY_1 pin mode to input */
    rt_pin_mode(KEY_1, PIN_MODE_INPUT);
    rt_pin_attach_irq(KEY_1, PIN_IRQ_MODE_FALLING, nu_button_cb, &u32Key1);
    rt_pin_irq_enable(KEY_1, PIN_IRQ_ENABLE);

    /* set KEY_2 pin mode to output */
    rt_pin_mode(KEY_2, PIN_MODE_INPUT);
    rt_pin_attach_irq(KEY_2, PIN_IRQ_MODE_FALLING, nu_button_cb, &u32Key2);
    rt_pin_irq_enable(KEY_2, PIN_IRQ_ENABLE);

    while (1)
    {
        rt_pin_write(LED_0, PIN_HIGH);
        rt_thread_mdelay(500);
        rt_pin_write(LED_0, PIN_LOW);
        rt_thread_mdelay(500);
    }

    return 0;
}

#else

int main(int argc, char **argv)
{
    rt_kprintf("cpu-%d %d\r\n", rt_hw_cpu_id(), nu_cpu_dcache_line_size());
    return 0;
}

#endif
