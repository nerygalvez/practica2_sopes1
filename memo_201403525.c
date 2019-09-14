/**
*
*	Creando el modulo de memoria
*
*/


include <linux/module.h> 

include <linux/kernel.h>

include <linux/init.h>


static int __init iniciar(void)
{
 	printk(KERNINFO "Que pasa tronco!\n");
        /*
         * Si no se devuelve 0 significa que initmodule ha fallado y no ha podido cargarse.
         */
        return 0;
}

static void __exit terminar(void)
{
        printk(KERNINFO "Me voy dando el piro!\n");
}


/*
 * Indicamos cuales son las funciones de inicio y fin
 */
moduleinit(iniciar);
moduleexit(terminar);

/*
 * Documentacion del modulo
 */
MODULELICENSE("GPL");
MODULEAUTHOR("Nery Galvez - 201403525");
MODULEDESCRIPTION("Este modulo no vale para absolutamente nada");
MODULESUPPORTEDDEVICE("eltiodelavara");
