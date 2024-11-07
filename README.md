# :construction: openremise.github.io :construction:

# TODO
- Frontend FAKE_SERVICES need Z21 implementation, otherwise useless
- Implement DECUP services
- Other decoder updates
  - Tams decoder update would be possible
  - D&H decoder update requires "SX" capable hbridge
- Z21 app import/export, maybe we should take a look at how the Z21 app imports/exports locos? It seems to be some sq3lite thing?
- Cab
  - Option for left-handers to have slider left?
  - LinearGradient for Sliders CustomCurve would be great... (would be a PR)
- Dart should make use of collections
  - Instead of manually creating chunks of X bytes do this  
    ```dart
    import 'package:collection/collection.dart';
    
    void main() {
      List<dynamic> numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
      Iterable<List<dynamic>> chunksCollection = numbers.slices(3);
      print(chunksCollection);
    }
    ```
- Service screen
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
- Maybe change partition table again? Currently there is no room for any images?