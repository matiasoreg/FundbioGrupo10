# Introducción
## 1. Definición OpenHardware OpenSoftware
"Open Hardware" se refiere a aquel cuyo interfaz o software es de libre uso con el fin de estudiarlo, modificarlo y distribuirlo sin restricción alguna. De esta forma se accede a la posibilidad de compartir tecnología. [1]

Sin embargo, es fundamental que los términos de distribución cumplan con ciertos requerimientos. En primero lugar, el hardware deberá incluir la correcta documentación de los archivos propios del mismo ya sea físico o virtual; así como la clarificación sobre qué partes del diseño estarán siendo liberadas; asimismo, incluir software de código abierto si es necesario; por otro lado, la licencia deberá permitir modificaciones y distribución del hardware sin el requerimiento de regalías, sin embargo podría solicitar atribuciones; además, no deberá discriminar a ningún grupo social; finalmente, los derechos de la licencia serán otorgados a los redistribuidores. [1]

Con respecto al uso del software libre, este promueve el aprendizaje pues otros pueden construir sobre estos para que pue da ser estudiado, usado y transformado según las necesidades o preferencias del modificador.[2]


## 2. Contexto de la Malaria en el Perú
La malaria es la enfermedad parasitaria más importante del mundo, causa una enorme carga de morbimortalidad en zonas endémicas. Es transmitida por mosquitos hembra Anopheles y resulta de la infección de un huésped vulnerable por parásitos Plasmodium. Las especies que afectan al humano son las siguientes: Plasmodium falciparum, Plasmodium vivax, Plasmodium ovale, Plasmodium malariae y Plasmodium knowlesi. Siendo las más frecuentes: Plasmodium, vivax y falciparum.[3]

Respecto al problema de salud que representa, casi la mitad de la población mundial se encuentra en riesgo de padecer malaria, la enfermedad es especialmente endémica en 86 países tropicales y subtropicales, abarcando todo el África subsahariana, así como grandes áreas del Sudeste Asiático, el Mediterráneo Oriental, el Pacífico Occidental, y las Américas.[3]

En el Perú, la malaria se concentra principalmente en el departamento de Loreto, donde la transmisión se mantiene en comunidades rurales y periurbanas. Loreto es el departamento con el nivel de vulnerabilidad más alto. Según el Centro Nacional de Epidemiología, Prevención y Control de Enfermedades, durante el año 2023, de los 22552 casos acumulados, el 95.9% de casos reportados de malaria se concentró en los departamentos de Loreto y Amazonas, además de ser la especie Plasmodium vivax, la que agrupa la mayor cantidad de casos[4]. Esta situación se debe a que en la región amazónica no se cuentan con pruebas para el diagnóstico oportuno a las personas con síntomas de malaria, así como por la falta de medicamentos esenciales y adecuados para su tratamiento.[5]


# Diagrama de Ishikawa

[![Ishikawa.jpg](https://i.postimg.cc/YCBrkdSW/Ishikawa.jpg)](https://postimg.cc/TpQMJqgd)

# Definición de la problemática
La falta de un proceso automatizado, de bajo coste y eficaz para la diferenciación de las especies de Plasmodium con un microscopio en el Perú genera dificultades en la alerta temprana de la malaria y en la recopilación precisa de datos epidemiológicos.

# Estado del arte - Evidencia Científica 
El estado del arte se refiere a una técnica de investigación documental que facilita el análisis del conocimiento previamente desarrollado y registrado en textos en un campo específico. Al llevar a cabo un estado del arte, se fomenta la difusión de información, se estimula la búsqueda de conocimiento y se permite la comparación con otros cuerpos de conocimiento similares, lo que ofrece diversas perspectivas para entender el problema abordado. En resumen, proporciona múltiples enfoques para el estudio de una cuestión determinada. [6].

En el caso de nuestro proyecto, debido a la rama tocada en clase, lo direccionamos a solucionar la problemática de manera tecnológica, por ende, se realiza la búsqueda de artículos provenientes de fuentes viables y verificables referencien al uso de soluciones tecnológicas aplicadas a la problemática asignada.

La comunidad científica ha realizado aportes previamente sobre nuestro tema de interés. De hecho han desarrollado tecnología open-hardware acerca de "Software de Reconocimiento Automatizado". Además es importante definir para nuestro proyecto, el campo de aplicación al que queremos llegar; si bien los equipos de investigación científica ya cuentan con una gran presencia en las industrias principales, su valor en el mercado naturalmente corresponde a sus características técnicas y va de la mano con el rendimiento necesario para determinados sectores.

Conociendo toda esa información, es posible profundizar sobre cómo es tratado el desarrollo de nuevas tecnologías open-hardware. Es de saber que un microscopio al día de hoy se encuentra presente en una gran variedad de sectores, dentro de ellos, la investigación científica la cual cada vez requiere de nuevas técnicas de estudio específicas para su objetivo. Por ejemplo, si ampliamos nuestras fronteras a países extranjeros, existen diversos métodos para la detección de malaria. Cada uno de estos métodos difiere en efectividad, tipos de equipos médicos, metodología, entre otros. Por hacer mención de algunos métodos ya existentes se describirá brevemente su metodología.

**1.- Frotis/extensión fina:** -Se toma una pequeña muestra de sangre del paciente para obtener un frotis que es llevado a analizar en un microscopio por un especialista, en base a la determinación de eritrocitos anormales se determina si el paciente presenta malaria.[7] 

**2.- Pruebas Rápidas de Diagnóstico (RDT):** -En este método también se hace uso de una muestra de sangre que se puede obtener mediante un pinchazo en el dedo, la diferencia radica en que la muestra se ingresa al dispositivo RDT que contiene reactivos específicps que determinan la presencia de *plasmodium* en la sangre. EL resultado se visualiza 15mn-20mn después mediante una linea que se traza en el dispositivo RDT producto de la reacción química.[8] 

**3.- Pruebas Moleculares:** -Estas pruebas, por su mecanismo de detección, ya presentan una mayor precisión, puesto que se detemermina mediante PCR si existe material génetico de la malaria en la sangre u otros fluidos biológicos. También mediante una muestra (generalmente sangre), se procede a extraer el ADN en su interior para proceder a purificarlo y realizar un PCR que servirá para amplificar regiones específicas del genoma del parásito de la malaria. La detección de ampliación de ADN refiere a un resultado positivo mientras que aquellas secuencias que no se amplificaron refiere a uno negativo.[9] 

**4.- Gota gruesa:** Con esta prueba se confirma la presencia de malaria a través de una muestra de sangre del paciente, esta se extiende sobre un portaobjetos de vidrio para posteriormente teñirla. Este método detecta la enfermedad incluso cuando el porcentaje de parásitos es baja en la sangre, lo que es ventajoso para un diagnóstico temprano [10].

**5.- Técnicas serológicas:** detección de anticuerpos, uso de las pruebas ELISA (ensayo por inmunoabsorción ligado a enzimas) y pruebas de inmunofluorescencia indirecta (IFI). La desventaja de este método es que no pueden distinguir entre una infección activa y una pasada. [10]

La malaria tiene seis  especies de, Plasmodium, P. falciparum, P. vivax, P. malariae, P. ovale  curtisi, P. ovale wallikeri  y  P. knowlesi [11]. Es de importancia saber que tipo de plasmodium tiene el paciente para que reciba el tratamiento adecuado, debido a que especie responde de manera diferente.

La microscopía manual sigue siendo una práctica común en el diagnóstico de la malaria y la investigación médica, pero su efectividad puede fluctuar debido a las disparidades en la formación y los métodos utilizados en el terreno. Los sistemas de diagnóstico automatizado, basados en técnicas de aprendizaje automático, prometen mejorar la uniformidad y la precisión de la microscopía en entornos de campo. [12]



# Referencias bibliográficas
[1] Open Source Hardware Association. Definition. [Online]. Disponible: https://www.oshwa.org/definition/ 

[2] Free Software Foundation. Free software is software that gives you the user the freedom to share, study and modify it. We call this free software because the user is free. [Online]. Disponible: https://www.fsf.org/about/what-is-free-software

[3]
R. Varo, C. Chaccour, and Q. Bassat, “Update on malaria,” vol. 155, no. 9. Elsevier BV, p. 395, Jun. 30, 2020, doi: 10.1016/j.medcli.2020.05.010.

[4] 
Centro Nacional de Epidemiología, Prevención y Control de Enfermedades, “Número de casos de malaria, Perú 2020 – 2024”,  Ene. 18, 2024. https://www.dge.gob.pe/portalnuevo/

[5] 
F. iO, “Situación de la malaria en Perú,” Fundación iO, Sep. 16, 2023. https://fundacionio.com/malaria-en-peru-2/

[6] N. P.  Molina, "HERRAMIENTAS PARA INVESTIGAR ¿Qué es el estado del arte?," Ciencia y Tecnología para la salud Visual y Ocular, no. 5, pp. 1 - 3, Julio - diciembre 2005.

[7]
D. K. Das, R. Mukherjee, and C. Chakraborty, “Computational microscopic imaging for malaria parasite detection: a systematic review,” Journal of Microscopy, vol. 260, no. 1, pp. 1–19, Jun. 2015, doi: 10.1111/jmi.12270.

[8]
“Current infectious disease reports,” SpringerLink, Apr. 11, 2024. https://link.springer.com/journal/11908 

[9]
L. Valdés, J. Quintero, M. Jiménez, P. Chaparro, and Sensibilidad, “Sensibilidad y especificidad de las técnicas moleculares PCR (Polymerase Chain Reaction), LAMP (Loop-mediated isothermal amplificaction), inmunocromatografícas (PDR – Pruebas de Diagnóstico Rápido) vs la microscopía en el diagnóstico de la malaria: una revision sistemática.,” vol. 6, no. 3. Universidad Regional Autónoma de los Andes, p. 1456, Sep. 01, 2023, doi: 10.61154/rucs.v6i3.2480.

[10]
“Repositorio Digital UNESUM: Malaria en Latinoamérica. Diagnóstico y situación epidemiológica actual”. Repositorio Digital UNESUM 19, abril, 2022 https://repositorio.unesum.edu.ec/handle/53000/5601

[11]
“Vista de Actualización de malaria | Revista Medica Sinergia”. Revista Medica Sinergia. 19, abr, 2019. https://www.revistamedicasinergia.com/index.php/rms/article/view/616/1063

[12] Das, D., Vongpromek, R., Assawariyathipat, T. et al. Field evaluation of the diagnostic performance of EasyScan GO: a digital malaria microscopy device based on machine-learning. Malar J 21, 122 (2022). https://doi.org/10.1186/s12936-022-04146-1
