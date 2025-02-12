// Copyright (C) 2025 Vincent Hamp
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

/// Documentation
///
/// \file   doxygen.hpp
/// \author Vincent Hamp
/// \date   04/08/2024

/// \mainpage Introduction
/// \details \tableofcontents
/// Welcome to the [OpenRemise](https://openremise.at) project, which aims to
/// provide an **open source DCC** solution for operating your entire model
/// railway layout. OpenRemise combines the ease of use of commercial systems
/// with the dedication of a hobbyist project. This means that **no electronics
/// or soldering knowledge** is required to set it up, the whole system is
/// almost plug and play. After initial setup, all further operation is carried
/// out conveniently via a web interface on e.g. your smartphone, tablet or PC.
///
/// \image html s3main_0.1.0.png "\"S3Main\""
///
/// \warning
/// Please note that OpenRemise is under **active development**. For a full
/// overview of already available and planned features, see the regularly
/// updated \ref section_introduction_features section.
///
/// \section section_introduction_features Features
/// <div class="tabbed">
/// - <b class="tab-title">Available</b>
///   \image{inline} html open_source_initiative.svg width=16px
///   **Open source hard- & software**<br>
///   Both the hard- and the software are freely available under copyleft
///   licenses. They do not contain any proprietary bits and everyone is free to
///   use or modify it as they see fit.
///   <br><br>
///   \htmlonly &#128268; \endhtmlonly
///   **Plug&Play**<br>
///   The entire system is almost plug and play. Only at the beginning does the
///   firmware have to be flashed onto the board. A [user-friendly tool for
///   Windows and Linux](https://github.com/OpenRemise/Flasher) is available
///   specifically for this purpose. All further ongoing operation is possible
///   via the [Frontend](https://github.com/OpenRemise/Frontend) in all common
///   web browsers. Check out the [demo](https://openremise.at/Frontend/demo) to
///   try it out.
///   <br><br>
///   \image{inline} html square_wave.svg width=16px
///   **DCC**<br>
///   DCC is the only track protocol supported, but in the most compatible yet
///   still cutting edge way. Changes to the standards are adopted quickly while
///   maintaining backwards compatibility.
///   <br><br>
///   \htmlonly &#9107; \endhtmlonly
///   **Adjustable current limits**<br>
///   4 adjustable current limits (0.5, 1.3, 2.7 and 4.1A) ensure operational
///   safety. The lowest limit is also implicitly applied in service mode.
///   <br><br>
///   \image{inline} html system_update_alt.svg width=16px
///   **Decoder updates**<br>
///   All [ZIMO](https://www.zimo.at/web2010/index.html) MN-, MS- and MX mobile
///   decoders can be updated.
///   <br><br>
///   \emoji :musical_note:
///   **Sound**<br>
///   All [ZIMO](https://www.zimo.at/web2010/index.html) MN-, MS- and MX mobile
///   decoders can be loaded with sound (or general projects).
///   <br><br>
///   \image{inline} html 3rd_party.svg width=16px
///   **3rd party
///   support**<br>
///   The WiFi and USB interfaces allow a variety of 3rd party support. For
///   example, OpenRemise can be used with the following apps
///   <ul>
///   <li>[Z21 App](https://www.z21.eu/en/products/z21-app)</li><br>
///   The well-known Z21 app from [ROCO](https://www.roco.cc/ren) is fully
///   supported. Among other things, it allows you to control locomotives,
///   create layouts and also program CVs.
///   <li>[JMRI](https://www.jmri.org)</li><br>
///   Probably needs no introduction. Every model railroader's favorite set of
///   tools. Can do everything, maybe not very beginner-friendly.
///   <li>[ZCS](https://www.beathis.ch/zcs/index.html)</li><br>
///   A CV programming tool specifically for ZIMO decoders.
///   <li>[ZIMO
///   ZSP](https://www.zimo.at/web2010/products/zsp_zimo-sound-programmer_EN.htm)</li><br>
///   The ZIMO Sound Programmer, used to create, preview and modify sound
///   projects. It also supports updating decoders or loading sound via USB.
///   <li>[Z2X-Programmer](https://github.com/PeterK78/Z2X-Programmer)</li><br>
///   A relatively new programming tool that is still in its early stages, but
///   already works very well.
///   </ul>
/// - <b class="tab-title">Planned</b>
///   \image{inline} html square_wave.svg width=16px
///   **DCC**<br>
///   DCC support isn't complete yet. First of all, accessory commands are not
///   yet implemented.
///   <br><br>
///   \image{inline} html system_update_alt.svg width=16px
///   **Decoder updates**<br>
///   [tams elektronik](https://tams-online.de) has already provided information
///   on their decoder update procedure. An implementation in the future is very
///   likely. <br><br>
///   \image{inline} html susi.svg width=16px
///   **SUSI**<br>
///   The hardware has a standard SUSI bus interface. It would be conceivable to
///   allow SUSI modules to be configured or tested directly.
///   <br><br>
///   \image{inline} html network.svg width=16px
///   **Bus systems**<br>
///   Sooner or later, a fully-fledged command station will need to be connected
///   to existing bus systems in order to integrate handheld controllers or
///   section modules. It is currently not clear which buses will be supported,
///   but XPressNet, LocoNet, LCC and BiDiB would be possible. Feedback on this
///   is welcome.
///   <br><br>
///   \image{inline} html ip.svg width=16px
///   **IPv6 support**<br>
///   Currently only IPv4 is supported, but IPv6 would be possible.
///   <br><br>
///   \emoji :de:
///   **German translation of the frontend**<br>
///   The [Frontend](https://openremise.at/Frontend) is currently only available
///   in English. As a native German speaker, this is a bit embarrassing...
///   <br><br>
/// - <b class="tab-title">Not planned</b>
///   \htmlonly &#128732; \endhtmlonly
///   **Access point operation**<br>
///   OpenRemise is designed to be integrated into an existing network. Access
///   point operation is not planned for the time being, but contributions would
///   be accepted.
///   <br><br>
///   \image{inline} html square_wave.svg width=16px
///   **Other track protocols**<br>
///   Contributions are welcome, but I will certainly not implement any track
///   protocol other than DCC.
///   <br><br>
///   \image{inline} html system_update_alt.svg width=16px
///   **Decoder updates**<br>
///   [Doehler & Haass](https://doehler-haass.de/cms) deserve an honorable
///   mention here, as although they were keen to help with the implementation,
///   but their update procedure cannot be implemented so easily due to
///   technical limitations of the OpenRemise hardware.
///   <br><br>
///   \image{inline} html sine_wave.svg width=16px
///   **Analog operation**<br>
///   Over my dead body.
///   <br><br>
/// </div>
///
/// \section section_introduction_motivation Motivation
/// \todo
/// Compare OpenRemise to other open source projects like DCC-EX or Z21PG.
///
/// <div class="section_buttons">
/// | Next                      |
/// | ------------------------: |
/// | \ref page_getting_started |
/// </div>

/// \page page_getting_started Getting Started
/// \details \tableofcontents
/// \todo
/// Where to get the hardware, how to install using the Flasher, YouTube?
///
/// \section section_getting_started_buy_a_board Buy a board
/// Buy @ PCBWay
///
/// \subsection subsection_getting_started_or_manufacture ...or manufacture one
/// Or build your own? JLCPCB, PCBWay
///
/// \section section_getting_started_install Install the Firmware
/// Flasher
///
/// \section section_getting_started_wifi Connect to WiFi
/// Captive portal thingy
///
/// <div class="section_buttons">
/// | Previous   | Next              |
/// | :--------- | ----------------: |
/// | \ref index | \ref page_faq     |
/// </div>

/// \page page_faq FAQ
/// \details \tableofcontents
/// The \ref page_faq assumes that you already have a working OpenRemise system.
/// For instructions on initial setup, please read the \ref page_getting_started
/// guide.
///
/// \section section_faq_support Where to get support?
/// Developers are only human and software may contain bugs. If you encounter
/// any problems, please consider **in the following order** to either
/// - open an issue at [GitHub](https://github.com/OpenRemise)
/// - ask in one of the following forum threads
///   - stummi
///   - 1zu160
///   - opendcc
///   - rmweb
///   - h0-modellbahnforum
///   - kleinbahnsammle
/// - or, **after you have already exhausted the other options**, contact me at
///   vincent.hamp@openremise.at
///
/// \section section_faq_connectors Where can I buy the connectors?
/// The 3.5 and 5.08mm connectors are available from several manufacturers.
/// Since the OpenRemise boards have [Phoenix
/// Contact](https://www.phoenixcontact.com/en-pc/) sockets installed, I would
/// suggest purchasing the connectors from this company as well.
///
// clang-format off
/// \page page_faq FAQ
/// \details \tableofcontents
/// | Connector   | Manufacturer    | Product Number | Distributor                                                                          |
/// | ----------- | --------------- | -------------- | ------------------------------------------------------------------------------------ |
/// | Track       | Phoenix Contact | 1840366        | [DigiKey](https://www.digikey.at/en/products/detail/phoenix-contact/1840366/349178)  |
/// | Power       | Phoenix Contact | 1836079        | [DigiKey](https://www.digikey.at/en/products/detail/phoenix-contact/1836079/2527923) |
// clang-format on
/// \page page_faq FAQ
/// \details \tableofcontents
///
/// \section section_faq_z21_app How to connect to the Z21 app?
/// Mit IP usw.
///
/// \section section_faq_captive_portal How to reopen the captive portal?
/// If the board can no longer log into your WiFi for some reason, e.g. because
/// the password has been changed or you made a typo in the captive portal, you
/// can create an access point by holding down BOOT for about **5 seconds**
/// during operation. The blue LED then lights up and an access point called
/// **OpenRemise** opens. There you can change the WiFi password as already seen
/// in the \ref section_getting_started_wifi "Getting Started" Guide.
///
/// \section section_faq_current_limit Which current limit is right for me?
/// As a rule of thumb, we recommend the following settings.
/// | Current [A] | Nominal size                                       |
/// | ----------- | -------------------------------------------------- |
/// | 0.5         | Service mode                                       |
/// | 1.3         | [Z scale](https://en.wikipedia.org/wiki/Z_scale)   |
/// | 2.7         | [N scale](https://en.wikipedia.org/wiki/N_scale)   |
/// | 4.1         | [H0 scale](https://en.wikipedia.org/wiki/HO_scale) |
///
/// \section section_faq_decup Why doesn't the ZIMO decoder update work?
/// This can have different reasons depending on the decoder type:
/// - For MN- and MS decoders, any energy storage in the decoder must be
///   completely empty. If this is not the case, the decoder will not recognize
///   the entry into the bootloader. This mainly affects large-scale decoders or
///   decoders with [goldcaps or
///   STACO](https://www.zimo.at/web2010/products/energiespeicher_EN.htm).
/// - For MX decoders, the analog mode (CV29=10) and the update lock (CV144=0)
///   must be deactivated for an update.
///
/// \section section_faq_mdns How to speed up mDNS resolution on Linux?
/// If you experience slowdowns in resolving `*remise.local` on
/// [Linux](https://wiki.archlinux.org/title/Avahi) you could try to edit the
/// `hosts` entry of `/etc/nsswitch.conf`. Use `mdns4_minimal` and `mdns4`
/// instead of `mdns_minimal` and `mdns` respectively.
///
/// For example, this is what nsswitch.conf looks like on my machine
// clang-format off
/// \page page_faq FAQ
/// \details \tableofcontents
/// ```sh
/// # hosts: mymachines mdns_minimal [NOTFOUND=return] resolve [!UNAVAIL=return] files myhostname dns
/// hosts: mymachines mdns4_minimal [NOTFOUND=return] resolve [!UNAVAIL=return] files myhostname dns
/// ```
// clang-format on
/// \page page_faq FAQ
/// \details \tableofcontents
///
/// <div class="section_buttons">
/// | Previous                  | Next                       |
/// | :------------------------ | -------------------------: |
/// | \ref page_getting_started | \ref page_getting_involved |
/// </div>

/// \page page_getting_involved Getting Involved
/// \details \tableofcontents
/// \todo
/// Join on GitHub...?
///
/// <div class="section_buttons">
/// | Previous      | Next              |
/// | :------------ | ----------------: |
/// | \ref page_faq | \ref page_history |
/// </div>

/// \page page_history History
/// \details \tableofcontents
/// This project originally started back in 2021 as a decoder update device for
/// my then (and still current) employer. I had already been working in the
/// model railway industry since 2015 and had the feeling that the possibilities
/// of modern electronics and especially their connectivity were not being fully
/// exploited. All decoder update devices that were on the market at that time
/// only had USB.
///
/// So I started working on a Bluetooth decoder update device in my free time.
/// The first prototype was called **MSBlueZ** and was built on an
/// [STMicroelectronics](https://www.st.com/content/st_com/en.html)
/// [STM32WB55](https://www.st.com/en/microcontrollers-microprocessors/stm32wb55rg.html)
/// basis.
///
/// \image html msbluez.png "One of the first \"MSBlueZ\" prototypes"
///
/// The "Bluetooth part" didn't last long though. One day I stumbled upon a demo
/// of someone serving an HTML page from an
/// [ESP32](https://www.espressif.com/en/products/socs/esp32) over WiFi and I've
/// obsessed over the idea ever since. Conveniently,
/// [Espressif](https://www.espressif.com) introduced an ESP32 with USB around
/// the same time, and so Bluetooth on an STM32 soon became WiFi on an ESP32. At
/// the time, I had not considered how much additional work my decision would
/// entail...
///
/// Suddenly I had to deal with HTTP requests and WebSockets, something I had no
/// idea about. In that sense, this turned out to be a very educational side
/// project, as I finally had to deal with web technologies. Fortunately, I was
/// able to avoid [JavaScript](https://www.destroyallsoftware.com/talks/wat)
/// once again by learning [Dart](https://dart.dev) and
/// [Flutter](https://flutter.dev) \image{inline} html flutter_dash.svg "" for
/// writing the [Frontend](https://openremise.at/Frontend), a combination that
/// I've come to appreciate very much.
///
/// However, the additional workload was not the only problem. The path to the
/// final design of my H-bridge led via **3 different fully integrated ICs**,
/// each of which had its own problems... I will spare you all the details, but
/// one of these problematic H-bridges was the
/// [DRV8874](https://www.ti.com/product/de-de/DRV8874), seen here in a
/// prototype called **WULF**.
///
/// \image html wulf.png "\"WULF\" prototype with DRV8874 H-bridge"
///
/// At some point during this development process I also decided to keep the
/// design [Arduino](https://www.arduino.cc/) compatible. What is never shown on
/// these beautiful PCB pictures on the internet, however, is how **incredibly
/// fiddly** this stacking is... After just one iteration of this design, I had
/// had enough.
///
// clang-format off
/// \page page_history History
/// \details \tableofcontents
/// \image html esp32s3board_drv8328shield.png "Arduino inspired \"ESP32S3Board\" stacked on a \"DRV8328Shield\""
// clang-format on
/// \page page_history History
/// \details \tableofcontents
///
/// From this time on, however, the hardware did not change fundamentally.
/// **OpenRemise** was set as the project name and the design was reduced back
/// to a single board.
///
// clang-format off
/// \page page_history History
/// \details \tableofcontents
/// \image html s3main_reva.png "Final H-bridge design on the first \"S3Main\" revision"
// clang-format on
/// \page page_history History
/// \details \tableofcontents
///
/// When the project was in a reasonably presentable state, I showed it to my
/// employer, who, however, showed no commercial interest in it. At this point
/// it was clear that I had to open source the project so that all my work would
/// not be in vain. The [DCC-EX](https://dcc-ex.com) project and it's success
/// gave me the confidence to actually do this, even though the release was
/// still a long way off at the time...
///
/// <div class="section_buttons">
/// | Previous      |
/// | :------------ |
/// | \ref page_faq |
/// </div>