/*
 *  user_strings.h - Localizable strings
 *
 *  Basilisk II (C) 1997-2008 Christian Bauer
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef USER_STRINGS_H
#define USER_STRINGS_H

// Common string numbers
enum {
	// General messages
	STR_ABOUT_TEXT1 = 0,
	STR_ABOUT_TEXT2,
	STR_READING_ROM_FILE,
	STR_SHELL_ERROR_PREFIX,
	STR_GUI_ERROR_PREFIX,
	STR_ERROR_ALERT_TITLE,
	STR_SHELL_WARNING_PREFIX,
	STR_GUI_WARNING_PREFIX,
	STR_WARNING_ALERT_TITLE,
	STR_NOTICE_ALERT_TITLE,
	STR_ABOUT_TITLE,
	STR_OK_BUTTON,
	STR_START_BUTTON,
	STR_QUIT_BUTTON,
	STR_CANCEL_BUTTON,

	// Error messages
	STR_NO_MEM_ERR = 1000,
	STR_NOT_ENOUGH_MEMORY_ERR,
	STR_NO_RAM_AREA_ERR,
	STR_NO_ROM_AREA_ERR,
	STR_NO_ROM_FILE_ERR,
	STR_ROM_FILE_READ_ERR,
	STR_ROM_SIZE_ERR,
	STR_UNSUPPORTED_ROM_TYPE_ERR,
	STR_OPEN_WINDOW_ERR,
	STR_OPEN_SCREEN_ERR,
	STR_SCSI_BUFFER_ERR,
	STR_SCSI_SG_FULL_ERR,

	// Warning messages
	STR_SMALL_RAM_WARN = 2000,
	STR_CREATE_VOLUME_WARN,
	STR_VOLUME_IS_MOUNTED_WARN,
	STR_CANNOT_UNMOUNT_WARN,

	// Preferences window
	STR_PREFS_TITLE = 3000,
	STR_PREFS_MENU = 3020,
	STR_PREFS_ITEM_ABOUT,
	STR_PREFS_ITEM_START,
	STR_PREFS_ITEM_ZAP_PRAM,
	STR_PREFS_ITEM_QUIT,

	STR_NONE_LAB = 3100,

	STR_VOLUMES_PANE_TITLE = 3200,	// Volumes pane
	STR_VOLUMES_CTRL,
	STR_ADD_VOLUME_BUTTON,
	STR_CREATE_VOLUME_BUTTON,
	STR_EDIT_VOLUME_BUTTON,
	STR_REMOVE_VOLUME_BUTTON,
	STR_ADD_VOLUME_PANEL_BUTTON,
	STR_CREATE_VOLUME_PANEL_BUTTON,
	STR_CDROM_DRIVE_CTRL,
	STR_BOOTDRIVER_CTRL,
	STR_BOOT_ANY_LAB,
	STR_BOOT_CDROM_LAB,
	STR_NOCDROM_CTRL,
	STR_EXTFS_CTRL,
	STR_DEVICE_CTRL,
	STR_UNIT_CTRL,
	STR_ADD_VOLUME_TITLE,
	STR_CREATE_VOLUME_TITLE,
	STR_EDIT_VOLUME_TITLE,
	STR_HARDFILE_SIZE_CTRL,
	STR_VOL_READONLY_CTRL,
	STR_VOL_TYPE_CTRL,
	STR_VOL_FILE_LAB,
	STR_VOL_DEVICE_LAB,
	STR_VOL_OPENFLAGS_CTRL,
	STR_VOL_STARTBLOCK_CTRL,
	STR_VOL_SIZE_CTRL,
	STR_VOL_BLOCKSIZE_CTRL,
	STR_VOL_FILE_CTRL,

	STR_SCSI_PANE_TITLE = 3300,		// SCSI pane
	STR_SCSI_ID_0 = 3301,
	STR_SCSI_ID_1 = 3302,
	STR_SCSI_ID_2 = 3303,
	STR_SCSI_ID_3 = 3304,
	STR_SCSI_ID_4 = 3305,
	STR_SCSI_ID_5 = 3306,
	STR_SCSI_ID_6 = 3307,

	STR_GRAPHICS_SOUND_PANE_TITLE = 3400,	// Graphics/Sound pane
	STR_GRAPHICS_CTRL,
	STR_VIDEO_TYPE_CTRL,
	STR_WINDOW_LAB,
	STR_FULLSCREEN_LAB,
	STR_PIP_LAB,
	STR_FRAMESKIP_CTRL,
	STR_REF_5HZ_LAB,
	STR_REF_7_5HZ_LAB,
	STR_REF_10HZ_LAB,
	STR_REF_15HZ_LAB,
	STR_REF_30HZ_LAB,
	STR_REF_60HZ_LAB,
	STR_REF_DYNAMIC_LAB,
	STR_DISPLAY_X_CTRL,
	STR_DISPLAY_Y_CTRL,
	STR_SIZE_384_LAB,
	STR_SIZE_480_LAB,
	STR_SIZE_512_LAB,
	STR_SIZE_600_LAB,
	STR_SIZE_640_LAB,
	STR_SIZE_768_LAB,
	STR_SIZE_800_LAB,
	STR_SIZE_1024_LAB,
	STR_SIZE_MAX_LAB,
	STR_COLOR_DEPTH_CTRL,
	STR_1_BIT_LAB,
	STR_2_BIT_LAB,
	STR_4_BIT_LAB,
	STR_8_BIT_LAB,
	STR_15_BIT_LAB,
	STR_24_BIT_LAB,
	STR_SCREEN_MODE_CTRL,
	STR_8_BIT_640x480_LAB,
	STR_8_BIT_800x600_LAB,
	STR_8_BIT_1024x768_LAB,
	STR_8_BIT_1152x900_LAB,
	STR_8_BIT_1280x1024_LAB,
	STR_8_BIT_1600x1200_LAB,
	STR_15_BIT_640x480_LAB,
	STR_15_BIT_800x600_LAB,
	STR_15_BIT_1024x768_LAB,
	STR_15_BIT_1152x900_LAB,
	STR_15_BIT_1280x1024_LAB,
	STR_15_BIT_1600x1200_LAB,
	STR_24_BIT_640x480_LAB,
	STR_24_BIT_800x600_LAB,
	STR_24_BIT_1024x768_LAB,
	STR_24_BIT_1152x900_LAB,
	STR_24_BIT_1280x1024_LAB,
	STR_24_BIT_1600x1200_LAB,
	STR_SOUND_CTRL,
	STR_NOSOUND_CTRL,

	STR_SERIAL_NETWORK_PANE_TITLE = 3500,	// Serial/Networking pane
	STR_SERIALA_CTRL,
	STR_SERIALB_CTRL,
	STR_ISPAR_CTRL,
	STR_ETHER_ENABLE_CTRL,
	STR_ETHERNET_IF_CTRL,
	STR_UDPTUNNEL_CTRL,
	STR_UDPPORT_CTRL,

	STR_MEMORY_MISC_PANE_TITLE = 3600,	// Memory/Misc pane
	STR_RAMSIZE_CTRL,
	STR_RAMSIZE_2MB_LAB,
	STR_RAMSIZE_4MB_LAB,
	STR_RAMSIZE_8MB_LAB,
	STR_RAMSIZE_16MB_LAB,
	STR_RAMSIZE_32MB_LAB,
	STR_RAMSIZE_64MB_LAB,
	STR_RAMSIZE_128MB_LAB,
	STR_RAMSIZE_256MB_LAB,
	STR_RAMSIZE_512MB_LAB,
	STR_RAMSIZE_1024MB_LAB,
	STR_RAMSIZE_SLIDER,
	STR_RAMSIZE_FMT,
	STR_MODELID_CTRL,
	STR_MODELID_5_LAB,
	STR_MODELID_14_LAB,
	STR_CPU_CTRL,
	STR_CPU_68020_LAB,
	STR_CPU_68020_FPU_LAB,
	STR_CPU_68030_LAB,
	STR_CPU_68030_FPU_LAB,
	STR_CPU_68040_LAB,
	STR_ROM_FILE_CTRL,
	STR_IDLEWAIT_CTRL,

	STR_JIT_PANE_TITLE = 3700,		// JIT Compiler pane
	STR_JIT_CTRL,
	STR_JIT_FPU_CTRL,
	STR_JIT_ATRAPS_CTRL,
	STR_JIT_CACHE_SIZE_CTRL,
	STR_JIT_CACHE_SIZE_2MB_LAB,
	STR_JIT_CACHE_SIZE_4MB_LAB,
	STR_JIT_CACHE_SIZE_8MB_LAB,
	STR_JIT_CACHE_SIZE_16MB_LAB,
	STR_JIT_LAZY_CINV_CTRL,
	STR_JIT_FOLLOW_CONST_JUMPS,

	// Mac window
	STR_WINDOW_TITLE = 4000,
	STR_WINDOW_TITLE_FROZEN,
	STR_WINDOW_TITLE_GRABBED,
	STR_WINDOW_TITLE_GRABBED0,
	STR_WINDOW_TITLE_GRABBED1,
	STR_WINDOW_TITLE_GRABBED2,
	STR_WINDOW_TITLE_GRABBED3,
	STR_WINDOW_TITLE_GRABBED4,
	STR_WINDOW_MENU = 4050,
	STR_WINDOW_ITEM_ABOUT,
	STR_WINDOW_ITEM_REFRESH,
	STR_WINDOW_ITEM_MOUNT,
	STR_SUSPEND_WINDOW_TITLE,

    // Audio
    STR_SOUND_IN_NAME = 6000,
    
	// External file system
	STR_EXTFS_NAME = 5000,
	STR_EXTFS_VOLUME_NAME
};

// Common and platform-specific string definitions
struct user_string_def {
	int num;
	const char *str;
};

extern user_string_def common_strings[];
extern user_string_def platform_strings[];

// Fetch pointer to string, given the string number
extern const char *GetString(int num);

#endif
