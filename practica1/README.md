
# Instrucciones de compilación y ejecución

Estos son los pasos recomendados para configurar, compilar y ejecutar el proyecto `Practica1` con CMake en Linux.

Requisitos
- CMake >= 3.10
- Compilador con soporte C++17 (por ejemplo g++ 7+ o clang++ 6+)

Opciones (desde la raíz del repositorio)

- Configurar y compilar (modo Release):

```bash
cmake -S practica1 -B practica1/build -DCMAKE_BUILD_TYPE=Release
cmake --build practica1/build --config Release -- -j$(nproc)
```

- Alternativa: entrar a la carpeta `practica1` y compilar ahí:

```bash
cd practica1
mkdir -p build
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release -- -j$(nproc)
```

- Compilar en modo Debug:

```bash
cmake -S practica1 -B practica1/build -DCMAKE_BUILD_TYPE=Debug
cmake --build practica1/build --config Debug -- -j$(nproc)
```

Ejecutar el binario

- El ejecutable se llama `main` y se coloca en `practica1/build`.
	- Desde la raíz del repo:

```bash
./practica1/build/main
```

	- O desde dentro de `practica1/build`:

```bash
./main
```

Limpiar la compilación

```bash
cmake --build practica1/build --target clean
```

Notas y solución de problemas comunes
- Si la compilación falla por errores en `gradebook.h`, revisa que los nombres de parámetros de plantilla no se 'sombreen' con nombres de variables (ejemplo: `template<typename T, int ALUMNOS, int MATERIAS>`).
- Si faltan archivos fuente, asegúrate de que `src/` contenga `main.cpp` y los headers/implementaciones necesarias.
- Para ver más detalle del error de compilación, ejecuta el comando `cmake --build practica1/build` sin `-j` para obtener salidas ordenadas.

Si quieres, puedo añadir un pequeño script `build.sh` para automatizar estos pasos.

