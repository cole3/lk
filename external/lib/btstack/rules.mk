LOCAL_DIR := $(GET_LOCAL_DIR)

MODULE := $(LOCAL_DIR)

BT_PORT_DIR := $(LOCAL_DIR)/port/posix-h4
BT_PLATFORM_DIR := $(LOCAL_DIR)/platform/posix
BT_CHIPSET_DIR := $(LOCAL_DIR)/chipset
BT_SRC_DIR := $(LOCAL_DIR)/src

GLOBAL_INCLUDES += \
	$(BT_SRC_DIR) \
	$(BT_PORT_DIR) \
	$(BT_PLATFORM_DIR) \
	$(BT_CHIPSET_DIR)/bcm \
	$(BT_CHIPSET_DIR)/csr \
	$(BT_CHIPSET_DIR)/cc256x \
	$(BT_CHIPSET_DIR)/em9301 \
	$(BT_CHIPSET_DIR)/stlc2500d \
	$(BT_CHIPSET_DIR)/tc3566x \

MODULE_SRCS += \
	$(BT_PORT_DIR)/main.c \
	$(BT_SRC_DIR)/btstack_linked_list.c \
	$(BT_SRC_DIR)/btstack_memory.c \
	$(BT_SRC_DIR)/btstack_memory_pool.c \
	$(BT_SRC_DIR)/btstack_run_loop.c \
	$(BT_SRC_DIR)/btstack_slip.c \
	$(BT_SRC_DIR)/btstack_util.c \
	$(BT_SRC_DIR)/hci.c \
	$(BT_SRC_DIR)/hci_cmd.c \
	$(BT_SRC_DIR)/hci_dump.c \
	$(BT_SRC_DIR)/hci_transport_h4.c \
	$(BT_SRC_DIR)/l2cap.c \
	$(BT_SRC_DIR)/l2cap_signaling.c \
	$(BT_CHIPSET_DIR)/bcm/btstack_chipset_bcm.c \
	$(BT_CHIPSET_DIR)/cc256x/ant_cmd.c \
	$(BT_CHIPSET_DIR)/cc256x/btstack_chipset_cc256x.c \
	$(BT_CHIPSET_DIR)/csr/btstack_chipset_csr.c \
	$(BT_CHIPSET_DIR)/em9301/btstack_chipset_em9301.c \
	$(BT_CHIPSET_DIR)/stlc2500d/btstack_chipset_stlc2500d.c \
	$(BT_CHIPSET_DIR)/tc3566x/btstack_chipset_tc3566x.c \
	$(BT_PLATFORM_DIR)/btstack_link_key_db_fs.c \
	$(BT_PLATFORM_DIR)/btstack_run_loop_posix.c \
	$(BT_PLATFORM_DIR)/btstack_uart_block_posix.c \
	$(BT_PLATFORM_DIR)/stdin_support.c \


LWIP_IP_TYPE := IPV4-0

ifeq ($(LWIP_IP_TYPE),IPV4)

GLOBAL_INCLUDES += \
	$(LOCAL_DIR)/include/ipv4 \

MODULE_SRCS += \
	$(LOCAL_DIR)/core/ipv4/autoip.c \
	$(LOCAL_DIR)/core/ipv4/icmp.c \
	$(LOCAL_DIR)/core/ipv4/igmp.c \
	$(LOCAL_DIR)/core/ipv4/inet.c \
	$(LOCAL_DIR)/core/ipv4/inet_chksum.c \
	$(LOCAL_DIR)/core/ipv4/ip.c \
	$(LOCAL_DIR)/core/ipv4/ip_addr.c \
	$(LOCAL_DIR)/core/ipv4/ip_frag.c \

endif
	
include make/module.mk

