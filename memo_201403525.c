/**
*
*	Creando el modulo de memoria
*
*/


#include <linux/module.h> 

#include <linux/kernel.h>

#include <linux/init.h>


static int iniciar(void)
{
 	printk(KERN_INFO "Que pasa tronco!\n");
        /*
         * Si no se devuelve 0 significa que initmodule ha fallado y no ha podido cargarse.
         */
        return 0;
}

static void terminar(void)
{
        printk(KERN_INFO "Me voy dando el piro!\n");
}


/*
 * Indicamos cuales son las funciones de inicio y fin
 */
module_init(iniciar);
module_exit(terminar);

/*
 * Documentacion del modulo
 */
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Nery Galvez - 201403525");
MODULE_DESCRIPTION("Este modulo no vale para absolutamente nada");
MODULE_SUPPORTED_DEVICE("eltiodelavara");
