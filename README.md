# :construction: openremise.github.io :construction:

<a href="https://openremise.at">
<picture>
  <source media="(prefers-color-scheme: dark)" srcset="https://github.com/OpenRemise/.github/raw/master/data/icons/icon_dark.svg">
  <img src="https://github.com/OpenRemise/.github/raw/master/data/icons/icon_light.svg" width="20%" align="right">
</picture>
</a>

## General TODOs
- Need to check if DECUP works @18V with 0.5µF at the TPS281C100 output. If it does, adjust the silkscreen on the bottom side of the S3Main board.
- When keeping BOOT pressed the user should be able to get into AP mode
- Maybe take another look at the service mode ACK algorithm. Should be possible to always detect it right without adjusting the threshold.
- Flutter StreamBuilder can miss events (https://github.com/flutter/flutter/issues/112197)
- Frontend FAKE_SERVICES need Z21 implementation, otherwise useless
- Implement Z21 ShortCircuit...? We need to check how to recover from that.
- Implement DECUP services
- Update screen
  - ZIMO updates should take .zsu and .zpp, when using .zpp users should be able to pick between MDU and ZUSI
  - Tams decoder update would be possible
  - ~~D&H decoder update requires "SX" capable hbridge~~
- Z21 app import/export, maybe we should take a look at how the Z21 app imports/exports locos? It seems to be some sq3lite thing?
- Controller
  - Option for left-handers to have slider left?
  - LinearGradient for Sliders CustomCurve would be great... (would be a PR)
  - MAN button?
- Service screen
  - There's still a bug when writing a CV. Changing the value afterwards isn't possible as it gets overwritten by the one previously red.
  - Look how Z21 does it, probably a good idea to split between some large display screen and small display screen
  - Have just a single CV read/write button on small screen
  - And an entire table on larger ones?
  - Also, how about JMRI import?
  - re-read and re-write button?
- Settings screen
  - ~~Consider splitting the list up into multiple tabs~~
- Slow mDNS resolution (mention that in the docs)
  - For some reason mDNS resolution is super slow on desktop...  
    https://askubuntu.com/questions/1279792/local-hostname-resolution-is-slow-on-20-04  
    This can be solved though by editing /etc/nsswitch.conf  
    https://wiki.archlinux.org/title/avahi  
    Replacing mdns_minimal with mdns4_minimal did the trick so far
- [LittleFS](https://docs.espressif.com/projects/esp-idf/en/latest/esp32s3/api-guides/file-system-considerations.html) as file system

## State of documentation
### openremise
- Introduction :negative_squared_cross_mark:

### Firmware
- Introduction :ballot_box_with_check:
- Getting Started :ballot_box_with_check:
  - Development :ballot_box_with_check:
  - Configuration :negative_squared_cross_mark:
  - Architecture :ballot_box_with_check:
  - Control flow :negative_squared_cross_mark:
- API Reference :negative_squared_cross_mark:
  - Analog :negative_squared_cross_mark:
  - DCC :negative_squared_cross_mark:
  - DECUP :negative_squared_cross_mark:
  - HTTP :negative_squared_cross_mark:
  - MDU :negative_squared_cross_mark:
  - Memory :negative_squared_cross_mark:
  - OTA :negative_squared_cross_mark:
  - Out :negative_squared_cross_mark:
  - UDP :negative_squared_cross_mark:
  - USB :negative_squared_cross_mark:
  - WiFi :negative_squared_cross_mark:
  - Z21 :negative_squared_cross_mark:
  - ZUSI :negative_squared_cross_mark:
- HW Reference :negative_squared_cross_mark:

### Frontend

### Flasher