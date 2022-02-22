.PHONY: all install clean

include ../../Makefile.common

INSTALL_DIR ?= install
BUILD := build
LWIP_INCLUDE := src/include

LWIP_CFLAGS    := -mabi=lp64 -march=rv64imafd -mcmodel=medany \
        -I$(BP_SDK_INCLUDE_DIR) -I$(LWIP_INCLUDE) -Wall -Wextra \
        -static -std=gnu99 -DENABLE_DHCP

LWIP_LIB_SRCS  := $(wildcard src/core/*.c)   \
		$(wildcard src/core/ipv4/*.c)        \
		src/netif/ethernet.c                 \
        $(wildcard src/platform/$(ARCH)/*.c)

LWIP_LIB_OBJS := $(LWIP_LIB_SRCS:%.c=$(BUILD)/%.o)

all: $(BUILD)/liblwip.a
install: $(BUILD)/liblwip.a
	mkdir -p $(INSTALL_DIR)/lib $(INSTALL_DIR)/include
	cp $< $(INSTALL_DIR)/lib
	cp -r $(LWIP_INCLUDE)/lwip $(INSTALL_DIR)/include
	cp -r $(LWIP_INCLUDE)/netif $(INSTALL_DIR)/include
	cp -r $(LWIP_INCLUDE)/arch $(INSTALL_DIR)/include 

$(BUILD)/%.o:%.c
	mkdir -p $(dir $@) && $(CC) $(LWIP_CFLAGS) -c $< -o $@

$(BUILD)/liblwip.a: $(LWIP_LIB_OBJS)
	$(AR) -rc $@ $^
	$(RANLIB) $@


clean:
	rm -rf $(BUILD)
