# Array estático (stack) — agenda_v1.cpp

Se usan vectores ([]) para almacenar los datos, en este caso quedan en el stack y no requieren liberar memoria. Es importante no colocar un indice del array que supere el que establecimos ya que nos generara error de puntero (no existe la posicion que estamos pidiendo o ingresando). Es el más sencillo de hacer

# Array dinámico con redimensión (heap) — agenda_v2.cpp

Para este caso ya usamos las referencias, el new y delete, porque trabajamos con el heap. Recordar que, cuando vamos a crear el vector del dato, hay que pasarlo con puntero y asignarlo con new para poder crear esa "variable". Ahora bien, cuando se hacen las redimensiones debemos tomar en cuenta liberar la memoria vieja (sin redimension) para luego si poder asignar la redimensión que queremos.
Por ultimo, no olvidar el delete al final para liberar definitivamente la memoria
# Paso por valor, referencia y puntero — funciones.cpp