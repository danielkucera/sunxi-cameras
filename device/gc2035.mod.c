#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xac902c3f, "module_layout" },
	{ 0x6d044c26, "param_ops_uint" },
	{ 0x4615cf24, "cci_dev_exit_helper" },
	{ 0xab914b05, "cci_dev_init_helper" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3b05df25, "malloc_sizes" },
	{ 0x75faaa81, "cci_dev_probe_helper" },
	{ 0x3d22b4f3, "kmem_cache_alloc_trace" },
	{ 0xdd1dc528, "v4l2_chip_ident_i2c_client" },
	{ 0x791ab099, "v4l2_ctrl_query_fill" },
	{ 0x804742ad, "cci_unlock" },
	{ 0xf028ec10, "vfe_set_pmu_channel" },
	{ 0x1d41b88a, "vfe_gpio_set_status" },
	{ 0x5263ec35, "vfe_set_mclk_freq" },
	{ 0xbac77e7d, "vfe_set_mclk" },
	{ 0x913805dd, "vfe_gpio_write" },
	{ 0xd14bbfe7, "cci_lock" },
	{ 0x12a38747, "usleep_range" },
	{ 0x27e1a049, "printk" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xa2c9787b, "cci_write_a8_d8" },
	{ 0x93751cee, "cci_read_a8_d8" },
	{ 0x37a0cba, "kfree" },
	{ 0x539e3bc6, "cci_dev_remove_helper" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cci,vfe_subdev";

MODULE_ALIAS("i2c:gc2035");
