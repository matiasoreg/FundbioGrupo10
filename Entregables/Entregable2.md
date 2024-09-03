# Estado del arte
## Tipos de agitadores
---

| Agitador orbital | Agitador vortex | Agitador magnético |
| ------------ | ------------ | ------------- |
| <p align="center" ><img src="https://i.postimg.cc/D0DKhFbw/agitador-orbital.jpg " style="width: 150px"></p> | <p align="center" ><img src="https://i.postimg.cc/4d6GpjM8/agitador-vortex.jpg " style="width: 150px"></p> | <p align="center" ><img src="https://i.postimg.cc/GhhRs7jQ/agitador-magnetico.jpg " style="width: 150px"></p> |
| Es un instrumento usado en laboratorio que consiste en una plataforma amplia donde se pueden colocar varios recipientes con soluciones a mezclar. Estas se aseguran en la plataforma y comienza un movimiento en un patrón orbital, lo cual permite mezclar, homogenizar y agitar las muestras. | Es un agitador hecho para tubos de ensayo, es decir, muestras más pequeñas en las que no se pueda introducir un imán dentro del recipiente debido al tamaño. Para ello, el tubo de ensayo es introducido en la cavidad superior del dispositivo, el cual puede girar en un diámetro aproximado de 4mm a velocidad de hasta 300 rpm. Esto permite el buen mezclado de la muestra contenida en el tubo de ensayo. | Es el agitador más común. Consiste en un dispositivo con un motor que produce un campo magnético giratorio. Al colocar el recipiente encima de la placa del dispositivo, se le añade un imán pequeño el cual girará debido al campo magnético generado por el motor interior. Existen funciones adicionales que las empresas le suelen añadir, tales como que la placa sea calefactora para aumentar la temperatura, control de velocidad, inversión de giro del imán, medidores de temperatura, viscosidad, etc. Otros dispositivos tienen una placa con una superficie más amplia para colocar más recipientes mezclándose a la vez. |


## Contexto comercial
---
### IKA™ Paquete de agitador magnético de placa cerámica C-MAG HS 7

<p align="center" ><img src="https://i.postimg.cc/85z8rsRC/agi1.jpg " style="width: 200px"></p>

La agitación consiste en un motor imantado que se encuentra en la base del dispositivo, el cual gira y hace que un imán pequeño, el cual se introducirá dentro del líquido, gire a los rpm deseados. Esta medida, al igual que la temperatura, la cual será inducida por la base calefactora de cerámica, y los rpm pueden ser configurados en la interfaz digital del dispositivo. Tanto el pequeño imán que se introducirá al líquido como el termómetro vienen en piezas separadas que se añaden al dispositivo [1].

#### Especificaciones:
- Velocidad: De 100 a 1500 rpm
- Material de placa calefactora: Cerámica
- Temperatura: 50°C a 500°C
- Peso: 5kg

---
### Mini agitador magnético HI181K-1

<p align="center" ><img src="https://i.postimg.cc/Px3gbhyQ/agi2.jpg " style="width: 200px"></p>

Los agitadores magnéticos HI181 de la empresa HANNA Instruments ofrecen una versión mucho más compacta, ligera y económica que los agitadores magnético comunes. Las funciones se reducen solo al control de la velocidad de giro manualmente (no digital) y la adición de un electrodo en la parte superior ideal para mediciones electroquímicas que la mezcla requiera. Su composición de plástico durable permite resistir a químicos corrosivos que se pueden derramar en el dispositivo [2].

#### Especificaciones:
- Brazo electrodo ajustable de hasta 12mm
- Cantidad máxima de agitación: 1 L
- Velocidad: 100 rpm a 1000 rpm
- Material: Plástico ABS
- Dimensiones: 137mm (diámetro) x 51mm (altura)
- Peso: 640g

---
### Mini agitador reversible HI302N-1

<p align="center" ><img src="https://i.postimg.cc/prmgq71b/agi3.jpg " style="width: 200px"></p>


Agitador magnético de la empresa HANNA Instruments con una interfaz más compacta al agitador común. Permite configurar la velocidad de giro (analógicamente) y cuenta con un temporizador, el fluido girará en una dirección durante ese tiempo y luego invertirá el sentido de rotación durante ese mismo tiempo, así hasta que el dispositivo se apague [3].

#### Especificaciones:
- Temporizador para inversión de rotación
- Velocidad: 100 rpm a 1000 rpm
- Dimensiones: 180 x 180 x 70mm
- Peso: 1,4 kg
- Conexión a tierra para seguridad adicional

----
## Patentes existentes
----

| Patente | Descripción |
|-------------|-------------|
| [![pantente1-1.jpg](https://i.postimg.cc/DfxwcjWn/pantente1-1.jpg)](https://postimg.cc/6TGKWhLm) [![patente1-2.jpg](https://i.postimg.cc/tRkYMRc0/patente1-2.jpg)](https://postimg.cc/K4KGKbFQ) |Metodología para entrenar un algoritmo para clasificar o detectar partículas o materiales en imágenes de microscopía. Un método incluye recibir una pluralidad de imágenes de microscopía de una muestra y una clasificación para la muestra. El método incluye entrenar un modelo o algoritmo de aprendizaje automático utilizando la pluralidad de imágenes, donde la primera imagen y la segunda imagen se proporcionan con una o más etiquetas que indican la clasificación. [5]|
|[![patente2.jpg](https://i.postimg.cc/j5k6GXWn/patente2.jpg)](https://postimg.cc/ygcSR0y7) | Metodología de entrenamiento de redes neuronales convolucionales utilizando la adquisición de imágenes de microscopio asistida por computadora y la preclasificación de imágenes de entrenamiento para objetos biológicos de interés. Los métodos combinan el uso de una plataforma de escaneo automatizado, análisis de imágenes en tiempo real paralelo al proceso de escaneo y una interfaz de usuario para revisar la preclasificación realizada por el software. [6]|
| [![Patente3-1.jpg](https://i.postimg.cc/CxcKccrj/Patente3-1.jpg)](https://postimg.cc/bZ28J9hJ) [![Patente3-2.jpg](https://i.postimg.cc/fyYL5Z1L/Patente3-2.jpg)](https://postimg.cc/SYNkx0SF) | Método de captura de imágenes que se procesa con un algoritmo de aprendizaje automático especializado en identificar rasgos fenotípicos celulares relacionados con los rasgos genéticos, epigenéticos o genómicos de interés. El algoritmo se entrena utilizando un conjunto de datos de entrenamiento, valga la redundancia, que comprende datos de imágenes celulares y datos de secuenciación de ácidos nucleicos. [7]|
# Lista de requerimentos
### Funcionales: ¿Qué debe hacer nuestro proyecto?
![FUNCIONAL.jpg](https://i.postimg.cc/jqHZCc19/aaaaaaaaaaaaaaa.png)
### No funcionales: ¿Qué propiedades debe tener nuestro proyecto?
![NOFUNCIONAL.jpg](https://i.postimg.cc/XYtMg4DB/no-Funcionales.png)
# Propuesta de solución
a

# Referencias bibliográficas
- [1] https://www.fishersci.es/shop/products/c-mag-hs-7-ceramic-plate-magnetic-stirrer-package/10110900
- [2] https://hannainst.com.pe/productos/accesorios/mini-agitador-magnetico-compacto-con-soporte-de-electrodo-color-anaranjado-115v/
- [3] https://hannainst.com.pe/productos/accesorios/mini-agitador-reversible-con-cubierta-de-acero-inoxidable-2-5-l-con-alimentacion-de-110-volts/
- 
