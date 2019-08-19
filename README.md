# DIY IoT home switch (control de interruptor hogareño por internet WiFi)
Introducción
La idea de este proyecto fue crear un dispositivo para comandar un interruptor o llave de luz hogareña desde internet usando nuestra red WiFi. Hay productos en el mercado pero son complicados de instalar ya que hay que ser electricista e incluso puede ser peligroso. Nosotros no queríamos tocar nada de la instalación existente.
Además queríamos que nuestro interruptor en casa siga estando funcional.
Entonces se nos ocurrió crear algo con un Wemos y un servo. Este circuito junto con un un correcto diseño de un gabinete nos permiten realizar la labor.
Y como plataforma de control usamos Blynk que es a nuestro entender una de las mejores plataformas que nos permiten controlar dispositivos hechos en Arduino u otro dispositivo (Wemos, Nodemcu, etc) desde internet.
Por otra parte lo principal de todos nuestros proyectos es crear algo hecho por nosotros mismos (DIY).
Nosotros queríamos crear una versión hecha por nosotros mismos (Do it yourself) para tomarlo como un desafío y además utilizar un poco de nuestra creatividad.
 
### Hardware:
•	Wemos D1 mini;
•	Servo de rotación continua "SG90 ";

### Software (gratuito):
•	Arduino IDE.
•	Blynk App (Android/IOS) and libraries. (aplicación multiplataforma)

### Herramientas:
•	Computadora personal o notebook.
•	Teléfono Smart con Android o IOS.

## Diseño
El diseño del gabinete y la horquilla se encuentran en Thingiverse. Se realizó mediante la plataforma Thinkercad.
El diseño básicamente se basa en usar la fuerza de un servo para comandar el interruptor o llave de luz.
El servo y la placa de control van dentro de un gabinete.
La placa de control es pequeña al igual que el servo por lo que no hubo problemas de ubicarlo dentro del gabinete.
La alimentación debe ser externa mediante el uso de un puerto usb conectado a un powerank o a una fuenta de 5V y al menos 1 amper (1000mA).
Link Thingiverse: https://www.thingiverse.com/thing:3818064
 
![](https://github.com/arduinominilabs/Iot-home-switch/blob/master/Design.png)

## Dashboard Blynk 
Bueno ahora vamos a ver el diseño del dahsboard en Blynk. A continuación mostramos los elementos y las variables a crear en un print de pantalla. 
  
![](https://github.com/arduinominilabs/Iot-home-switch/blob/master/Bkynk%20Dashboard.png)
   
•	V0: Label “State”. Toma el valor del estado actual.
•	V2: Button ”On” . On=”On”, Off=”-“.
•	V3: Button “Off” . On=”Off”, Off=”-“;

## Circuito
Ahora vamos a ver el circuito que utilizamos:

![](https://github.com/arduinominilabs/Iot-home-switch/blob/master/Circuito.png)

## Código:

Bueno dicho lo anterior, el código:
<Code> : https://github.com/arduinominilabs/Iot-home-switch/blob/master/Iot_home_switch_code.ino

## Funcionamiento.
Una vez grabado el programa en el Wemos y haber creado la aplicación en Wemos deberíamos poder probar el sistema:
•	Conectamos el dispositivo, la alimentación de la placa por medio de una fuente USB.
•	Abrimos la app en Blynk , si la placa conecto correctamente a internet deberíamos ver la placa conectada en la parte superior de la aplicación. Una vez que tenemos esto confirmado podemos utilizar la aplicación.
•	Tenemos dos botones, una para encencer “on” y otro para apagar “off”. También hay una etiqueta que nos muestra el último estado que tuvimos. Nos dice el ultimo estado de acuerdo al botón que presionamos, no el estado real que puede ser distinto.

![](https://github.com/arduinominilabs/Iot-home-switch/blob/master/Installation.JPG)

![](https://www.youtube.com/watch?v=LLrRNSEoZXw)

# Conclusiones y Comentarios:
Bueno esperamos que les guste nuestro nuevo proyecto #iothomeswitch qué básicamente nos permite comandar una llave o interruptor de luz desde nuestra aplicación #blynk en el celular.
- Este desarrollo es sumamente sencillo pero es bastante poderoso si lo piensan, no hay que tocar nada eléctrico. Es todo externo. En este caso para el ejemplo utilizamos como fuente de alimentación un powerbank pero la idea es utilizar una fuente de 5V usb qué ahora viene para cajas eléctricas (lo veremos en otro post)..
- Permite accionar el interruptor directamente, manualmente, si así lo deseamos...
- Cómo ven es una caja dónde va instalado el servo y un wemos...se adhiere con una cinta doble faz industrial.
- En el mercado hay los famosos #sonoff qué no nos gustan tanto, son bastante aparatosos y están pensado para otro mercado. Estos últimos van embutidos, están pensados quizás más americano dónde las casas tienen otra filosofía constructiva. Además tiene el problema que no podemos utilizar más nuestra llave convencional.
- En el próximo blog vamos a mejorar este diseño para que sea más fácil de adaptar en una llave de luz más moderna.
- La idea final plantea instalar dentro del gabinete un sensor #ldr así sabemos el estado de iluminación del local y tenemos feedback.
- WARNING Por favor nunca toquen algo eléctrico a menos de que sean profesionales...por eso quisimos hacer algo así, que es seguro...
- Sus comentarios todos bienvenidos al igual que ideas...tenemos muchos proyectos pendientes.
- Esta es una aplicación totalmente funcional que ha tomado meses de desarrollo, espero la disfruten  y nos den feedback y reconocimiento!!

En el futuro se le agregaran más features o funcionalidades a nuestro alimentador básico.

### Links:
<Github> : https://github.com/arduinominilabs 
<Instagram> : https://www.instagram.com/arduinominilabs
<Instructables> : https://www.instructables.com/member/arduinominilabs/ 
<Thingiverse> : https://www.thingiverse.com/ArduinominiLabs 
<Facebook> : https://facebook.com/arduinominilabs

### Keys: 
•	DIY IoT Home Switch
•	Interruptor comandado por internet
•	Blynk home switch control


