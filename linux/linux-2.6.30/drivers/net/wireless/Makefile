#
# Makefile for the Linux Wireless network device drivers.
#


obj-$(CONFIG_STRIP) += strip.o
obj-$(CONFIG_ARLAN) += arlan.o 

arlan-objs := arlan-main.o arlan-proc.o

# Obsolete cards
obj-$(CONFIG_WAVELAN)		+= wavelan.o
obj-$(CONFIG_PCMCIA_NETWAVE)	+= netwave_cs.o
obj-$(CONFIG_PCMCIA_WAVELAN)	+= wavelan_cs.o

obj-$(CONFIG_HERMES)		+= orinoco/

obj-$(CONFIG_AIRO)		+= airo.o
obj-$(CONFIG_AIRO_CS)		+= airo_cs.o airo.o

obj-$(CONFIG_ATMEL)             += atmel.o
obj-$(CONFIG_PCI_ATMEL)         += atmel_pci.o 
obj-$(CONFIG_PCMCIA_ATMEL)      += atmel_cs.o



obj-$(CONFIG_HOSTAP)		+= hostap/

# 16-bit wireless PCMCIA client drivers
obj-$(CONFIG_PCMCIA_RAYCS)	+= ray_cs.o
obj-$(CONFIG_PCMCIA_WL3501)	+= wl3501_cs.o

obj-$(CONFIG_USB_NET_RNDIS_WLAN)	+= rndis_wlan.o

obj-$(CONFIG_USB_ZD1201)	+= zd1201.o
obj-$(CONFIG_LIBERTAS)		+= libertas/

obj-$(CONFIG_LIBERTAS_THINFIRM)	+= libertas_tf/

obj-$(CONFIG_ADM8211)	+= adm8211.o

obj-$(CONFIG_MWL8K)	+= mwl8k.o

obj-$(CONFIG_IWLWIFI)	+= iwlwifi/



ifeq ($(CONFIG_EFM_8881A_HIGH_POWER_PA_DRIVER),y)
obj-$(CONFIG_RTL8192CD)         += rtl8192cd_3.4.6.4_8881AN_HIGHPOWER_PATCH/rtl8192cd.o
else

ifeq ($(CONFIG_RTK_PATCH_2015_11_06_FOR_RTL8192E),y)
obj-$(CONFIG_RTL8192CD)         += rtl8192cd.92e.patch/rtl8192cd.o
else
obj-$(CONFIG_RTL8192CD)         += rtl8192cd/rtl8192cd.o
endif

endif
