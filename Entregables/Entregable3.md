# Problemática
## Contexto:
En muchas universidades, especialmente aquellas en zonas de bajos recursos, los laboratorios de enseñanza carecen de equipos adecuados y accesibles para la correcta preparación y manejo de compuestos en prácticas pre profesionales. Esta carencia limita la calidad de la educación práctica, dado que los estudiantes no tienen acceso a herramientas que les permitan simular condiciones reales en el campo de los análisis clínicos. Equipos como los agitadores magnéticos, que son esenciales para la preparación homogénea de soluciones y mezclas, son costosos y poco accesibles en estos entornos.

Sin un equipo de agitación confiable, los estudiantes deben recurrir a métodos manuales, esto  afecta la precisión de los resultados en los experimentos y análisis. Además, la falta de control preciso de la velocidad y temperatura en la preparación de mezclas puede llevar a resultados inconsistentes y no reproducibles, lo que limita la efectividad del aprendizaje. En un estudio se propone cómo la evolución de las concepciones docentes, influenciada por la formación continua y el uso de tecnologías adecuadas, puede mejorar significativamente la calidad de la educación práctica en laboratorios, particularmente en contextos de recursos limitado, esto subraya la necesidad de abordar tanto los aspectos tecnológicos como pedagógicos para cerrar la brecha en la formación de estudiantes en ciencias de la salud [1].

En el campo de la ingeniería biomédica, nuestra solución tiene un gran impacto, pues democratiza el acceso a tecnologías esenciales para la preparación precisa de soluciones en análisis clínicos, especialmente en entornos de bajos recursos. Al integrarse en laboratorios educativos, mejora la calidad de las prácticas pre profesionales, asegurando que los estudiantes trabajen con herramientas que simulan condiciones reales. Además, al emplear tecnologías accesibles como Arduino y la impresión 3D, promueve la sostenibilidad, la innovación local y la estandarización, lo que impacta positivamente tanto en la educación como en los procesos clínicos.

## Definición del Problema:
El problema radica en la falta de acceso a agitadores magnéticos accesibles, precisos y adaptados a las necesidades de los laboratorios de enseñanza en las universidades lo que limita la calidad de la formación de los estudiantes en las prácticas pre profesionales. Esto genera una brecha entre el aprendizaje teórico y la capacidad de los estudiantes para aplicar técnicas profesionales en entornos reales de laboratorio.

## Impacto:
El impacto de esta problemática en la población en general radica en que la falta de acceso a equipos adecuados para la formación de estudiantes de ciencias de la salud y áreas biomédicas, como el agitador magnético, puede afectar la calidad de los futuros profesionales. Si los estudiantes no adquieren habilidades prácticas adecuadas ni tienen experiencia con el uso de equipos esenciales en sus prácticas pre profesionales, esto podría traducirse en errores en los análisis clínicos y en la preparación de medicamentos o soluciones en el ámbito real. Esto, a su vez, puede comprometer la precisión de diagnósticos y tratamientos, afectando la seguridad y efectividad del cuidado de la salud en la población, especialmente en hospitales y centros de salud de bajos recursos. La correcta formación técnica es vital para asegurar que los profesionales del futuro puedan contribuir de manera segura y eficaz a la atención médica.

# Propuesta de solución
### Descripción de la solución
La solución propuesta es la creación de un agitador magnético de bajo costo, con pantalla LCD para controlar velocidad y temperatura. Esta solución está diseñada y dirigida a universidades de todo el perú para su implementación en laboratorios de enseñanza. Se logrará usando técnicas de impresión 3D y elementos electrónicos de bajo costo con Arduino.

### Características:
- **Impresión 3D:** Se usará materiales como el PLA o ABS, materiales resistentes y económicos, se logrará tener una estructura duradera y estable. El ABS llega a resistir temperaturas de 100 grados, suficiente para el uso de este dispositivo [2].
- **Fuente de poder:** El dispositivo funciona girando imanes adheridos al motor, el cual crea un campo magnético que gira el imán dentro de la muestra. Se usará un ventilador de ordenador para ahorrar energía y costos. Así también será posible modificar la velocidad de las rotaciones. Por otro lado, se usarán resistencias calefactoras para aumentar la temperatura de la sustancia [3].
- **Sistema de control:** Usando un potenciómetro y distinto software, se puede programar la velocidad y las RPM con la cual gira el imán dependiendo de las necesidades según el volumen y el tipo de líquido que se usa. De una manera similar, se controlará el aumento de temperatura, potenciado por una fuente de batería recargable.
- **Temporizador y notificación:** Se configura el tiempo de agitado y al terminar sonará una notificación que advertirá del fin del agitado.

### Beneficios
- A parte del beneficio económico para los laboratorios, la visión del prototipo se enfoca en agilizar la tarea de los diferentes profesionales que trabajan ahí, ya que el agitador es un dispositivo automatizado que puede estar trabajando durante largos periodos de tiempo.
- El mantenimiento también es sencillo, al implementar elementos de fácil acceso y manipulación, el cuerpo del dispositivo es más duradero. 
- En universidades, se puede usar este dispositivo para poder ser usado como herramienta que ayude a la enseñanza, al no ser tan cara como un agitador magnético comercial, en caso de algún accidente, puede ser reparada fácilmente por el alumno.
- Se podrá controlar temperatura y velocidad de rotación para una mejor mezcla. Parámetros necesarios en un agitador magnético. [4]

### Viabilidad técnica
- **Para desarrollo:** Se necesita tener conocimientos sobre el diseño y prototipado 3D, al estar usando programas de modelado, impresión 3D y prototipado electrónico proporcionados por la universidad. Se tiene que saber cómo operar estas máquinas de manera correcta para evitar accidentes. 
- **Para prueba:** Conocer los diferentes tipos de sustancias que se tienen que mezclar, y con qué frecuencia se van a mezclar, para poder determinar la potencia del motor y otros elementos importantes para el correcto funcionamiento del dispositivo. 
En este caso, se enfocará en encontrar las RPM óptimas para mezclar diferentes sustancias de manera homogénea. Las RPM necesarias para mezclar líquidos más densos serán mayores. Para soluciones acuosas, como agua y sales, se recomienda entre 500 a 1000 RPM, dependiendo de la viscosidad de la sustancia [5].





# Coherencia
## Contexto del Proyecto
La propuesta de solución es diseñar e implementar un agitador magnético Open Hardware. Este dispositivo permitirá abordar la problemática de manera accesible. En el contexto de la Ingeniería Biomédica, la herramienta propuesta da lugar a la optimización y personalización de la preparación de soluciones farmacéuticas. Al ser Open Hardware permite a otros investigadores o profesionales de la salud mejorar este dispositivo o adaptarlo a sus necesidades lo cual fomenta la innovación colaborativa. Por ende, este proyecto no solo busca resolver una necesidad inmediata, sino también, integrarse en un entorno que promueve el libre acceso tecnológico.
## Objetivos del Proyecto
**Objetivo general:** 

El objetivo del proyecto es desarrollar un agitador magnético de bajo costo, controlado por Arduino, con funciones de ajuste de velocidad y temperatura, para su implementación en laboratorios de enseñanza de universidades del Perú, especialmente en zonas de bajos recursos.

**Objetivos específicos:**
- Diseñar y fabricar un agitador magnético de bajo costo
- Implementar el uso del agitador magnético en las prácticas pre profesionales
- Facilitar el acceso a tecnología estandarizada y accesible
## Justificación del Prototipo

El prototipo propuesto fue pensado en agrupar un conjunto de características que, en la mayoría de productos comerciales, no están presentes en un mismo dispositivo. Entre los aditivos más resaltantes se encuentra la incorporación de una pantalla LCD en la cual el usuario podrá ver la temperatura y velocidad de la mezcla. Además, el temporizador integrado impactará en la prevención del desgaste del equipo manteniendo una alta vida útil del equipo. Por el lado económico, este dispositivo fue planeado para comercializarse a menor costo en comparación con los agitadores magnéticos disponibles en el mercado.

## Alineación con el Problema
De acuerdo con la problemática, la falta de acceso a equipos adecuados en universidades de bajos recursos limita la calidad de la educación práctica y la formación de estudiantes en análisis clínicos, afectando su capacidad para aplicar técnicas profesionales en entornos reales. Como respuesta a estos problemas, se propone el diseño de un agitador magnético. Este prototipo permitirá al usuario tener control sobre la velocidad de las revoluciones así como sobre la temperatura de la solución, lo cual será útil para la formación de estudiantes durante sus prácticas pre profesionales.

# Resumen
El problema que identificamos radica en la falta de acceso a equipos relacionados a las mezclas de compuestos en universidades, lo cual limita la formación de estudiantes. Por ello, proponemos el desarrollo de un agitador magnético de bajo costo, que será de utilidad en universidades, donde será utilizado como una herramienta de enseñanza. 

Utilizaremos la impresión 3D y componentes electrónicos económicos para la fabricación de este equipo, el cual, además de homogeneizar mezclas, controlará la velocidad y la temperatura, mejorando así la precisión y seguridad en la preparación de mezclas médicas.

## Resultados Deseados:
El desarrollo del agitador magnético busca mejorar la calidad en la educación práctica, mejorando la enseñanza de estudiantes, aumentando su comprensión de técnicas esenciales en análisis clínicos. Se espera que el prototipo permita a las universidades en entornos de bajos recursos acceder a una tecnología asequible y funcional.

## Pasos a seguir:
- Empezar el modelado del agitador magnético utilizando un software CAD (como Autodesk Inventor)
- Adquirir los componentes electrónicos necesarios para la fabricación del agitador
- Implementar la programación del control del motor y el sistema de calefacción
- Desarrollar una interfaz de control sencilla, donde el usuario pueda ajustar parámetros como la velocidad de rotación y la temperatura
- Ensamblar los componentes electrónicos en el diseño impreso
- Llevar a cabo pruebas funcionales


# Referencias

[1] N. Fernandez y E. Costillo, "EVOLUCIÓN DE LAS CONCEPCIONES DOCENTES SOBRE LAS ACTIVIDADES PRÁCTICAS DE LABORATORIO A PARTIR DE UNA FORMACIÓN DE POSGRADO REFLEXIVA", Investigações em Ensino de Ciências, vol. 25, no 3, p. 252-269, 2020. [En linea]. Disponible: https://www.proquest.com/openview/adfc4eff92ececd71e976ec1735c7520/1?pq-origsite=gscholar&cbl=2032603

[2] Systèmes, D. ¿Qué resistencia pueden tener las piezas 3D? Dassault Systèmes. (2023, 29 marzo). https://www.3ds.com/es/make/solutions/blog/how-strong-can-3d-parts-be

[3] Conoce la importancia de las resistencias calefactoras y sus usos. (s. f.). Resistencias Eléctricas Industriales. https://juliomartineznaya.com/importancia-resistencias-calefactoras-usos/#:~:text=Este%20tipo%20de%20resistencias%20son,se%20desee%20calentar%20el%20contenido

[4] Inc, V. S. IT’S ALL A MATTER OF STIRRING: TIPS AND TRICKS TO CHOOSE THE BEST STIRRERS FOR YOUR LABORATORY. Velp Cientifica. (2022, 26 abril). https://www.velp.com/en-us/its-all-a-matter-of-stirring-tips-and-tricks-to-choose-the-best-stirrers-for-your-laboratory.aspx

[5] Mastering Magnetic Stirrer Techniques: Tips & Tricks for Efficient Mixing. Lab Hot Plates. (2024, 24 enero). https://labhotplates.com/mastering-magnetic-stirrer-techniques-tips-tricks-for-efficient-mixing/


