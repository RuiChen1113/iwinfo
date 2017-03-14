#ifndef __IWINFO_RA_H_
#define __IWINFO_RA_H_

#include <fcntl.h>

#include "iwinfo.h"
#include "iwinfo/utils.h"


#include "iwinfo/api/ralink.h"

int ra_probe(const char *ifname);
int ra_get_mode(const char *ifname, int *buf);
int ra_get_ssid(const char *ifname, char *buf);
int ra_get_bssid(const char *ifname, char *buf);
int ra_get_country(const char *ifname, char *buf);
int ra_get_channel(const char *ifname, int *buf);
int ra_get_frequency(const char *ifname, int *buf);
int ra_get_frequency_offset(const char *ifname, int *buf);
int ra_get_txpower(const char *ifname, int *buf);
int ra_get_txpower_offset(const char *ifname, int *buf);
int ra_get_bitrate(const char *ifname, int *buf);
int ra_get_signal(const char *ifname, int *buf);
int ra_get_noise(const char *ifname, int *buf);
int ra_get_quality(const char *ifname, int *buf);
int ra_get_quality_max(const char *ifname, int *buf);
int ra_get_enctype(const char *ifname, char *buf);
int ra_get_encryption(const char *ifname, char *buf);
int ra_get_assoclist(const char *ifname, char *buf, int *len);
int ra_get_txpwrlist(const char *ifname, char *buf, int *len);
int ra_get_scanlist(const char *ifname, char *buf, int *len);
int ra_get_freqlist(const char *ifname, char *buf, int *len);
int ra_get_countrylist(const char *ifname, char *buf, int *len);
int ra_get_hwmodelist(const char *ifname, int *buf);
int ra_get_mbssid_support(const char *ifname, int *buf);
int ra_get_hardware_id(const char *ifname, char *buf);
int ra_get_hardware_name(const char *ifname, char *buf);
void ra_close(void);

static const struct iwinfo_ops ra_ops = {
	.channel          = ra_get_channel,
	.frequency        = ra_get_frequency,
	.frequency_offset = ra_get_frequency_offset,
	.txpower          = ra_get_txpower,
	.txpower_offset   = ra_get_txpower_offset,
	.bitrate          = ra_get_bitrate,
	.signal           = ra_get_signal,
	.noise            = ra_get_noise,
	.quality          = ra_get_quality,
	.quality_max      = ra_get_quality_max,
	.mbssid_support   = ra_get_mbssid_support,
	.hwmodelist       = ra_get_hwmodelist,
	.mode             = ra_get_mode,
	.ssid             = ra_get_ssid,
	.bssid            = ra_get_bssid,
	.country          = ra_get_country,
	.hardware_id      = ra_get_hardware_id,
	.hardware_name    = ra_get_hardware_name,
	.encryption       = ra_get_encryption,
	.assoclist        = ra_get_assoclist,
	.txpwrlist        = ra_get_txpwrlist,
	.scanlist         = ra_get_scanlist,
	.freqlist         = ra_get_freqlist,
	.countrylist      = ra_get_countrylist,
	.close            = ra_close
};

#endif
