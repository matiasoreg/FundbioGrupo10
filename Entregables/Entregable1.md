# Introducción
## Definición del término "Open Hardware"

El Open Hardware se refiere al hardware cuyo diseño y documentación están disponibles públicamente para que cualquiera pueda estudiarlo, modificarlo y redistribuirlo. Esto incluye esquemas eléctricos, planos de diseño y listas de materiales, junto con licencias que permiten la modificación y redistribución sin restricciones excesivas, promoviendo la transparencia y la colaboración de cualquier persona [1].

Ejemplos prominentes incluyen plataformas como Arduino y RepRap, que facilitan y promueven la innovación y el aprendizaje práctico en ingeniería y diseño. Este enfoque no solo reduce costos y da una mejor accesibilidad, sino que también fomenta la colaboración comunitaria y la creación de nuevas versiones y mejoras.

Recursos clave como la Open Source Hardware Association (OSHWA) y documentos como "The Open Source Hardware Definition" proporcionan directrices y fundamentos para el desarrollo y uso del hardware abierto, respaldando su impacto en la tecnología y la educación.

## Contexto social

En muchas regiones del Perú, especialmente en áreas rurales y menos favorecidas, las instituciones educativas enfrentan limitaciones significativas en términos de infraestructura y recursos. Esta situación no solo afecta la calidad de la educación, sino que también perpetúa ciclos de desigualdad social y económica.

La carencia de equipos esenciales, como los agitadores magnéticos, limita las oportunidades de aprendizaje práctico para los estudiantes, quienes son la próxima generación de profesionales de la salud. Sin acceso a herramientas adecuadas, los estudiantes no pueden desarrollar habilidades críticas necesarias para desempeñarse eficazmente en sus futuras carreras. Esto contribuye a un déficit en la formación técnica y profesional, que puede resultar en una fuerza laboral menos capacitada, lo que a su vez afecta la calidad de la atención médica en sus comunidades.

## Contexto clínico

En el ámbito clínico, la preparación y manejo precisos de compuestos y soluciones son esenciales para la realización de análisis diagnósticos y la administración de tratamientos médicos. Equipos como los agitadores magnéticos son fundamentales para asegurar la homogeneidad y consistencia en la preparación de estas mezclas. Sin acceso a tecnología adecuada durante la formación, los estudiantes no pueden adquirir las habilidades necesarias para manejar estos procesos en entornos clínicos reales.

### Características del agitador magnético

Es un dispositivo de laboratorio que se encarga de realizar mezclas homogéneas de manera estable [2]. 
- Mezcla soluciones que tenga una viscosidad de 100mPa
- Puede soportar hasta 4L
- Es recomendable que su sistema permita efectuar 400-800 rpm

## Problemática
Falta de acceso a agitadores magnéticos accesibles, precisos y adaptados a las necesidades de los laboratorios de enseñanza en las universidades.

### Fundamentación:

- Limitaciones económicas que impiden que universidades puedan adqquirir este tipo de dispositivos que a menudo son costosos. 

- Impacto en la educación práctica, sin acceso a estos dispositivos los estudiantes deben recurrir a métodos manuales que son menos precisos y más propensos a errores.


## Diagrama de Ishikawa

![Soft-Blue-Minimalist-Fishbone-Diagram-Graph.png](https://i.postimg.cc/dVDdH2rV/Soft-Blue-Minimalist-Fishbone-Diagram-Graph.png)


## Estado del arte - Evidencia científica 

|  Título del artículo | Autor(es) | Resumen |
| -------------------- | ---------- | -----------|
| Unidades de preparación centralizada de medicamentos: práctica esencial para la seguridad del paciente | Herranz y Pernia (2021) [3] | En el artículo científico, se analiza la importancia de la preparación de medicamentos en los Servicios de Farmacia Hospitalaria. Esta idea nace durante la pandemia de COVID-19 en la cual, por la coyuntura, se crearon tecnologías para la preparación de medicamentos necesarios, reduciendo los errores que un humano podría cometer. Las tecnologías usadas fueron: robots, bombas de dosificación y sistemas de código de barras. A pesar de los diferentes inventos y avances, sigue existiendo una brecha entre la implementación de las nuevas tecnologías y que tan disponibles/accesibles son. Por ende, el artículo llama a líderes capacitados para crear una nueva cultura donde se implementen estos nuevos elementos de seguridad para mejorar los procesos clínicos. |
| Premezclados como alternativa para el uso seguro de medicamentos intravenosos en escenarios de atención en salud | Matínez et al. (2022) [4] | El artículo de revisión plantea la posibilidad de usar premezclados de medicamentos como una alternativa de mejorar la calidad del tratamiento y de la atención que los pacientes reciben, específicamente para la terapia intravenosa. Se resalta el problema existente de la alta frecuencia de errores de medicación ya sea por dosis, etiquetados o proporciones incorrectas. Dicho problema genera altos índices de pérdidas y gastos innecesarios que podrían ahorrarse si se hicieran premezclados de dichos medicamentos. Esta alternativa, se estima, puede reducir los riesgos de contaminación, menor incidencia de complicaciones relacionadas con la terapia y mejorar la oportunidad de dispensación y optimización del trabajo. Para ello, se busca dar paso a la automatización de estos procesos, reduciendo significativamente la carga de trabajo humano y el tiempo invertido en preparar dichas mezclas. En consecuencia, se necesitarán equipos especializados en preparación y mezclado que garanticen la exactitud, higiene y calidad en la preparación de medicinas. |
|Monitoring Chemistry In Situ with a Smart Stirrer: A Magnetic Stirrer Bar with an Integrated Process Monitoring System | Cherkasov et al. (2020) [5] | El artículo busca mejorar el dispositivo de agitación magnética usado en laboratorios para la mezcla de sustancias agregándole varios parámetros que considera importantes al momento de efectuar una reacción química. El dispositivo es llamado "Smart Stirrer" (agitador inteligente) y permite controlar parámetros físicos en la reacción tales como temperatura, conductivilidad, espectro visible, velocidad de agitación y viscosidad. Estos datos son llevados inalámbricamente hacia un sistema externo, como una PC o smartphone, para su procesamiento y visualización en gráficos. La ventaja que posee es que gracias a su open-source software (software de código abierto), el usuario puede cambiar la programación de acuerdo a sus necesidades. El agitador inteligente es más barato que uno promedio y se espera que pueda ser útil en las investigaciones que requieran de mezclas exactas y de alto cuidado. |

## Propuesta

Diseño y fabricación 3D de un agitador magnético de bajo costo capaz de satisfacer las necesidades de un laboratorio para hacer mezclas.

## Referencias bibliográficas
[1] 
Definition (English). Jun. 2024. https://www.oshwa.org/definition/

‌[2]
IKA. https://www.ika.com/en/Products-LabEq/Magnetic-Stirrers-pg188/FAQ-cpfaq.html (accessed Sep. 03, 2024).

‌[3]
A. Herranz and S. Pernia, “Unidades de preparación centralizada de medicamentos: práctica esencial para la seguridad del paciente,” FARMACIA HOSPITALARIA, vol. 45, no. 04, pp. 163–164, Jun. 2021, doi: https://doi.org/10.7399/fh.11757.

[4]
S. P. Martínez Rojas, L. M. Ibatá Bernal, A. Taborda Restrepo,  J. G. Ariza, & K. Bonilla Arteaga, “Premezclados como alternativa para el uso seguro de medicamentos intravenosos en escenarios de atención en salud,” Revista Colombiana de Ciencias Químico - Farmacéuticas, vol. 51, no. 3, Mar. 2023, doi: https://doi.org/10.15446/rcciquifa.v51n3.100189.

‌[5]
N. Cherkasov, S. Baldwin, G. J. Gibbons, & D. Isakov, “Monitoring Chemistry In Situ with a Smart Stirrer: A Magnetic Stirrer Bar with an Integrated Process Monitoring System,” ACS sensors, vol. 5, no. 8, pp. 2497–2502, Aug. 2020, doi: https://doi.org/10.1021/acssensors.0c00720.
