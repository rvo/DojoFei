# Coder Dojo: Propuesta para la creación de un espacio de aprendizaje y colaboración en temas de desarrollo de software para la Facultad de Estadística e Informática.

## Resumen:

Un &quot;Coder Dojo&quot;, es un lugar donde se reúnen personas interesadas en aprender, practicar, perfeccionar y compartir experiencias relacionadas con técnicas de desarrollo y programación, aplicables a distintas áreas del desarrollo de software. La idea original se deriva de las artes marciales en donde de forma disciplinada, los asistentes compartan conocimiento para la resolución de problemas utilizando y aplicando prácticas ágiles como programación en pares, desarrollo dirigido por pruebas, entre otras prácticas. El objetivo de este tipo de reuniones es apoyar a los programadores en la creación de software  de calidad.

## Introducción

El término &quot;DOJO&quot; es un término derivado de las artes marciales, en el cual estudiantes o aprendices de distintas partes acudían a la práctica o enseñanza de las artes marciales modernas o la meditación.  Éstas actividades siempre se encontraban bajo la supervisión de un maestro de la vía o el camino, comúnmente llamado &quot;Sensei&quot;.

En el contexto tecnológico, se ha gestado una corriente similar para propiciar que personas interesadas en desarrollar sus habilidades de programación, se reúnan para resolver problemas de la vida real. En estas reuniones se realizan prácticas o **Katas** que entre otras cosas, tiene como objetivo que los asistentes puedan aprender lenguajes de programación nuevos o simplemente perfeccionar su estilo de desarrollo guiados siempre por buenas prácticas, en un ambiente de armonía y colaboración dentro de organizaciones o universidades.  Al inicio de la reunión se especifica un reto de programación a resolverse,  de tal manera que los asistentes utilicen sus habilidades para resolver el reto o bien, aprendan de otros asistentes. Ésta dinámica crea un ambiente de aprendizaje donde se utilizan prácticas ágiles como las que se señalan en XP &quot;_Extreme Programing&quot;_ por sus siglas en inglés, propiciando un ambiente de colaboración y aprendizaje basado en problemas.

En este documento se describe una propuesta para implementar un espacio &quot;Coder Dojo&quot; para que los estudiantes y académicos de la Facultad de Estadística e Informática compartan sus conocimientos y desarrollen sus habilidades en distintas áreas de programación, en un espacio de colaboración, incluyente y no competitivo con el único fin de aprender y que los asistentes puedan aplicar los conocimientos adquiridos en el desarrollo de proyectos derivados de las distintas Experiencias Educativas ofertadas en cada Programa Educativo de la Facultad de Estadística e Informática.

## Descripción de un &quot;Coder Dojo&quot;

Como se ha mencionado anteriormente, un Coder Dojo es un espacio destinado al aprendizaje y al perfeccionamiento de técnicas de programación, desarrollando habilidades cognitivas implícitas en el proceso de resolución de problemas. El principio básico de un Coder Dojo es el crear un ambiente seguro para el aprendizaje, sin restricciones de ninguna índole para aquellos interesados en aprender a programar. Principios derivados de metodologías ágiles como XP, son utilizados en estos espacios, permitiendo la aplicación de mejores prácticas y propiciando la familiarización de las mismas por parte de los asistentes, de tal manera que algunos principios que se pueden aplicar son: **Fallas** (ante la presencia de algún fallo hay una posibilidad de aprendizaje), **Redundancia** (se puede resolver el mismo problema desde distintas perspectivas), **Diversidad** (la diversidad de estilos de desarrollo y propuestas de solución predominan entre los asistentes), **Baby steps** (cada paso que lleve a la solución del problema debe ser pequeño, de tal manera que todos los asistentes comprendan el proceso y puedan replicarlo posteriormente).

En la práctica, a un &quot;Coder Dojo&quot; es preciso regirlo por valores, similar a un &quot;Dojo&quot; para el aprendizaje de las artes marciales, dichos valores pueden ser tomados de metodologías ágiles como XP, entre los cuales se mencionan los siguientes:

**Comunicación:** uno de los valores pilares de XP debido a que la comunicación es fundamental en todo grupo de trabajo, en el contexto de un Coder Dojo, la comunicación propicia a que los asistentes aprendan de alguien que sepa como resolver el problema con anticipación.

**Simpleza:** si un problema es simple no significa que sea fácil, el objetivo de la simpleza está ligado con tratar de resolver el problema de la forma más simple posible, la simpleza busca evitar el gasto innecesario de cualquier recurso.

**Retroalimentación:** la retroalimentación en un equipo de trabajo complementa a la comunicación y a la simpleza, de tal manera que mediante la retroalimentación, es posible desarrollar habilidades de forma más rápida y con un nivel de comprensión mayor.

**Coraje/valentía:** ante cualquier reto es importante vencer el miedo, en el contexto de programación es común el miedo a no poder resolver algún problema, mismo que se ve influenciado o alimentado por falta de apoyo o asesoría adecuada sobre el problema a resolver, aunado a tener que asumir las consecuencias de no poder lograr el objetivo planteado. El coraje se complementa con valores anteriormente mencionados con el objetivo de obtener información adecuada para enfrentar un problema o reto.

**Respeto:** El valor más importante es el respeto, si el equipo no tiene respeto por el espacio ni por los compañeros es muy probable que no se consiga ningún objetivo.

Para que un &quot;Coder Dojo&quot; pueda ser implementado es necesario que cuente con las siguientes características:

-  **Espacio:** el espacio físico necesario para que todos los asistentes puedan trabajar sin contratiempos.
-  **Equipo de cómputo:** usualmente los asistentes a un &quot;Coder Dojo&quot; llevan sus propios equipos, considerando esta premisa, solo es necesario una laptop para proyectar el reto a resolver, así como un proyector.
-  **Pizarrón:** en algunos casos el uso del pizarrón contribuye a la transmisión de ideas, o para realizar prototipos de interfaces o diagramas de forma rápida.

Del mismo modo, para cada sesión del Dojo, es necesario destacar algunas actividades fundamentales para su correcto funcionamiento como las que se mencionan a continuación:

-  **Brindar una introducción antes de iniciar el reto y una retrospectiva al finalizar la sesión.**
- Escribir pruebas  tan buenas como el código.
-  **Mostrar los avances y el trabajo realizado durante la sesión.**
- Tener mecanismos de moderación o facilitación.

Una introducción y una moderación adecuadas permiten que se viva la experiencia de estar aprendiendo durante la sesión. La restrospectiva asegura que se realicen actividades de reflexión sobre lo aprendido. Tener una serie de pruebas y escribir código permite que se evalúen los resultados y que el programa trabaje según lo esperado. Por último, el mostrar el trabajo realizado permite retroalimentación con el objetivo de aprender e implementar mejores prácticas de desarrollo.

Los asistentes al Coder Dojo, deberán resolver el reto utilizando la técnica de desarrollo basado en pruebas TDD, teniendo la libertad de elegir el lenguaje de su preferencia. Para llevar a cabo una sesión en el Coder Dojo existen formatos establecidos, mismos que se describen a continuación:

**Kata preparada:** En este formato se propone un reto ya resuelto antes de entrar a la reunión, de tal forma que la solución a este reto o problema es presentada ante la audiencia. La solución se presenta paso a paso desde el inicio explicando a los participantes o asistentes como se llegó al proceso de solución y permitiendo cuestionamientos y sugerencias sobre la solución. El objetivo de esta dinámica es que todos los asistentes puedan reproducir los pasos hasta llegar a la solución del problema de manera individual.

**Randori:** En este formato los participantes resuelven un reto o problema en conjunto siguiendo prácticas de desarrollo basado en pruebas o &quot;TDD&quot; y programación en parejas, para ello es necesario definir un piloto y copiloto antes de empezar a resolver el problema. Una vez definidos el piloto y copiloto, se asigna una cantidad de tiempo o &quot;Round&quot; de entre 5 y 7 minutos para empezar a escribir las pruebas, así como el código necesario para pasar las pruebas. Cuando el tiempo haya finalizado, el piloto pasa a formar parte de la audiencia, el copiloto se vuelve piloto y de los asistentes se designa un nuevo copiloto. En este tipo de actividad la audiencia es libre de hacer recomendaciones para refactorizar el código y sugerir optimizaciones.

El objetivo de generar este tipo de dinámicas es que los asistentes puedan practicar y discutir sobre temas relacionados con el desarrollo de software, destacando algunos como:

- Desarrollo Ágil
- Programación Orientada a Objetos
- Desarrollo Basado en Pruebas
- Desarrollo Web
- Lenguajes de programación
- Paradigmas de desarrollo
- Patrones de diseño
- Uso e implementación de frameworks de desarrollo
- Algoritmos y resolución de problemas
- Conectividad con bases de datos
- Técnicas para serialización de objetos en la Web
- Técnicas para comunicación en red

## Funcionamiento de una sesión del &quot;Coder Dojo&quot;

Tomando como base la experiencia en otras reuniones de programadores y en experiencias adquiridas por universidades se plantea el siguiente mecanismo de trabajo para las actividades a realizar en el Dojo:

### Elección del problema (10 minutos máximo)

Al inicio de la sesión se elige el problema a resolver, así como el tipo de dinámica a seguir **&quot;Kata&quot; o &quot;Randori&quot;**

### Discusión del problema (hasta 20 minutos)

Una vez elegido el tema, se procede a tener una actividad de lluvia de ideas para identificar posibles soluciones al problema

### Sesión para codificar (hasta 2 horas)

Se realiza la sesión de pruebas y codificación hasta resolver el problema planteado, se sigue una dinámica definida y prácticas de desarrollo basado en pruebas, así como programación en pares.

### Retrospectiva (hasta 20 minutos)

Una vez finalizado el tiempo de desarrollo los asistentes a la reunión dejan de programar, incluso aquellos que no han resuelto el problema completamente, con el objetivo de compartir el aprendizaje y la experiencia adquirida con el resto del grupo.

## Resultados esperados

Debido a que el objetivo de implementar un &quot;Coder Dojo&quot; es el contar con un espacio para fomentar el aprendizaje colaborativo, algunos de los resultados esperados en la implementación del Dojo se describen a continuación:

- Incrementar el interés por parte de los estudiantes inscritos a los Programas Educativos ofertados en la Facultad de Estadística e Informática, para participar en actividades relacionadas con la programación.
- Fomentar la adopción de mejores prácticas de desarrollo (seguridad, cobertura de código, patrones de diseño, entre otras) por parte de los asistentes a las reuniones del Dojo.
- Incrementar las habilidades de programación de los asistentes a las reuniones.
- Contribuir a que los estudiantes de la Facultad de Estadística e Informática apliquen los conocimientos adquiridos en el Dojo en Experiencias Educativas relacionadas con el desarrollo de software y programación.
- Fomentar el trabajo en equipo entre los asistentes.
- Contribuir a que los asistentes compartan sus intereses en conceptos y prácticas en el área de desarrollo de software.
- Fomentar la adopción de técnicas y metodologías de desarrollo ágil en el desarrollo de software.
- Fomentar una cultura para compartir conocimientos con la Comunidad Universitaria de la Facultad de Estadística e Informática.
- Descubrir a candidatos potenciales para participar en el Centro de Desarrollo de Software de la Facultad de Informática.
- Contribuir a cerrar la brecha tecnológica entre académicos y estudiantes.
- Crear un ambiente donde los estudiantes desarrollen su sentido de pertenencia con la Facultad y la Institución.
