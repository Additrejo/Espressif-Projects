# Espressif Projects - Comunicaciones.

![Proyecto](https://img.shields.io/badge/Proyecto-Espressif_Projects-blueviolet?style=for-the-badge) ![Área](https://img.shields.io/badge/Área-Electrónica-blue?style=for-the-badge) ![Status](https://img.shields.io/badge/Status-Activo-brightgreen?style=for-the-badge)    

![alt text](Comunicaciones_portada.png)
<!--------------------- PROYECTO DE LABORATORIO -------------------------->
 
<!--![Proyecto](https://img.shields.io/badge/Proyecto-COLMENA%202-darkorange?style=for-the-badge)-->

<!--------------------- ETIQUETAS DE ÁREA DEL PROYECTO -------------------------->
   
<!--![Área](https://img.shields.io/badge/Área-Estructuras%20(CAD)-orange?style=for-the-badge) -->
<!-- ![Área](https://img.shields.io/badge/Área-Robótica-purple?style=for-the-badge) -->

<!-------------------- ETIQUETAS DE ESTATUS DEL PROYECTO ------------------------->

<!-- ![Área](https://img.shields.io/badge/Área-Simulación-green?style=for-the-badge) -->
<!--![Status](https://img.shields.io/badge/Status-En%20Pausa-yellow?style=for-the-badge) -->
<!--![Status](https://img.shields.io/badge/Status-Completado-blue?style=for-the-badge) -->
<!-- ![Status](https://img.shields.io/badge/Status-Archivado-gray?style=for-the-badge) -->

---
<!-------------------- DESCRIPCIÓN Y OBJETIVOS DEL PROYECTO ------------------------->


## Descripción y objetivos
Esta carpeta contiene el desarrollo y validación de firmware en microcontroladores ESP32 (y otros de la familia Espressif), enfocado específicamente en la interacción digital y el intercambio de información a través de sistemas de comunicación y protocolos de red.

Aquí se almacenan códigos de prueba, ejemplos de implementación, librerías personalizadas y proyectos completos que demuestran cómo el ESP32 puede gestionar la conectividad IoT, el control remoto y la monitorización a distancia utilizando diversas tecnologías inalámbricas y cableadas.

* **Objetivo Principal:** Centralizar, versionar y documentar el código necesario para implementar diversos tipos de interfaces de comunicación, facilitando su reutilización e integración rápida en sistemas embebidos complejos y redes de IoT.
* **Objetivos Secundarios:**
    * **Biblioteca de Referencia:**  Mantener una base de código probada para cada tipo de tecnología de comunicación (como LORA, ZIGBEE, Wifi, BLE, CAN, I2C, etc.), detallando diagramas de conexión, configuraciones de transceptores, parámetros de red y requisitos de antena/potenci
    * **Aceleración del Desarrollo:** Proveer bloques de construcción de software (drivers, tareas de FreeRTOS especializadas para comunicaciones) funcionales para reducir el tiempo de desarrollo de nuevos prototipos conectados.
    * **Validación de Hardware:** Servir como banco de pruebas para verificar el correcto funcionamiento de transceptores, módulos de radio, antenas, niveles de señal y tiempos de respuesta antes de la implementación final.
---

## 📊 Gestión del Proyecto

Toda la gestión de tareas, sprints y seguimiento de issues se maneja a través de nuestro tablero de GitHub Projects.

**➡️ [Ir al Tablero del Proyecto](https://github.com/users/Additrejo/projects/2)**

---

## 📜 Tabla de Contenidos

- [Espressif Projects - Comunicaciones.](#espressif-projects---comunicaciones)
  - [Descripción y objetivos](#descripción-y-objetivos)
  - [📊 Gestión del Proyecto](#-gestión-del-proyecto)
  - [📜 Tabla de Contenidos](#-tabla-de-contenidos)
  - [👥 Equipo y Responsables](#-equipo-y-responsables)
  - [🛠️ Stack Tecnológico y Componentes](#️-stack-tecnológico-y-componentes)
    - [Software](#software)
    - [Hardware y Componentes Clave](#hardware-y-componentes-clave)
  - [📁 Estructura del Repositorio](#-estructura-del-repositorio)
  - [🚀 Instalación y Puesta en Marcha](#-instalación-y-puesta-en-marcha)
  - [💡 Uso y Operación](#-uso-y-operación)
  - [📚 Documentación Adicional](#-documentación-adicional)
  - [⚖️ Licencia](#️-licencia)

---

## 👥 Equipo y Responsables

| Nombre | Rol en el Proyecto | GitHub |
| :--- | :--- | :--- |
| AddiTrejo | Desarrollador | [@additrejo](https://github.com/additrejo) |


---

## 🛠️ Stack Tecnológico y Componentes

Lista del software, hardware y componentes clave utilizados.

### Software
* **Firmware (IDE):** [VS Code + PlatformIO](https://code.visualstudio.com/) | [Arduino IDE](https://docs.arduino.cc/software/ide/) | [ ESP-IDF](https://idf.espressif.com/)
* **Esquematicos:** [Cirkit Designer IDE](https://app.cirkitdesigner.com/)
* **Librerias:** Carpeta - Librerias.
* **Herramientas:** Carpeta - Herramientas.

### Hardware y Componentes Clave
* **Microcontrolador:** Carpeta - Microcontroladores Espressif 
* **Sensores:** Carpeta -  sensores.
* **Actuadores:** Carpeta - Actuadores.
* **Comunicaciones:** Carpeta - comunicaciones.
---

## 📁 Estructura del Repositorio

 * **[I2C:](https://github.com/Additrejo/Espressif-Projects/tree/main/Comunicaciones/I2C)** Esta carpeta contiene los proyectos relacionados con el protocolo de comunicación I2C.

---

## 🚀 Instalación y Puesta en Marcha

Instalación de cada IDE:

* [VS Code + PlatformIO](https://code.visualstudio.com/) 
* [Arduino IDE](https://docs.arduino.cc/software/ide/) 
* [ESP-IDF](https://idf.espressif.com/)


---

## 💡 Uso y Operación

Cómo ejecutar el proyecto una vez instalado.

1. Selecciona el componente a probar (ej. un sensor nuevo.)

2. Navega a la carpeta correspondiente.

3. Revisa el README del componente para ver conexiones y configuraciones.

4. Conecta el hardware según el diagrama.

5. Compila y sube el código a tu IDE.

6. Observa los resultados en el monitor serie.

Si funciona bien, felicidades, no olvides etiquetarnos en tu proyecto.

---

## 📚 Documentación Adicional

Enlaces a documentación más detallada, que no encaja en el README.

* [Wiki del Proyecto](https://github.com/tu-organizacion/tu-repo/wiki) (¡Altamente recomendado usar el Wiki de GitHub!)

---

## ⚖️ Licencia

Si este repositorio te ayudó, agradeceremos los creditos.