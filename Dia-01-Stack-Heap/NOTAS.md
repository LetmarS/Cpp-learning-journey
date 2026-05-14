# Teoría:

Para entender mejor el stack y heap desarrolle esta práctica. 

Como analogía podemos pensar en el stack como una pila de platos, en donde siempre tomas primero el ultimo plato que colocaste. Stack, es la forma "automatica" de manejar la memoria, por lo que no es 
tan amplia (1~8MB) y dura solo lo que dure la función. La usamos en programas o modelos de datos 
sencillos.

Ahora bien, el Heap es un montón o monticulo de memoria. Acá podemos pensarlo como un gran almacén en donde nosotros debemos encarganos de como ingresa y se libera la memoria, apartando el espacio para nuestros datos y luego liberandolo cuando ya no se requiera. En este caso, tenemos mayor capacidad de almacenamiento (GB, dependiendo de la RAM) pero mayor probabilidad de caer en memory leaks, que son espacios de memorias reservados pero que no son usados.

Es importante recordar que cuando se manejen los datos como heap, hay que liberar al final esos campos de memoria con la función o método "delete". De esta forma evitamos problemas a la larga por uso excesivo de RAM y demás.

# Interesante:

Cuando se trabaja con referencias y punteros hay que tener en cuenta lo siguiente:

El puntero es simplemente una flecha que apunta a la dirección en memoria apartada en donde se encuentra nuestro valor almacenado; la referencia es como la etiqueta que lo identifica; y tomando la analogía común de la caja, si tenemos una dirección y podemos acceder a la referencia, podemos abrir la caja para ver el valor dentro de ella.

Ahora bien, es posible trabajar con dobles, triples y más punteros (no lo sabía). Esto es relativamente sencillo si recordamos siempre que el puntero (puntero*) apunta a la referencia de donde se ubica el valor en memoria (ID o &puntero) y a medida que vayamos aumentando el numero de puntero nos iremos adentrando más a en esas cajas. Pensarlo como si fuera de estas muñecas rusas donde dentro de cada muñeca hay otra.