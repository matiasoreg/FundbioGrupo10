# Estado del arte
### Modelo interregional de Asia
En regiones como Asia y África, donde la validación de un algoritmo capaz de detectar automáticamente los parásitos de la malaria y contar con precisión los leucocitos en la muestra de de gota gruesa es sumamente necesario. El proyecto citado se enfoca en la detección de la malaria en entornos con recursos limitados, mediante la creación de un microscopio portátil y un teléfono inteligente capaces de producir solo imágenes de baja calidad. Este método puede abordar la escasez de personal y equipos médicos. Asimismo, el modelo cuenta con el análisis de imágenes de baja calidad, lo cual es crucial para ayudar en los procesos de toma de decisiones en países subdesarrollados con recursos médicos limitados.

Las principales contribuciones del proyecto son las siguientes:

1. Desarrollo de algoritmos generalizados: Cuenta con un algoritmo versátil capaz de detectar parásitos de la malaria y contar glóbulos blancos en distintos conjuntos de datos de muestras de gota gruesa de Asia y África subsahariana.

2. Aborda el problema de las imágenes borrosas resultantes de la interfaz entre la óptica de los teléfonos móviles y los microscopios mediante un algoritmo desarrollado específicamente para esta tarea. Asimismo, el modelo utiliza imágenes de baja calidad de Sudán en África subsahariana, asegurando su aplicabilidad en áreas con recursos limitados.

2. Sistema portátil de detección de malaria: El sistema portátil integra un microscopio con un teléfono inteligente, con una interfaz fácil de usar. Se presenta un modelo de microscopio móvil que incorpora las funcionalidades de los microscopios convencionales, permitiendo un aumento de 1000x.

3. Evaluación automática de la concentración de parásitos: Se ha creado una interfaz gráfica de usuario (IGU) eficiente y fácil de usar para la detección automática de la malaria, permitiendo a los usuarios remotos crear perfiles personales y cargar resultados de pruebas. El sistema desarrollado evalúa automáticamente la concentración de parásitos de la malaria en frotis de sangre fina y gruesa, mostrándolos en la interfaz. Este sistema agiliza el acceso de los médicos a los indicadores de diagnóstico, reduciendo los costes laborales y facilitando el almacenamiento local de imágenes microscópicas y datos de diagnóstico. En consecuencia, contribuye al establecimiento de una base de datos médica completa de pacientes y conserva valiosos recursos médicos. [4]

### Microscopios existentes
| Microscopio | Descripción |
|-------------|-------------|
| UC2 [![UC2.jpg](https://i.postimg.cc/TYQ3Bx6S/UC2.jpg)](https://postimg.cc/MvMwjhXb) | Microscopio óptico digital versátil y fácil de usar, diseñado para aplicaciones educativas y de laboratorio donde se requiere observación de muestras con alta calidad de imagen y la capacidad de documentar. [2]|
| mesoSPIM [![mesoSPIM.png](https://i.postimg.cc/BQqJszZK/mesoSPIM.png)](https://postimg.cc/9zN6YJ7m) | Utiliza una iluminación selectiva,  es capaz de capturar imágenes tridimensionales de toda la muestra de forma rápida y eficiente.[3] |
| SimpleZ [![SimpleZ.jpg](https://i.postimg.cc/vZZfKM42/SimpleZ.jpg)](https://postimg.cc/0bhz6Td7) | Basado en el **Estereo Microscopio DZ Stereo Microscope** y cámara digital de Euromex, guarda todas las imagenes un sólo archivo ZIP para poder ser procesadas posteriormente con aplicaciones.[4] |
### Patentes existentes
| Patente | Descripción |
|-------------|-------------|
| [![pantente1-1.jpg](https://i.postimg.cc/DfxwcjWn/pantente1-1.jpg)](https://postimg.cc/6TGKWhLm) [![patente1-2.jpg](https://i.postimg.cc/tRkYMRc0/patente1-2.jpg)](https://postimg.cc/K4KGKbFQ) |Metodología para entrenar un algoritmo para clasificar o detectar partículas o materiales en imágenes de microscopía. Un método incluye recibir una pluralidad de imágenes de microscopía de una muestra y una clasificación para la muestra. El método incluye entrenar un modelo o algoritmo de aprendizaje automático utilizando la pluralidad de imágenes, donde la primera imagen y la segunda imagen se proporcionan con una o más etiquetas que indican la clasificación. [5]|
|[![patente2.jpg](https://i.postimg.cc/j5k6GXWn/patente2.jpg)](https://postimg.cc/ygcSR0y7) | Metodología de entrenamiento de redes neuronales convolucionales utilizando la adquisición de imágenes de microscopio asistida por computadora y la preclasificación de imágenes de entrenamiento para objetos biológicos de interés. Los métodos combinan el uso de una plataforma de escaneo automatizado, análisis de imágenes en tiempo real paralelo al proceso de escaneo y una interfaz de usuario para revisar la preclasificación realizada por el software. [6]|
| [![Patente3-1.jpg](https://i.postimg.cc/CxcKccrj/Patente3-1.jpg)](https://postimg.cc/bZ28J9hJ) [![Patente3-2.jpg](https://i.postimg.cc/fyYL5Z1L/Patente3-2.jpg)](https://postimg.cc/SYNkx0SF) | Método de captura de imágenes que se procesa con un algoritmo de aprendizaje automático especializado en identificar rasgos fenotípicos celulares relacionados con los rasgos genéticos, epigenéticos o genómicos de interés. El algoritmo se entrena utilizando un conjunto de datos de entrenamiento, valga la redundancia, que comprende datos de imágenes celulares y datos de secuenciación de ácidos nucleicos. [7]|
# Lista de requerimentos
[![FUNCIONAL.jpg](https://i.postimg.cc/XNkY8tcD/FUNCIONAL.jpg)](https://postimg.cc/yWWK6QGF) [![Nofuncional.jpg](https://i.postimg.cc/7PgD9g9P/Nofuncional.jpg)](https://postimg.cc/5jNZNQDD)
# Propuesta de solución
Desarrollar un microscopio portátil con un software automatizado integrado que permita la diferenciación de los tipos de Plasmodium, asegurando así una alerta temprana de la presecencia de los distintos tipos malaria en áreas con recursos limitados y escasez de personal especializado en laboratorios médicos.

# Referencias bibliográficas
- [1] Y. Zhong et al., “Efficient Malaria Parasite Detection From Diverse Images of Thick Blood Smears for Cross-Regional Model Accuracy,” vol. 4. Institute of Electrical and Electronics Engineers (IEEE), p. 226, Nov. 23, 2023, doi: 10.1109/ojemb.2023.3328435.
- [2] Maia Chagas A, Prieto-Godino LL, Arrenberg AB, Baden T (2017) The €100 lab: A 3D-printable open-source platform for fluorescence microscopy, optogenetics, and accurate temperature control during behaviour of zebrafish, Drosophila, and Caenorhabditis elegans. PLoS Biol 15(7): e2002702. https://doi.org/10.1371/journal.pbio.2002702
- [3] F. Voight, D. Kirschenbaum, “The mesoSPIM initiative: open-source light-sheet microscopes for imaging cleared tissue”, Nature Methods, vol 16, pp. 1105 -1108, Noviembre 2019.
- [4] “SimpleZ - A.COLOMA Winkoms Open Microscopy”. A.COLOMA Winkoms Open Microscopy. Accedido el 19 de abril de 2024.  https://acolomamicroscopis.com/portal/estereo_microscopio_foco_extremo_deepfocus/
- [5] R. Smith , “MACHINE LEARNING CLASSIFICATION AND TRAINING FOR DIGITAL MICROSCOPY IMAGES” U.S. Patent 10 , 255 , 693 B2, April 9, 2019.
- [6] A. Plesch and Schwetzingen, “AND CLASSIFICATION OF OBJECTS OF INTEREST IN MICROSCOPE IMAGES BY SUPERVISED MACHINE LEARNING ( 71 ) Applicant : MetaSystems Hard & Software GmbH , Altlussheim ( DE ).”
- [7] J. Stamatoyannopoulos, S. Akilesh , “Methods of Analyzing Microscopy Images Using Machine Learning” U.S.20230274423A1, Agosto 31, 2023.
