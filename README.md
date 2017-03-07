# Sección 1: Lógica #

Conociendo que en algoritmos se trabaja con los fundamentos de programación modular y
estructurada, que junto a la POO conforman el paradigma imperativo. Sabiendo además
que los problemas computacionales aceptan otro tipo de solución se pide:


1.  Investigar que se entiende por paradigmas declarativo.
 
1.  Determinar cuáles son las características propias de la programación lógica.
 
1.  Analizar su funcionamiento y realizar un programa que utilice hechos y reglas.

La temática del desarrollo queda a elección del grupo y se debe presentar un breve
documento explicando qué conceptos de lógica aplicaron para este desarrollo.

----------------------------------------------------------

 
**1-** Programación Declarativa, es un paradigma de programación basado en la lógica en el que se estudian de forma simple muchos aspectos avanzados de los lenguajes de programación modernos. 

**Características**

La Programación Declarativa, en contraposición a la Programación Imperativa es un paradigma de programación que está basado en el desarrollo de programas especificando o "declarando" un conjunto de condiciones, proposiciones, afirmaciones, restricciones, ecuaciones o transformaciones que describen el problema y detallan su solución.
La solución es obtenida mediante mecanismos internos de control, sin especificar exactamente cómo encontrarla (tan sólo se le indica a la computadora que es lo que se desea obtener o que es lo que se está buscando). No existen asignaciones destructivas, y las variables son utilizadas con transparencia referencial 
La programación declarativa es un estilo de programación en el que el programador especifica qué debe computarse más bien que cómo deben realizarse los cómputos. 


  **2-**  El paradigma lógico Tiene como característica principal la aplicación de las reglas de la lógica para inferir conclusiones a partir de datos. Conociendo la información y las condiciones del problema, la ejecución de un programa consiste en la búsqueda de un objetivo dentro de las declaraciones realizadas. 
  

**Características**

El paradigma tiene sus fundamentos en las teorías de la lógica proposicional. De ellas, se toman en particular las Cláusulas de Horn, que son una forma de lógica de predicados con una sola conclusión en cada cláusula y un conjunto de premisas de cuyo valor de verdad se deduce el valor de verdad de la conclusión: una conclusión es cierta si lo son simultáneamente todas sus premisas.
La programación lógica está basada en la noción de que el programa implementa una relación, en vez de una transformación. Los predicados son relaciones, que al no tener predefinido una “dirección” entre sus componentes, permiten que sus argumentos actúen indistintamente como argumentos de entrada y salida.
La recursividad como estrategia lógica para encontrar soluciones, junto con la utilización de listas para representar conjuntos de valores, son dos características típicas de los programas lógicos. 


**3- Hechos**

Un hecho, en PROLOG,es una relacion entre objetos.
Ejemplo:La capital de Francia es Paris. En Prolog se escribe capital(francia,paris).En general,la sintaxis es relacion(objeto,objeto,...).La relacion se conoce como el predicado y los objetos como los argumentos .

Los nombres de todos los predicados y argumentos deben de comenzar con una letra minuscula.

Primero,se escribe el predicado. Los argumentos se escriben separandolos mediante comas y encerrados entre parentesis.

Al final del hecho debe ir un punto.

En nuestro programa contenido de los vectores a y b hacen referencia a los valores de la tabla de verdad , estos valores son lo que les pertenece. 

 **-Reglas**

Una regla consta de dos partes,una cabeza y un cuerpo. La cabeza y el cuerpo estan unidos mediante el simbolo: -

cabeza:- cuerpo.

El cuerpo puede estar formado por varios hechos.

cabeza:- hecho1, hecho2, ...,hecho n.

La separacion: - se lee "si" ( la cabeza es verdad si el cuerpo es verdad )

En el switch se encuentra la cabeza , que es la opcion seleccionada por el usr, a esta le corresponden los hechos de cada  "case" pero solo uno puede ser el resultado derivado de los conectores logicos
