# Problemática
## Contexto:
En el ámbito de la ingeniería biomédica, la preparación de mezclas médicas es una tarea crucial que involucra la combinación precisa de fármacos, soluciones y otros componentes para el tratamiento de pacientes. Este proceso se realiza en diversos entornos, como hospitales, clínicas y laboratorios, donde se utilizan mezclas para la administración de medicamentos, debido a que según estudios recientes, en el Perú , específicamente en la región de Lambayeque se ha reportado que la prevalencia de intoxicaciones medicamentosas durante un cierto periodo fue de 0.19 por cada 300 personas [1].

Este problema es especialmente relevante en la ingeniería biomédica debido a la necesidad de integrar tecnología avanzada para automatizar y controlar el proceso de preparación. Los avances en dispositivos y sistemas para la preparación de mezclas médicas deben garantizar no solo la precisión en la dosificación, sino también la estandarización y seguridad del proceso, minimizando el riesgo de errores humanos y variaciones en la calidad del producto final.

## Definición del Problema:
El problema específico que se busca resolver es la falta de consistencia y seguridad en la preparación de mezclas médicas. Esto puede manifestarse en errores en las proporciones de los componentes, contaminación cruzada, o variaciones en la concentración de los ingredientes activos. La ausencia de métodos estandarizados y de tecnologías adecuadas para la preparación precisa de estas mezclas puede llevar a resultados inconsistentes y, en consecuencia, a una administración ineficaz o peligrosa de los tratamientos médicos [2].
En términos concretos, el problema puede incluir:
- **Errores en la Dosificación:** Variaciones en la cantidad de fármaco o solvente, que pueden resultar en dosis incorrectas.
- **Contaminación y Seguridad:** Riesgos de contaminación debido a técnicas de preparación inadecuadas o falta de esterilidad.
- **Falta de Estandarización:** Ausencia de procedimientos estandarizados que aseguren la calidad uniforme de las mezclas preparadas.
- **Pérdida de tiempo:** El tiempo usado para mezclar medicinas manualmente puede ser usado para otras tareas.

## Impacto:
El impacto de una preparación inconsistente y poco segura de mezclas médicas es significativo y puede afectar a varios niveles:
- **A los Pacientes:** Los pacientes pueden experimentar efectos adversos, falta de efectividad del tratamiento, o incluso complicaciones graves derivadas de dosis incorrectas o contaminadas. Esto no solo pone en riesgo la salud del paciente, sino que también puede aumentar el tiempo de hospitalización y los costos asociados al tratamiento.
- **A los Profesionales de la Salud:** Los errores en la preparación pueden incrementar la carga de trabajo para los profesionales de la salud, quienes deben estar continuamente atentos a posibles problemas y corregir errores. Además, la falta de precisión puede generar un estrés adicional y aumentar el riesgo de errores en el manejo clínico.
- **A las Instituciones Médicas:** Las instituciones pueden enfrentar consecuencias económicas debido a demandas legales por errores médicos, costos adicionales para corregir problemas derivados de una preparación inadecuada, y una disminución en la confianza del paciente en la calidad de los servicios ofrecidos.
- **Al Sistema de Salud en General:** La incidencia de errores en la preparación de mezclas médicas puede contribuir a una carga significativa en el sistema de salud, con repercusiones en términos de costos, recursos y calidad del cuidado. Los datos de estudios y reportes sobre incidentes relacionados con la preparación de mezclas médicas muestran que estos errores son una causa importante de eventos adversos en la atención médica, lo que subraya la necesidad de mejorar los sistemas y tecnologías involucradas.

# Propuesta de solución
### Descripción de la solución
La solución propuesta es la creación de un agitador magnético de bajo costo, con pantalla LCD para controlar velocidad y temperatura. Esta solución está diseñada y dirigida a hospitales y postas clínicas en zonas de bajos recursos, como universidades de todo el perú para la implementación en laboratorios de enseñanza. Se logrará usando técnicas de impresión 3D y elementos electrónicos de bajo costo con Arduino.

### Características:
- Impresión 3D: Se usará materiales como el PLA o ABS, materiales resistentes y económicos, se logrará tener una estructura duradera y estable. El ABS llega a resistir temperaturas de 100 grados, suficiente para el uso de este dispositivo [3].
- Fuente de poder: El dispositivo funciona girando imanes adheridos al motor, el cual crea un campo magnético que gira el imán dentro de la muestra. Se usará un ventilador de ordenador para ahorrar energía y costos. Así también será posible modificar la velocidad de las rotaciones. Por otro lado, se usarán resistencias calefactoras para aumentar la temperatura de la sustancia [4].
- Sistema de control: Usando un potenciómetro y distinto software, se puede programar la velocidad y las RPM con la cual gira el imán dependiendo de las necesidades según el volumen y el tipo de líquido que se usa. De una manera similar, se controlará el aumento de temperatura, potenciado por una fuente de batería recargable.
- Temporizador y notificación: Se configura el tiempo de agitado y al terminar sonará una notificación que advertirá del fin del agitado.

### Beneficios
- A parte del beneficio económico para los laboratorios, la visión del prototipo se enfoca en agilizar la tarea de los diferentes profesionales que trabajan ahí, ya que el agitador es un dispositivo automatizado que puede estar trabajando durante largos periodos de tiempo.
- El mantenimiento también es sencillo, al implementar elementos de fácil acceso y manipulación, el cuerpo del dispositivo es más duradero. 
- En universidades, se puede usar este dispositivo para poder ser usado como herramienta que ayude a la enseñanza, al no ser tan cara como un agitador magnético comercial, en caso de algún accidente, puede ser reparada fácilmente por el alumno.
- Se podrá controlar temperatura y velocidad de rotación para una mejor mezcla. Parámetros necesarios en un agitador magnético. [5]

### Viabilidad técnica
- Para desarrollo: Se necesita tener conocimientos sobre el diseño y prototipado 3D, al estar usando programas de modelado, impresión 3D y prototipado electrónico proporcionados por la universidad. Se tiene que saber cómo operar estas máquinas de manera correcta para evitar accidentes. 
- Para prueba: Conocer los diferentes tipos de sustancias que se tienen que mezclar, y con qué frecuencia se van a mezclar, para poder determinar la potencia del motor y otros elementos importantes para el correcto funcionamiento del dispositivo. 
En este caso, se enfocará en encontrar las RPM óptimas para mezclar diferentes sustancias de manera homogénea. Las RPM necesarias para mezclar líquidos más densos serán mayores. Para soluciones acuosas, como agua y sales, se recomienda entre 500 a 1000 RPM, dependiendo de la viscosidad de la sustancia [6].





# Coherencia
## Contexto del Proyecto
## Objetivos del Proyecto
**Objetivo general:** 
Obtener mezclas farmacéuticas seguras y estables

**Objetivos específicos:**
- Optimizar tiempos en la mezcla de medicamentos 
- Estabilizar las reacciones regulando la velocidad de agitación y la temperatura
- Obtener productos que, en cantidad, se asemejen al valor de rendimiento teórico

## Justificación del Prototipo
## Alineación con el Problema
De acuerdo con la problemática, la mezcla de medicamentos presenta problemas en su estabilidad de reacción y con la contaminación a la que se encuentra expuesta. Como respuesta a estos problemas, se propone el diseño de un agitador magnético. Este prototipo permitirá al usuario tener control sobre la velocidad de las revoluciones así como sobre la temperatura de la solución. Asimismo, no será necesario usar baquetas u otros objetos de agitación manual, lo cual contribuye a mantener la muestra en un estado puro.

# Resumen
El problema que identificamos radica en la falta de consistencia y seguridad en la preparación de mezclas médicas, lo cual genera errores en la dosificación y pone en riesgo la salud de los pacientes. Por ello, proponemos el desarrollo de un agitador magnético de bajo costo, que será de utilidad en hospitales y laboratorios del Perú, así como en universidades, donde podrá ser utilizado como una herramienta de enseñanza. 

Utilizaremos la impresión 3D y componentes electrónicos económicos para la fabricación de este equipo, el cual, además de homogeneizar mezclas, controlará la velocidad y la temperatura, mejorando así la precisión y seguridad en la preparación de mezclas médicas.

## Resultados Deseados:
El desarrollo del agitador magnético busca mejorar la eficiencia y seguridad en la preparación de mezclas médicas, reduciendo el riesgo de errores humanos y garantizando la homogeneidad en las soluciones. Se espera que el prototipo permita a los hospitales y laboratorios en entornos de bajos recursos acceder a una tecnología asequible y funcional.

## Pasos a seguir:
- Empezar el modelado del agitador magnético utilizando un software CAD (como Autodesk Inventor)
- Adquirir los componentes electrónicos necesarios para la fabricación del agitador
- Implementar la programación del control del motor y el sistema de calefacción
- Desarrollar una interfaz de control sencilla, donde el usuario pueda ajustar parámetros como la velocidad de rotación y la temperatura
- Ensamblar los componentes electrónicos en el diseño impreso
- Llevar a cabo pruebas funcionales


# Referencias

[1] R. P. Nieto Risco y J. E. Oliva Morales, "Prevalencia de intoxicaciones medicamentosas en pacientes atendidos en un hospital de Lambayeque" Tesis de Licenciatura, Univ. Señor de Sipán, Chiclayo, Perú, 2024. [En línea]. Disponible: https://repositorio.uss.edu.pe/bitstream/handle/20.500.12802/12508/Nieto%20Risco%2C%20Roy%20Paul%20-%20Oliva%20Morales%2C%20Jesus%20Elizabeth.pdf?sequence=1&isAllowed=y

[2] A. Herranz and S. Pernia, “Unidades de preparación centralizada de medicamentos: práctica esencial para la seguridad del paciente,” FARMACIA HOSPITALARIA, vol. 45, no. 04, pp. 163–164, Jun. 2021, doi: https://doi.org/10.7399/fh.11757.

[3] Systèmes, D. ¿Qué resistencia pueden tener las piezas 3D? Dassault Systèmes. (2023, 29 marzo). https://www.3ds.com/es/make/solutions/blog/how-strong-can-3d-parts-be

[4] Conoce la importancia de las resistencias calefactoras y sus usos. (s. f.). Resistencias Eléctricas Industriales. https://juliomartineznaya.com/importancia-resistencias-calefactoras-usos/#:~:text=Este%20tipo%20de%20resistencias%20son,se%20desee%20calentar%20el%20contenido

[5] Inc, V. S. IT’S ALL A MATTER OF STIRRING: TIPS AND TRICKS TO CHOOSE THE BEST STIRRERS FOR YOUR LABORATORY. Velp Cientifica. (2022, 26 abril). https://www.velp.com/en-us/its-all-a-matter-of-stirring-tips-and-tricks-to-choose-the-best-stirrers-for-your-laboratory.aspx

[6] Mastering Magnetic Stirrer Techniques: Tips & Tricks for Efficient Mixing. Lab Hot Plates. (2024, 24 enero). https://labhotplates.com/mastering-magnetic-stirrer-techniques-tips-tricks-for-efficient-mixing/


