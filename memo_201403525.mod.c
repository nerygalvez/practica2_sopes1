#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x9bdb658a, "module_layout" },
	{ 0x5d742174, "single_release" },
	{ 0x7d5fd894, "seq_read" },
	{ 0x260b6d55, "seq_lseek" },
	{ 0x75728794, "remove_proc_entry" },
	{ 0xc5850110, "printk" },
	{ 0x5d1dbaf0, "proc_create" },
	{ 0xaaca0796, "seq_printf" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0x5e6d04cc, "single_open" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

