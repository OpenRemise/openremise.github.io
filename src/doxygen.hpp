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
///   \image{inline} html Z21.png width=16px
///   **Z21**<br>
///   The [Z21
///   protocol](https://www.z21.eu/media/Kwc_Basic_DownloadTag_Component/root-en-main_47-1652-959-downloadTag-download/default/d559b9cf/1699290380/z21-lan-protokoll-en.pdf)
///   became a kind of lingua franca for model railways thanks to its open
///   documentation. For this reason, it is also fully supported by OpenRemise.
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
///   <li>[Rocrail](https://wiki.rocrail.net)</li><br>
///   Cross-platform software for controlling layouts.
///   <li>[ZIMO
///   ZSP](https://www.zimo.at/web2010/products/zsp_zimo-sound-programmer_EN.htm)</li><br>
///   The ZIMO Sound Programmer, used to create, preview and modify sound
///   projects. It also supports updating decoders or loading sound via USB.
///   <li>[Z2X-Programmer](https://github.com/PeterK78/Z2X-Programmer)</li><br>
///   A relatively new programming tool that is still in its early stages, but
///   already works very well.
///   <li>... and probably many more</li><br>
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
///   \image{inline} html wifi.svg width=16px
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
///
/// \section section_getting_started_buy_a_board Buy a Board
/// Not everyone is able to have printed circuit boards manufactured by a PCB
/// prototype service. For this reason, a small contingent of boards is
/// available at the [PCBWay
/// Bazaar](https://www.pcbway.com/project/gifts_list.html?itemsboxid=15&sortid=1&stock=0),
/// a marketplace service specifically for hobbyists and DIY enthusiasts.
///
/// The following OpenRemise boards can currently be ordered:
/// -
/// [S3Main](https://www.pcbway.com/project/gifts_detail/OpenRemise_S3Main_d6e7576a.html)
///
/// Please note that these boards do not contain any software when delivered.
/// This also means that the PCBs can only subjected to a visual inspection and
/// not a functional test. However, I also had all of my \ref page_history
/// "prototypes" manufactured at PCBWay and have not had a single soldering
/// error in over a dozen orders.
///
/// \image html pcbway_bazaar.png "\"S3Main\" on the PCBWay Bazaar" width=640px
///
/// \subsection subsection_getting_started_or_manufacture ...or Manufacture One
/// If you don't fancy buying from PCBWay and you know your way around Gerber
/// files, you are welcome to manufacture your own hardware at any other PCB
/// prototype service, e.g.
/// - [JLCPCB](https://jlcpcb.com)
/// - [Pcbcart](https://www.pcbcart.com)
/// - [Eurocircuits](https://www.eurocircuits.com)
/// - and so forth...
///
/// The [KiCad](https://www.kicad.org) projects with all Gerber files can be
/// found on [GitHub](https://github.com/OpenRemise).
///
/// \section section_getting_started_install Install the Firmware
/// Flashing the firmware for the first time is easier than with many
/// professional products. The only things you need besides the board itself
/// (obviously) are
/// - A DC power supply (10-22V)
/// - A [USB-C](https://en.wikipedia.org/wiki/USB-C) cable
/// - A Windows or Linux computer with a free USB port
///
/// Supply the board with power and plug in the USB-C cable. The **red LED**
/// under the&nbsp; \image{inline} html power.svg width=16px &nbsp;symbol on the
/// board should **light up**.
///
/// \note
/// If the red LED does not light up, please check the polarity of the power
/// supply.
///
/// \subsection subsection_getting_started_bl Put the Board into Bootloader
/// In order to make the board receptive to uploads, we need to switch to the
/// so-called **bootloader**. Conveniently, I printed the instructions directly
/// onto the board \emoji :wink:. The two buttons **EN** and **BOOT** must be
/// pressed in the following order.
/// - Hold EN
/// - Hold BOOT
/// - Release EN
/// - Release BOOT
///
/// Unfortunately, the board doesn't give any feedback as to whether it is
/// actually in boot mode. If it turns out later that it isn't, you can repeat
/// the process at any time without worrying about breaking anything.
///
/// \note
/// Some Windows users have reported that it only worked for them if they
/// **first put the board into the bootloader** and only then plugged in the
/// USB-C cable.
///
/// \subsection subsection_getting_started_flasher Upload the Firmware
/// To flash the firmware onto a factory new board there is a small tool
/// called... well, [Flasher](https://github.com/OpenRemise/Flasher). It is
/// available for both Windows and Linux operating systems. Please select your
/// operating system and follow the steps.
///
// clang-format off
/// \page page_getting_started Getting Started
/// \details \tableofcontents
/// <div class="tabbed">
/// - <b class="tab-title">Windows</b>
///   - Download and extract [Flasher-0.1.1-Windows-x64.zip](https://github.com/OpenRemise/Flasher/releases/download/v0.1.1/Flasher-0.1.1-Windows-x64.zip)
///   - Run `Flasher.bat`
///   - Click the `Download latest firmware` \image{inline} html network_drive.svg width=24px button
///   - Wait until the display shows `Done`
///   - Click the `Start` \image{inline} html play.svg width=24px button
///   - Wait until the display shows `Done` again
///   - Press the EN button on the board to reboot
/// - <b class="tab-title">Linux</b>
///   - Download and extract [Flasher-0.1.1-Linux-x64.zip](https://github.com/OpenRemise/Flasher/releases/download/v0.1.1/Flasher-0.1.1-Linux-x64.zip)
///   - Make `Flasher.sh` executable by running `chmod +x Flasher.sh`
///   - Run `Flasher.sh`
///   - Click the `Download latest firmware` \image{inline} html network_drive.svg width=24px button
///   - Wait until the display shows `Done`
///   - Click the `Start` \image{inline} html play.svg width=24px button
///   - Wait until the display shows `Done` again
///   - Press the EN button on the board to reboot
/// </div>
// clang-format on
/// \page page_getting_started Getting Started
/// \details \tableofcontents
///
/// The following (accelerated) clip shows what the upload should look like.
/// Depending on the baud rate, uploading the firmware may take **a few
/// minutes**.
///
/// \htmlonly
/// <div class="image">
/// <iframe width="360" height="480" src="install_the_firmware.webm"></iframe>
/// <div class="caption">Flashing the firmware using the "Flasher" tool</div>
/// </div>
/// \endhtmlonly
///
/// \note
/// If the device from which the update is to be performed does not have
/// internet access, it is also possible to open the firmware file from a local
/// storage medium. To do this, use the `Open firmware` \image{inline} html
/// hard_drive.svg width=24px button. The firmware can be downloaded from the
/// following link.<br>
/// https://github.com/OpenRemise/Firmware/releases/latest
///
/// \section section_getting_started_wifi Connect to WiFi
/// Congratulations, you have successfully installed the OpenRemise firmware on
/// a board. Some features, such as USB, already work, but the board is still
/// running in what is known as access point mode. This means that the **board
/// initially opens its own WiFi network** and does not connect to one.
/// Therefore, we still need to adjust the WiFi settings to connect to the
/// desired network.
///
/// To **change the WiFi settings** you have to connect to the board with a
/// WiFi-enabled device. If your PC doesn't have WiFi, you can simply use a
/// smartphone. Any device with a web browser is sufficient.
///
/// The following steps are necessary to change the settings.
/// - Search for new WiFi networks
/// - Connect to `OpenRemise`
/// - Open a web browser and go to `remise.local` (or `192.168.4.1`)
/// - Change the WiFi settings
///   - Optionally change mDNS (restricted to `[^\.]*remise`, so for example
///   `vincents-remise`)
///   - Optionally set a static IP address
/// - Click `Save and restart`
///
/// The following clip shows me performing these steps on my smartphone.
///
/// \htmlonly
/// <div class="image">
/// <iframe width="286" height="640" src="captive_portal.webm"></iframe>
/// <div class="caption">Changing WiFi settings from a smartphone</div>
/// </div>
/// \endhtmlonly
///
/// \note
/// Clicking on the arrow next to "Networks" opens a list of all the networks
/// found, including signal strength and open/closed status. If the network is
/// password protected, a small lock symbol will appear next to it.
///
/// \section section_getting_started_frontend Open the Frontend
/// If the board has restarted and the WiFi settings are correct, it should now
/// connect to the network. The **green LED** under the&nbsp; \image{inline}
/// html wifi.svg width=16px &nbsp;symbol **lights up** as soon as a connection
/// is established.
///
/// From this point on, the web interface ~~will~~ should be available at the
/// local [mDNS](https://en.wikipedia.org/wiki/Multicast_DNS) address (e.g.
/// `http://remise.local`).
///
/// \warning
/// OpenRemise currently only supports
/// [HTTP](https://en.wikipedia.org/wiki/HTTP). Your browser may warn you before
/// accessing this page and ask for explicit permission to access it. To prevent
/// this from happening again on every visit, it is recommended to add an
/// exception.
///
/// \subsection subsection_getting_started_via_mdns ...via mDNS
/// Wait, should? Well, the situation is... complicated. Although all modern
/// browsers support mDNS, they rely on services within the operating system.
/// Unfortunately, this support is limited on **Android** and completely absent
/// from **Windows10**.
///
// clang-format off
/// \page page_getting_started Getting Started
/// \details \tableofcontents
/// | Operating System  | mDNS Support  | Notes                                                                                                                                   |
/// | ----------------- | ------------- | --------------------------------------------------------------------------------------------------------------------------------------- |
/// | **Linux**         | Yes           | Requires `avahi-daemon` (usually installed by default on major distros).                                                                |
/// | **macOS**         | Yes           | Uses Bonjour                                                                                                                            |
/// | **Windows 10/11** | Yes (partial) | Only if Bonjour or other mDNS responder is installed (e.g., via iTunes, Adobe CC, or manually). Windows 11 has improved native support. |
/// | **Android**       | Partial       | mDNS is supported at the app level via `NsdManager`, but **not integrated system-wide**.                                                |
/// | **iOS/iPadOS**    | Yes           | Bonjour-based                                                                                                                           |
// clang-format on
/// \page page_getting_started Getting Started
/// \details \tableofcontents
///
/// \subsection subsection_getting_started_via_ip  ...via IP
/// If you have problems connecting via mDNS, I recommend setting up a static
/// [IP address]((https://en.wikipedia.org/wiki/IP_address)) as described in
/// chapter \ref section_getting_started_wifi. Instead of `remise.local`, you
/// would then type e.g. `192.168.0.4` into the browser's address bar.
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
/// - Open an issue on [GitHub](https://github.com/OpenRemise)
/// - Ask in one of the following forum threads
///   - English
///     -
///     [rmweb.co.uk/forums](https://www.rmweb.co.uk/forums/topic/191684-openremise-new-open-source-command-station-programmer)
///   - German
///     -
///     [stummiforum.de](https://www.stummiforum.de/t233609f7-OpenRemise-Neue-Open-Source-Zentrale-Programmer.html)
///     -
///     [1zu160.net](https://www.1zu160.net/scripte/forum/forum_show.php?id=1445126)
///     -
///     [h0-modellbahnforum.de](https://www.h0-modellbahnforum.de/t352524f19606-OpenRemise-Neue-Open-Source-Zentrale-Programmer.html)
///     - [forum.opendcc.de](https://forum.opendcc.de/viewtopic.php?t=10524)
///     -
///     [kleinbahnsammler.at](https://www.kleinbahnsammler.at/wbb2/index.php?thread/32730-openremise-neue-open-source-zentrale-programmer/)
/// - Or, **after you have already exhausted the other options**, contact me at
///   vincent.hamp@openremise.at
///
/// \section section_faq_contribute How can I get involved?
/// OpenRemise is currently a one-man project, so **any contributions would be
/// very welcome**. These can be made in a variety of ways, you don't have to be
/// a software or electronics expert to help. You could report bugs you find,
/// write documentation or simply answer questions from other users in forums.
/// Tutorials and/or blog posts would also be great! Of course, if you're a
/// coding ninja \emoji :ninja:, I'm not opposed to that either. My own
/// weaknesses lie in graphics and design, which would be awesome to complement
/// as well.
///
/// If you are interested, please contact me in the forums mentioned \ref
/// section_faq_support "above" or at my email address.
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
/// \section section_faq_bad_wifi What can I do about a bad WiFi connection?
/// The OpenRemise boards use a small onboard antenna mounted directly on the
/// PCB. These antennas don't have particularly good performance
/// characteristics. Therefore, it's important that the network signal strength
/// is as high as possible. The signal strength (RSSI or <b>r</b>eceived
/// <b>s</b>ignal <b>s</b>trength <b>i</b>ndicator) can be read on the info
/// screen in the web interface and should be **at least 60%**. If the
/// connection times out from time to time despite a good signal strength, it
/// may be helpful to check the Bluetooth devices in the area for possible
/// interference.
///
/// \section section_faq_z21_app How to connect using the Z21 app?
/// Unfortunately, the [Z21 app](https://www.z21.eu/en/products/z21-app)
/// currently does not support mDNS resolution but requires the manual entry of
/// an IP address. However, to find out the IP address of your OpenRemise board,
/// it is sufficient to access the homepage of your domain. The IP address that
/// is shown on the info screen is also the one that must be entered in the Z21
/// app.
///
// clang-format off
/// \page page_faq FAQ
/// \details \tableofcontents
/// \image html how_to_connect_using_the_z21_app.png "Frontend homepage / Z21 app settings screen" width=480px
// clang-format on
/// \page page_faq FAQ
/// \details \tableofcontents
///
/// \section section_faq_usb How to install the "ZIMO Interface" USB driver?
/// If you want to use an OpenRemise board with
/// [ZSP](https://www.zimo.at/web2010/products/zsp_zimo-sound-programmer.htm)
/// you have to install the official ZIMO Interface USB driver. Please download
/// the [ZIMO_Interface.inf](./ZIMO_Interface.inf) file and follow the video
/// description.
/// \htmlonly
/// <div class="image">
/// <iframe width="606" height="462" src="install_usb_driver.webm"></iframe>
/// <div class="caption">Installing the "ZIMO Interface" usb driver</div>
/// </div>
/// \endhtmlonly
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
/// As a rule of thumb, we recommend the following settings for normal
/// operation.
/// | Current [A] | Nominal size                                       |
/// | ----------- | -------------------------------------------------- |
/// | 0.5         | Service mode                                       |
/// | 1.3         | [Z scale](https://en.wikipedia.org/wiki/Z_scale)   |
/// | 2.7         | [N scale](https://en.wikipedia.org/wiki/N_scale)   |
/// | 4.1         | [H0 scale](https://en.wikipedia.org/wiki/HO_scale) |
///
/// \section section_cases I'm looking for a case?
/// The first support case is already available, it has been created by the user
/// [TiffyHH](https://www.thingiverse.com/tiffyhh/designs) (or
/// [vbh](https://www.1zu160.net/scripte/nliste/detail.php?id=17819&fid=1445126)
/// on [1zu160.net](https://www.1zu160.net)). I'm hoping more will follow.
/// \emoji :blush:
///
/// - [Support (Case) for OpenRemise - Remix @
/// thingiverse.com](https://www.thingiverse.com/thing:7020922)
///
// clang-format off
/// \page page_faq FAQ
/// \details \tableofcontents
/// \image html https://cdn.thingiverse.com/assets/ab/c1/3e/df/f3/large_display_IMG_20250424_153304.jpg "Support (Case) for OpenRemise - Remix" width=480px
// clang-format on
/// \page page_faq FAQ
/// \details \tableofcontents
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
/// | Previous                  | Next              |
/// | :------------------------ | ----------------: |
/// | \ref page_getting_started | \ref page_history |
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