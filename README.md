# :construction: openremise.github.io :construction:

# TODO
- Flutter StreamBuilder can miss events (https://github.com/flutter/flutter/issues/112197)
- Frontend FAKE_SERVICES need Z21 implementation, otherwise useless
- Implement Z21 ShortCircuit...? We need to check how to recover from that.
- Implement DECUP services
- Update screen
  - ZIMO updates should take .zsu and .zpp, when using .zpp users should be able to pick between MDU and ZUSI
  - Tams decoder update would be possible
  - D&H decoder update requires "SX" capable hbridge
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
- Slow mDNS resolution (mention that in the docs)
  - For some reason mDNS resolution is super slow on desktop...  
    https://askubuntu.com/questions/1279792/local-hostname-resolution-is-slow-on-20-04  
    This can be solved though by editing /etc/nsswitch.conf  
    https://wiki.archlinux.org/title/avahi  
    Replacing mdns_minimal with mdns4_minimal did the trick so far