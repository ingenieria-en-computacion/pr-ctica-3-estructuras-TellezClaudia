#include <stdio.h>
#include "conjunto.h"


int main (){
    CONJUNTO c, d, e;
    c= conjunto_vacio();
    d=conjunto_vacio();
    e=conjunto_vacio();
    print_conjunto(c);
    print_conjunto(d);
    print_conjunto(e);

    printf("El conjunto c esta vacio %d\n", es_vacio(c));
    c= agregar (c, 2);
    c= agregar (c, 7);
    c= agregar (c, 3);
    c= agregar (c, 9);
    print_conjunto(c);

    d= agregar (d, 6);
    d= agregar (d, 8);
    d= agregar (d, 3);
    print_conjunto(d);

    e= _union(c,d)
    print_conjunto(e);

    return 0;
}