# Array estático (stack) — agenda_v1.cpp

Se usan **arrays** (`tipo nombre[tamaño]`) para almacenar datos en el **stack**. 
No requieren liberación manual — la memoria se libera automáticamente al salir 
de la función.

⚠️ **Riesgo:** Acceder a un índice fuera de rango (ej: `nombres[5]` en array 
de 5 elementos) genera **comportamiento indefinido**. El programa puede:
- Fallar inmediatamente (crash)
- Corromper datos adyacentes en memoria
- Parecer funcionar correctamente (el peor caso, difícil de debuggear)

# Array dinámico con redimensión (heap) — agenda_v2.cpp

Para este caso ya usamos las referencias, el new y delete, porque trabajamos con el heap. Recordar que, cuando vamos a crear el vector del dato, hay que pasarlo con puntero y asignarlo con new para poder crear esa "variable". Ahora bien, cuando se hacen las redimensiones debemos tomar en cuenta liberar la memoria vieja (sin redimension) para luego si poder asignar la redimensión que queremos.
Por ultimo, no olvidar el delete al final para liberar definitivamente la memoria

# Paso por valor, referencia y puntero — funciones.cpp

### Conclusión
- **Valor**: Copia. Seguro pero lento para objetos grandes.
- **Referencia**: Alias directo. Eficiente, no puede ser nulo.
- **Puntero**: Dirección. Flexible (puede ser nullptr), más verboso.

### Regla práctica
> "Objetos pequeños (int, char) → valor. Objetos grandes (string, arrays) → referencia const. Si necesito modificar o puede ser opcional → referencia normal o puntero."