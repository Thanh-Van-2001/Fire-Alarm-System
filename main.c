//************************************************************************************ 
// Display LCD con Librería "i2c_Flex_LCD" Integrado (PCF8574T) 
// Código principal:
// Sergio Castaño
// https://controlautomaticoeducacion.com
//************************************************************************************ 
#include <16f877a.h>
#DEVICE ADC=10
#USE DELAY(clock=16000000,crystal)
#FUSES HS,NOPROTECT,NOWDT,NOBROWNOUT,PUT,NOLVP
#byte porta = 0xf80 // Identificador para el puerto A. 
#byte portb = 0xf81 // Identificador para el puerto B. 
#byte portc = 0xf82 // Identificador para el puerto C. 
#byte portd = 0xf83 // Identificador para el puerto D. 
#byte porte = 0xf84 // Identificador para el puerto E.
 
#use i2c(Master,Fast=100000, sda=PIN_C4, scl=PIN_C3,force_sw)  
#include "i2c_LCD.c"  

void main() {  
int i=0; 
lcd_init(0x4E,16,2);
lcd_backlight_led(ON); //Enciende la luz de Fondo
setup_adc(ADC_CLOCK_INTERNAL);
setup_adc_ports(AN0);
SET_ADC_CHANNEL(0);
setup_timer_2(T2_DIV_BY_16,100,1);
setup_ccp1(CCP_PWM);
set_pwm1_duty(0);
   output_bit(PIN_D0,0);
  output_bit(PIN_D1,0);
int count=0;
int16 value= 0;
char Chuoi[17];  
 while (TRUE) { 

   value = read_adc();
   lcd_clear();
 lcd_gotoxy(1, 1); 
 sprintf(Chuoi, "value =%04ld", value);
 lcd_puts(Chuoi);
 if(value > 500)
 {
  lcd_gotoxy(1, 2); 
 lcd_putc("NGUY HIEM");
 count++;
   output_bit(PIN_D0,1);
  output_bit(PIN_D1,0);
 set_pwm1_duty(30);
 delay_ms(100);
  set_pwm1_duty(90);
 delay_ms(100);
}
else
{
if(count==0)
{
 lcd_gotoxy(1, 2); 
lcd_putc("AN TOAN");
    output_bit(PIN_D0,0);
  output_bit(PIN_D1,0);
  set_pwm1_duty(0);
}
if(count>0)
{
 lcd_gotoxy(1, 2); 
lcd_putc("NGUY HIEM");
   output_bit(PIN_D0,1);
  output_bit(PIN_D1,0);
 set_pwm1_duty(30);
 delay_ms(100);
  set_pwm1_duty(90);
 delay_ms(100);
}
}
delay_ms(10);
}
}
